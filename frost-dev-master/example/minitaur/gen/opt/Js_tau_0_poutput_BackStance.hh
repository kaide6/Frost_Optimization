/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:44:15 GMT-04:00
 */

#ifndef JS_TAU_0_POUTPUT_BACKSTANCE_HH
#define JS_TAU_0_POUTPUT_BACKSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace BackStance
{

  void Js_tau_0_poutput_BackStance_raw(double *p_output1, const double *var1);

  inline void Js_tau_0_poutput_BackStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_tau_0_poutput_BackStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_TAU_0_POUTPUT_BACKSTANCE_HH
