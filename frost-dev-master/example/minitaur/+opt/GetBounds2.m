function bounds = GetBounds2(model, vel, T)
    if nargin < 2
        vel = [0,0];
    end
    if nargin < 3
        T = 0.4;
    end
    %% first get the model specific boundary values
    model_bounds = model.getLimits(); % x, dx, ddx, Control
    model_bounds.options.enforceVirtualConstraints = true;
    % fixed joint constraint wrench
    model_bounds.inputs.ConstraintWrench.ffourBar.lb = -1000;
    model_bounds.inputs.ConstraintWrench.ffourBar.ub = 1000;
    % fixed joint constraints
    model_bounds.params.pfourBar.lb = zeros(8,1);
    model_bounds.params.pfourBar.ub = zeros(8,1);
    
    % feedback control gain for virtual constraints
    model_bounds.gains.kp = 100;
    model_bounds.gains.kd = 20;
    
    %%% Step Duration
    model_bounds.time.duration.lb = T;
    model_bounds.time.duration.ub = T;
    model_bounds.time.duration.x0 = T;
    
    model_bounds.time.t0.lb = 0;
    model_bounds.time.t0.ub = 0;
    model_bounds.time.t0.x0 = 0;
    
    model_bounds.time.tf.lb = T;
    model_bounds.time.tf.ub = T;
    model_bounds.time.tf.x0 = T;
    
    % Virtual Constraints
    model_bounds.params.aoutput.lb = -2*pi;
    model_bounds.params.aoutput.ub = 2*pi;
    
    model_bounds.params.poutput.lb = [0, 0];
    model_bounds.params.poutput.ub = [0, T];
    model_bounds.params.poutput.x0 = [0, T];
    
    model_bounds.params.pRightFront.lb = [-5, -5, 0];
    model_bounds.params.pRightFront.ub = [5, 5, 0];
    
    model_bounds.params.pLeftFront.lb = [-5, -5, 0];
    model_bounds.params.pLeftFront.ub = [5, 5, 0];
    
    model_bounds.params.pRightBack.lb = [-5, -5, 0];
    model_bounds.params.pRightBack.ub = [5, 5, 0];
    
    model_bounds.params.pLeftBack.lb = [-5, -5, 0];
    model_bounds.params.pLeftBack.ub = [5, 5, 0];
    
    % foot rising
    model_bounds.constrBounds.foot_rising_begin.lb = 0;
    model_bounds.constrBounds.foot_rising_begin.ub = 0;
    model_bounds.constrBounds.foot_rising_1.lb = 0.07;
    model_bounds.constrBounds.foot_rising_1.ub = 0.35;
    model_bounds.constrBounds.foot_rising_end.lb = 0.1;
    model_bounds.constrBounds.foot_rising_end.ub = 0.5;
    
    % foot clearance
    model_bounds.constrBounds.foot_clearance_begin.lb = 0.1;    % node 5
    model_bounds.constrBounds.foot_clearance_begin.ub = 0.5;    % node 5 
    model_bounds.constrBounds.foot_clearance_1.lb = 0.1;   % node 5
    model_bounds.constrBounds.foot_clearance_1.ub = 0.5;   % node 5 
    model_bounds.constrBounds.foot_clearance_2.lb = 0.1;   % node 11
    model_bounds.constrBounds.foot_clearance_2.ub = 0.5;   % node 11
    model_bounds.constrBounds.foot_clearance_3.lb = 0.1;   % node 15
    model_bounds.constrBounds.foot_clearance_3.ub = 0.5;   % node 15
    model_bounds.constrBounds.foot_clearance_end.lb = 0.1;      % node 21
    model_bounds.constrBounds.foot_clearance_end.ub = 0.5;      % node 21
    
    % foot falling
    model_bounds.constrBounds.foot_falling_begin.lb = 0.1;
    model_bounds.constrBounds.foot_falling_begin.ub = 0.5;
    model_bounds.constrBounds.foot_falling_1.lb = 0.07;
    model_bounds.constrBounds.foot_falling_1.ub = 0.35;
    model_bounds.constrBounds.foot_falling_end.lb = 0;
    model_bounds.constrBounds.foot_falling_end.ub = 0;
    
    % knee angle
    model_bounds.constrBounds.knee.lb = [deg2rad(60),deg2rad(60),deg2rad(60),deg2rad(60)];        % all node 
    model_bounds.constrBounds.knee.ub = [deg2rad(300),deg2rad(300),deg2rad(300),deg2rad(300)];    % all node 
    
    % impact velocity
    model_bounds.constrBounds.footVelocityBeginning.lb  = [-0.15,  -0.15,   0   ]'; % node 1
    model_bounds.constrBounds.footVelocityBeginning.ub  = [ 0.15,   0.15,   0.3 ]'; % node 1
    model_bounds.constrBounds.footVelocityEnd.lb        = [-0.15,  -0.15,  -0.25]'; % node 21
    model_bounds.constrBounds.footVelocityEnd.ub        = [ 0.15,   0.15,  -0.05]'; % node 21
    
    % yaw start
    model_bounds.constrBounds.yaw_initial.lb = 0;   % node 1
    model_bounds.constrBounds.yaw_initial.ub = 0;   % node 1
    
    % average velocity
    model_bounds.constrBounds.averageVelocity.lb = vel;     % node 1
    model_bounds.constrBounds.averageVelocity.ub = vel;     % node 1
    
    % bezier symmetry
    model_bounds.constrBounds.BezierSymmetry.lb = 0;
    model_bounds.constrBounds.BezierSymmetry.ub = 0;
    
    %% construct the boundary values for each domain 
    bounds = struct();
    %% Front Stance
    bounds.FrontStance = model_bounds;
    bounds.FrontStance.inputs.ConstraintWrench.fRightFront.lb = [-1000,-1000,0]';
    bounds.FrontStance.inputs.ConstraintWrench.fRightFront.ub = [1000,1000,1000]';
    bounds.FrontStance.inputs.ConstraintWrench.fLeftFront.lb = [-1000,-1000,0]';
    bounds.FrontStance.inputs.ConstraintWrench.fLeftFront.ub = [1000,1000,1000]';
    
    %% Back Impact
    bounds.BackImpact.states.x = model_bounds.states.x;
    bounds.BackImpact.states.xn = model_bounds.states.x;
    bounds.BackImpact.states.dx = model_bounds.states.dx;
    bounds.BackImpact.states.dxn = model_bounds.states.dx;
    
    bounds.BackImpact.inputs = struct();
    bounds.BackImpact.inputs.ConstraintWrench.ffourBar.lb = -20;
    bounds.BackImpact.inputs.ConstraintWrench.ffourBar.ub = 20;
    bounds.BackImpact.inputs.ConstraintWrench.fLeftBack.lb = [-20,-20,0]';
    bounds.BackImpact.inputs.ConstraintWrench.fLeftBack.ub = [20,20,150]';
    bounds.BackImpact.inputs.ConstraintWrench.fRightBack.lb = [-20,-20,0]';
    bounds.BackImpact.inputs.ConstraintWrench.fRightBack.ub = [20,20,150]';
    
    bounds.BackImpact.params = struct();

    %% Back Stance
    bounds.BackStance = model_bounds;
    bounds.BackStance.inputs.ConstraintWrench.fLeftBack.lb = [-1000,-1000,0]';
    bounds.BackStance.inputs.ConstraintWrench.fLeftBack.ub = [1000,1000,1000]';
    bounds.BackStance.inputs.ConstraintWrench.fRightBack.lb = [-1000,-1000,0]';
    bounds.BackStance.inputs.ConstraintWrench.fRightBack.ub = [1000,1000,1000]';
    
    %% Front Impact
    bounds.FrontImpact.states.x = model_bounds.states.x;
    bounds.FrontImpact.states.xn = model_bounds.states.x;
    bounds.FrontImpact.states.dx = model_bounds.states.dx;
    bounds.FrontImpact.states.dxn = model_bounds.states.dx;
    
    bounds.FrontImpact.inputs = struct();
    bounds.FrontImpact.inputs.ConstraintWrench.ffourBar.lb = -20;
    bounds.FrontImpact.inputs.ConstraintWrench.ffourBar.ub = 20;
    bounds.FrontImpact.inputs.ConstraintWrench.fLeftFront.lb = [-20,-20,0]'';
    bounds.FrontImpact.inputs.ConstraintWrench.fLeftFront.ub = [20,20,150]';
    bounds.FrontImpact.inputs.ConstraintWrench.fRightFront.lb = [-20,-20,0]'';
    bounds.FrontImpact.inputs.ConstraintWrench.fRightFront.ub = [20,20,150]'; 
    
    bounds.FrontImpact.params = struct();
    
    %% Flight1
    bounds.Flight1 = model_bounds;

    %% Front Lift
    bounds.FrontLift.states.x = model_bounds.states.x;
    bounds.FrontLift.states.xn = model_bounds.states.x;
    bounds.FrontLift.states.dx = model_bounds.states.dx;
    bounds.FrontLift.states.dxn = model_bounds.states.dx;
    
    bounds.FrontLift.inputs = struct(); 
    bounds.FrontLift.inputs.ConstraintWrench.ffourBar.lb = -20;
    bounds.FrontLift.inputs.ConstraintWrench.ffourBar.ub = 20;
    
    bounds.FrontLift.params = struct();
    
    %% Flight2
    bounds.Flight2 = model_bounds;
    
    %% Back Lift
    bounds.BackLift.states.x = model_bounds.states.x;
    bounds.BackLift.states.xn = model_bounds.states.x;
    bounds.BackLift.states.dx = model_bounds.states.dx;
    bounds.BackLift.states.dxn = model_bounds.states.dx;
    
    bounds.BackLift.inputs = struct();
    bounds.BackLift.inputs.ConstraintWrench.ffourBar.lb = -20;
    bounds.BackLift.inputs.ConstraintWrench.ffourBar.ub = 20;
    
    bounds.BackLift.params = struct();
    
end
