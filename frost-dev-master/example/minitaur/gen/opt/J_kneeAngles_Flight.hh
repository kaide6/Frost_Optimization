/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:03:19 GMT-04:00
 */

#ifndef J_KNEEANGLES_FLIGHT_HH
#define J_KNEEANGLES_FLIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Flight2
{

  void J_kneeAngles_Flight_raw(double *p_output1, const double *var1);

  inline void J_kneeAngles_Flight(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 8, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_kneeAngles_Flight_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_KNEEANGLES_FLIGHT_HH
