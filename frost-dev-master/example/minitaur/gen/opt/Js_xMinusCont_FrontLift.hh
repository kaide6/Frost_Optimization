/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:07:49 GMT-04:00
 */

#ifndef JS_XMINUSCONT_FRONTLIFT_HH
#define JS_XMINUSCONT_FRONTLIFT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace FrontLift
{

  void Js_xMinusCont_FrontLift_raw(double *p_output1, const double *var1);

  inline void Js_xMinusCont_FrontLift(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 44, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_xMinusCont_FrontLift_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_XMINUSCONT_FRONTLIFT_HH