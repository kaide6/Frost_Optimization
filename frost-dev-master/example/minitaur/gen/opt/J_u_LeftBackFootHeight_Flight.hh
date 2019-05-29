/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:10:33 GMT-04:00
 */

#ifndef J_U_LEFTBACKFOOTHEIGHT_FLIGHT_HH
#define J_U_LEFTBACKFOOTHEIGHT_FLIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Flight1
{

  void J_u_LeftBackFootHeight_Flight_raw(double *p_output1, const double *var1);

  inline void J_u_LeftBackFootHeight_Flight(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_u_LeftBackFootHeight_Flight_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_U_LEFTBACKFOOTHEIGHT_FLIGHT_HH
