/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 01:35:10 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double _NotUsed;
  NULL;
  p_output1[0]=4;
  p_output1[1]=4;
  p_output1[2]=4;
  p_output1[3]=4;
  p_output1[4]=4;
  p_output1[5]=4;
  p_output1[6]=4;
  p_output1[7]=4;
  p_output1[8]=5;
  p_output1[9]=5;
  p_output1[10]=5;
  p_output1[11]=5;
  p_output1[12]=5;
  p_output1[13]=5;
  p_output1[14]=5;
  p_output1[15]=5;
  p_output1[16]=5;
  p_output1[17]=5;
  p_output1[18]=6;
  p_output1[19]=6;
  p_output1[20]=6;
  p_output1[21]=6;
  p_output1[22]=6;
  p_output1[23]=6;
  p_output1[24]=6;
  p_output1[25]=6;
  p_output1[26]=6;
  p_output1[27]=6;
  p_output1[28]=6;
  p_output1[29]=7;
  p_output1[30]=7;
  p_output1[31]=7;
  p_output1[32]=7;
  p_output1[33]=7;
  p_output1[34]=7;
  p_output1[35]=7;
  p_output1[36]=7;
  p_output1[37]=7;
  p_output1[38]=7;
  p_output1[39]=7;
  p_output1[40]=7;
  p_output1[41]=9;
  p_output1[42]=9;
  p_output1[43]=9;
  p_output1[44]=9;
  p_output1[45]=9;
  p_output1[46]=9;
  p_output1[47]=9;
  p_output1[48]=9;
  p_output1[49]=9;
  p_output1[50]=9;
  p_output1[51]=9;
  p_output1[52]=9;
  p_output1[53]=9;
  p_output1[54]=4;
  p_output1[55]=5;
  p_output1[56]=6;
  p_output1[57]=7;
  p_output1[58]=9;
  p_output1[59]=24;
  p_output1[60]=25;
  p_output1[61]=29;
  p_output1[62]=4;
  p_output1[63]=5;
  p_output1[64]=6;
  p_output1[65]=7;
  p_output1[66]=9;
  p_output1[67]=23;
  p_output1[68]=24;
  p_output1[69]=25;
  p_output1[70]=26;
  p_output1[71]=29;
  p_output1[72]=4;
  p_output1[73]=5;
  p_output1[74]=6;
  p_output1[75]=7;
  p_output1[76]=9;
  p_output1[77]=23;
  p_output1[78]=24;
  p_output1[79]=25;
  p_output1[80]=26;
  p_output1[81]=27;
  p_output1[82]=29;
  p_output1[83]=4;
  p_output1[84]=5;
  p_output1[85]=6;
  p_output1[86]=7;
  p_output1[87]=9;
  p_output1[88]=23;
  p_output1[89]=24;
  p_output1[90]=25;
  p_output1[91]=26;
  p_output1[92]=27;
  p_output1[93]=28;
  p_output1[94]=29;
  p_output1[95]=4;
  p_output1[96]=5;
  p_output1[97]=6;
  p_output1[98]=7;
  p_output1[99]=9;
  p_output1[100]=23;
  p_output1[101]=24;
  p_output1[102]=25;
  p_output1[103]=26;
  p_output1[104]=27;
  p_output1[105]=28;
  p_output1[106]=29;
  p_output1[107]=31;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 54, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce3_vec7_minitaur.hh"

namespace FrontStance
{

void Js_Ce3_vec7_minitaur_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE