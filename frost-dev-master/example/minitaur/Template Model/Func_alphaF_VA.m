function [dalphaF,ddalphaF] = Func_alphaF_VA(in1,la)
%FUNC_ALPHAF_VA
%    [DALPHAF,DDALPHAF] = FUNC_ALPHAF_VA(IN1,LA)

%    This function was generated by the Symbolic Math Toolbox version 8.3.
%    25-Jul-2019 16:11:36
                    dx = in1(6,:);          ddx = in1(11,:);
y = in1(2,:);       dy = in1(7,:);          ddy = in1(12,:);
phi = in1(3,:);     dphi = in1(8,:);        ddphi = in1(13,:);

alphaF = in1(5,:);  dalphaF = in1(10,:);

t2 = cos(alphaF);
t3 = sin(phi);
t4 = alphaF+phi;
t5 = alphaF.*2.0;
t6 = alphaF.*3.0;
t7 = dalphaF.^2;
t8 = dphi.^2;
t9 = phi.*2.0;
t10 = phi.*3.0;
t11 = cos(t4);
t12 = sin(t4);
t13 = phi+t4;
t16 = t4.*2.0;
dalphaF = -(dx+dphi.*y.*2.0+dx.*cos(t16)+dy.*sin(t16)+dphi.*la.*t3+dphi.*la.*sin(alphaF+t4))./(y.*2.0+la.*t3.*2.0);
if nargout > 1
    t18 = t4.*3.0;
    t14 = sin(t13);
    t15 = cos(t13);
    t17 = alphaF+t16;
    ddalphaF = -(ddx.*t11.*3.0+ddy.*t12+ddx.*cos(t18)+ddy.*sin(t18)-la.*t8.*cos(t17)+ddphi.*la.*sin(t17)+dalphaF.*dy.*t11.*8.0+dphi.*dy.*t11.*8.0+ddphi.*la.*t14+ddphi.*t11.*y.*4.0+la.*t2.*t7.*4.0+la.*t2.*t8.*6.0-la.*t7.*t15.*4.0-la.*t8.*t15+t7.*t12.*y.*8.0+t8.*t12.*y.*8.0+dalphaF.*dphi.*la.*t2.*1.2e+1-dalphaF.*dphi.*la.*t15.*4.0+dalphaF.*dphi.*t12.*y.*1.6e+1)./(la.*t14.*2.0+t11.*y.*4.0-la.*sin(alphaF).*2.0);
end
