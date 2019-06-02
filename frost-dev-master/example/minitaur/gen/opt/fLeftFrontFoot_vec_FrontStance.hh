/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:14:29 GMT-04:00
 */

#ifndef FLEFTFRONTFOOT_VEC_FRONTSTANCE_HH
#define FLEFTFRONTFOOT_VEC_FRONTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace FrontStance
{

  void fLeftFrontFoot_vec_FrontStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void fLeftFrontFoot_vec_FrontStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 22, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    fLeftFrontFoot_vec_FrontStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // FLEFTFRONTFOOT_VEC_FRONTSTANCE_HH