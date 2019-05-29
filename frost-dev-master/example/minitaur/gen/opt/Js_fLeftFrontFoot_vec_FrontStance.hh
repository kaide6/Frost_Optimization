/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 01:36:55 GMT-04:00
 */

#ifndef JS_FLEFTFRONTFOOT_VEC_FRONTSTANCE_HH
#define JS_FLEFTFRONTFOOT_VEC_FRONTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace FrontStance
{

  void Js_fLeftFrontFoot_vec_FrontStance_raw(double *p_output1, const double *var1);

  inline void Js_fLeftFrontFoot_vec_FrontStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 42, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_fLeftFrontFoot_vec_FrontStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_FLEFTFRONTFOOT_VEC_FRONTSTANCE_HH
