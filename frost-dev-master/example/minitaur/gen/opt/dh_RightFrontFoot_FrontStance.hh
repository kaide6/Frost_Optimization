/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:05:14 GMT-04:00
 */

#ifndef DH_RIGHTFRONTFOOT_FRONTSTANCE_HH
#define DH_RIGHTFRONTFOOT_FRONTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace FrontStance
{

  void dh_RightFrontFoot_FrontStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void dh_RightFrontFoot_FrontStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dh_RightFrontFoot_FrontStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DH_RIGHTFRONTFOOT_FRONTSTANCE_HH