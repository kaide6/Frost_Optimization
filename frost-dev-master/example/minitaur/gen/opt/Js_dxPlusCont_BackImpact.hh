/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:54:12 GMT-04:00
 */

#ifndef JS_DXPLUSCONT_BACKIMPACT_HH
#define JS_DXPLUSCONT_BACKIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace BackImpact
{

  void Js_dxPlusCont_BackImpact_raw(double *p_output1, const double *var1);

  inline void Js_dxPlusCont_BackImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 44, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_dxPlusCont_BackImpact_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_DXPLUSCONT_BACKIMPACT_HH
