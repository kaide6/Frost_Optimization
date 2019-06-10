function domain = BackStance(model)
%% initialize stance domain
domain = copy(model);
domain.setName('BackStance');

%% Add contact to the stance feet
% Right Back Foot
right_frame = sys.frames.RightBackFoot(domain);
p_right = getCartesianPosition(domain,right_frame);
constr_right = [p_right(1);p_right(2);p_right(3)];
hol_right = HolonomicConstraint(domain,constr_right,'RightBack',...
    'ConstrLabel',{{'RightBackX','RightBackY','RightBackZ'}},...
    'DerivativeOrder',2);
domain = addHolonomicConstraint(domain,hol_right);

f_right = domain.Inputs.ConstraintWrench.fRightBack;
mu = SymVariable('mu');
constr_right = [...
    f_right(3)-300;                         %  fz-300 > 0 
    f_right(1)+(mu/sqrt(2))*f_right(3);     %  fx+mu/sqrt(2)*fz > 0
   -f_right(1)+(mu/sqrt(2))*f_right(3);     % -fx+mu/sqrt(2)*fz > 0
    f_right(2)+(mu/sqrt(2))*f_right(3);     %  fy+mu/sqrt(2)*fz > 0
   -f_right(2)+(mu/sqrt(2))*f_right(3)];    % -fy+mu/sqrt(2)*fz > 0
fc_right = SymFunction(['u_friction_cone_',right_frame.Name],...
    constr_right,{f_right},{mu});
fc_label_right = {...
    'normal_force';
    'friction_x_pos';
    'friction_x_neg';
    'friction_y_pos';
    'friction_y_neg'};
fc_constr_right = UnilateralConstraint(domain,fc_right,...
    ['fc',right_frame.Name],'fRightBack',...
    'ConstrLabel',{fc_label_right(:)'},...
    'AuxData',0.6);
domain = addUnilateralConstraint(domain,fc_constr_right);

% Left Back Foot
left_frame = sys.frames.LeftBackFoot(domain);
p_left = getCartesianPosition(domain,left_frame);
constr_left = [p_left(1);p_left(2);p_left(3)];
hol_left = HolonomicConstraint(domain,constr_left,'LeftBack',...
    'ConstrLabel',{{'LeftBackX','LeftBackY','LeftBackZ'}},...
    'DerivativeOrder',2);
domain = addHolonomicConstraint(domain,hol_left);

f_left = domain.Inputs.ConstraintWrench.fLeftBack;
mu = SymVariable('mu');
constr_left = [...
    f_left(3)-300;                       %  fz-300 > 0 
    f_left(1)+(mu/sqrt(2))*f_left(3);     %  fx+mu/sqrt(2)*fz > 0
   -f_left(1)+(mu/sqrt(2))*f_left(3);     % -fx+mu/sqrt(2)*fz > 0
    f_left(2)+(mu/sqrt(2))*f_left(3);     %  fy+mu/sqrt(2)*fz > 0
   -f_left(2)+(mu/sqrt(2))*f_left(3)];    % -fy+mu/sqrt(2)*fz > 0
fc_left = SymFunction(['u_friction_cone_',left_frame.Name],...
    constr_left,{f_left},{mu});
fc_label_left = {...
    'normal_force';
    'friction_x_pos';
    'friction_x_neg';
    'friction_y_pos';
    'friction_y_neg'};
fc_constr_left = UnilateralConstraint(domain,fc_left,...
    ['fc',left_frame.Name],'fLeftBack',...
    'ConstrLabel',{fc_label_left(:)'},...
    'AuxData',0.6);
domain = addUnilateralConstraint(domain,fc_constr_left);

%% Add event (ground reaction force) for the next guard (back lift) to the stance feet
fz_right = UnilateralConstraint(domain,f_right(3),'RightBackGRF','fRightBack');
domain = addEvent(domain,fz_right);

fz_left = UnilateralConstraint(domain,f_left(3),'LeftBackGRF','fLeftBack');
domain = addEvent(domain,fz_left);

%% Add Virtual Constraints
t = SymVariable('t');
p = SymVariable('p',[2,1]);
tau = (t-p(1))/(p(2)-p(1));
q = domain.States.x;
ya_2 = [...
    (q('motor_front_leftL_joint') - q('motor_front_leftR_joint'))./2+pi;
     q('motor_front_leftL_joint') + q('motor_front_leftR_joint');
    (q('motor_back_leftL_joint')  - q('motor_back_leftR_joint'))./2+pi;
     q('motor_back_leftL_joint')  + q('motor_back_leftR_joint');
   (-q('motor_front_rightL_joint')+ q('motor_front_rightR_joint'))./2+pi;
     q('motor_front_rightL_joint')+ q('motor_front_rightR_joint');
   (-q('motor_back_rightL_joint') + q('motor_back_rightR_joint'))./2+pi;
     q('motor_back_rightL_joint') + q('motor_back_rightR_joint')];
y2_label = {'front_left_angle','front_left_length','back_left_angle','back_left_length','front_right_angle','front_right_length','back_right_angle','back_right_length'};
y2 = VirtualConstraint(domain,ya_2,'output','DesiredType','Bezier','PolyDegree',5,...
        'RelativeDegree',2,'OutputLabel',{y2_label},'PhaseType','TimeBased',...
        'PhaseVariable',tau,'PhaseParams',p,'Holonomic',true, 'LoadPath', []);
domain = addVirtualConstraint(domain,y2);
end