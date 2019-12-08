function leg_sw_rel(nlp, bounds)
    % constraints for leg swing relative to the body 
    
    domain = nlp.Plant;
    x = domain.States.x;
    leg_sw_rel = [...
        (x(8) - x(7)) /2;
        (x(12)- x(11))/2;
        (x(15)- x(16))/2;
        (x(19)- x(20))/2];
    
    leg_sw_rel_fun = SymFunction(['LegSwing_Relative_',domain.Name], leg_sw_rel, {x});
    
    addNodeConstraint(nlp, leg_sw_rel_fun, {'x'}, 1, ...
        bounds.constrBounds.leg_sw_rel_1.lb, ...
        bounds.constrBounds.leg_sw_rel_1.ub,'Linear');
    addNodeConstraint(nlp, leg_sw_rel_fun, {'x'}, 6, ...
        bounds.constrBounds.leg_sw_rel_6.lb, ...
        bounds.constrBounds.leg_sw_rel_6.ub,'Linear');
    addNodeConstraint(nlp, leg_sw_rel_fun, {'x'}, 11, ...
        bounds.constrBounds.leg_sw_rel_11.lb, ...
        bounds.constrBounds.leg_sw_rel_11.ub,'Linear');
    addNodeConstraint(nlp, leg_sw_rel_fun, {'x'}, 16, ...
        bounds.constrBounds.leg_sw_rel_16.lb, ...
        bounds.constrBounds.leg_sw_rel_16.ub,'Linear');
    addNodeConstraint(nlp, leg_sw_rel_fun, {'x'}, 21, ...
        bounds.constrBounds.leg_sw_rel_21.lb, ...
        bounds.constrBounds.leg_sw_rel_21.ub,'Linear');
    
end

