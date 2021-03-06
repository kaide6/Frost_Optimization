clc;clear;restoredefaultpath;matlabrc;
cur = pwd;
addpath(genpath(cur));
addpath('../../');
frost_addpath;
export_path = 'gen/opt';
load_path   = 'gen/sym';
%% Settings
LOAD    = 0;
COMPILE = 0;
SAVE    = 0;
OPT     = 1;
ANIMATE = 1;
%% Reference 
load('Solution_DF_La0D987_J2D3_Ks5.mat');
k = 86;
[T_new, Y_new, I_EVENT_new, EXT_rad, avgvel] = output_template(config, Param, k);
reference = reference_generator(Y_new, EXT_rad, I_EVENT_new);

%% Model and System
minitaur = MINITAUR('urdf/minitaur.urdf');
if LOAD
    minitaur.loadDynamics(load_path,true,{},'OmitCoriolisSet',true);
    [System,Domains,Guards] = opt.LoadBehavior(minitaur,load_path);
else
    minitaur.configureDynamics('DelayCoriolisSet',false,'OmitCoriolisSet',true);
    [System,Domains,Guards] = opt.LoadBehavior(minitaur);
end
vel = avgvel;
%% Problem
bounds = opt.GetBounds(minitaur,[vel,0], reference);
num_grid.FrontStance = 10;
num_grid.Fight1      = 10;
num_grid.BackStance  = 10;
num_grid.Flight2     = 10;
options = {...
    'EqualityConstraintBoundary',1e-4...
    'DistributeTimeVariable',false...
    'DistributeParameters',false};
nlp = HybridTrajectoryOptimization('Minitaur_opt',System,num_grid,[],options{:});
nlp.configure(bounds);
opt.cost.Power(nlp,System);
opt.updateVariableBounds(nlp, bounds);
opt.multi_domain_constraints(nlp, bounds);
nlp.update;
%% Compile
if COMPILE
    compileObjective(nlp,[],[],export_path);
    compileConstraint(nlp,[],[],export_path);
end
%% Save
if SAVE
    System.saveExpression(load_path);
end
%% Optimize
if OPT
    ipopt_options.max_iter              = 1000;
    ipopt_options.tol                   = 1e-1;
    ipopt_options.compl_inf_tol         = 1e-1;
    ipopt_options.dual_inf_tol          = 1e-1;
    ipopt_options.constr_viol_tol       = 1e-3;
    solver = IpoptApplication(nlp,ipopt_options);
    tic
    load('output_velocity_075_eps0D25.mat','solution')
    x0 = solution.x;
    [sol, info] = optimize(solver,x0);
    toc
    [tspan, states, inputs, params] = exportSolution(nlp, sol);
    gait = struct(...
        'tspan',tspan,...
        'states',states,...
        'inputs',inputs,...
        'params',params);
    solution.x = sol;
    solution.tspan = tspan;
    solution.states = states;
    solution.inputs = inputs;
    
    solution.params = params;
%     save(['output_velocity_',num2str(round(vel,2)*10)],'solution','gait','nlp','bounds','info')
end
%% Animate
if ANIMATE
    anim = plot.LoadAnimator(minitaur,gait,'SkipExporting',true);
end