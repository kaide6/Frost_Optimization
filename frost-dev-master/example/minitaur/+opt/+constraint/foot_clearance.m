function foot_clearance(nlp, bounds, frame)
    % constraints for swing foot clearance
    
    domain = nlp.Plant;
    x = domain.States.x;

    pos = getCartesianPosition(domain, frame);    
    constraint_func = SymFunction(['foot_clearance_',frame.Name,'_',domain.Name], pos(3), {x});
    
    % Foot Clearance Middle
%     numNode = nlp.NumNode;
%     addNodeConstraint(nlp, constraint_func, {'x'}, 'first', ...
%         bounds.constrBounds.foot_clearance_begin.lb, ...
%         bounds.constrBounds.foot_clearance_begin.ub, 'Nonlinear');
%     addNodeConstraint(nlp, constraint_func, {'x'}, floor(1*numNode/4), ...
%         bounds.constrBounds.foot_clearance_1.lb, ...
%         bounds.constrBounds.foot_clearance_1.ub,'Nonlinear');
%     addNodeConstraint(nlp, constraint_func, {'x'}, floor(2*numNode/4)+1, ...
%         bounds.constrBounds.foot_clearance_2.lb, ...
%         bounds.constrBounds.foot_clearance_2.ub,'Nonlinear');
%     addNodeConstraint(nlp, constraint_func, {'x'}, floor(3*numNode/4), ...
%         bounds.constrBounds.foot_clearance_3.lb, ...
%         bounds.constrBounds.foot_clearance_3.ub,'Nonlinear');
%     addNodeConstraint(nlp, constraint_func, {'x'}, 'last', ...
%         bounds.constrBounds.foot_clearance_end.lb, ...
%         bounds.constrBounds.foot_clearance_end.ub, 'Nonlinear');

addNodeConstraint(nlp, constraint_func, {'x'}, ceil(nlp.NumNode/2), ...
    bounds.constrBounds.foot_clearance_1.lb, ...
    bounds.constrBounds.foot_clearance_1.ub, 'Nonlinear');
end

