/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:14:45 GMT-04:00
 */

#ifndef AVGSTEPVELOCITY_BACKSTANCE_HH
#define AVGSTEPVELOCITY_BACKSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace BackStance
{

  void avgStepVelocity_BackStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void avgStepVelocity_BackStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 22, 1);
    assert_size_matrix(var3, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    avgStepVelocity_BackStance_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // AVGSTEPVELOCITY_BACKSTANCE_HH