/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:03:06 GMT-04:00
 */

#ifndef JS_IMPACT_VELOCITY_RIGHTBACKFOOT_HH
#define JS_IMPACT_VELOCITY_RIGHTBACKFOOT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Flight2
{

  void Js_impact_velocity_RightBackFoot_raw(double *p_output1, const double *var1);

  inline void Js_impact_velocity_RightBackFoot(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 31, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_impact_velocity_RightBackFoot_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_IMPACT_VELOCITY_RIGHTBACKFOOT_HH
