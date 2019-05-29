/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:05:49 GMT-04:00
 */

#ifndef J_DDH_LEFTFRONTFOOT_FRONTSTANCE_HH
#define J_DDH_LEFTFRONTFOOT_FRONTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace FrontStance
{

  void J_ddh_LeftFrontFoot_FrontStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void J_ddh_LeftFrontFoot_FrontStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);
    assert_size_matrix(var3, 22, 1);
    assert_size_matrix(var4, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 54, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_ddh_LeftFrontFoot_FrontStance_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_DDH_LEFTFRONTFOOT_FRONTSTANCE_HH
