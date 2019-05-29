/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:06:14 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t33;
  double t108;
  double t163;
  double t203;
  double t223;
  double t259;
  double t287;
  double t288;
  double t300;
  double t302;
  double t304;
  double t307;
  double t309;
  double t315;
  double t317;
  double t319;
  double t331;
  double t332;
  double t340;
  double t342;
  double t344;
  double t345;
  double t354;
  double t378;
  double t379;
  double t396;
  double t416;
  t33 = Power(var3[6],2);
  t108 = Power(var2[0],2);
  t163 = t33*t108;
  t203 = Power(var3[7],2);
  t223 = Power(var2[1],2);
  t259 = t203*t223;
  t287 = Power(var3[10],2);
  t288 = Power(var2[2],2);
  t300 = t287*t288;
  t302 = Power(var3[11],2);
  t304 = Power(var2[3],2);
  t307 = t302*t304;
  t309 = Power(var3[14],2);
  t315 = Power(var2[4],2);
  t317 = t309*t315;
  t319 = Power(var3[15],2);
  t331 = Power(var2[5],2);
  t332 = t319*t331;
  t340 = Power(var3[18],2);
  t342 = Power(var2[6],2);
  t344 = t340*t342;
  t345 = Power(var3[19],2);
  t354 = Power(var2[7],2);
  t378 = t345*t354;
  t379 = t163 + t259 + t300 + t307 + t317 + t332 + t344 + t378;
  t396 = -1.*var1[0];
  t416 = t396 + var1[1];
  p_output1[0]=-1.*t379*var4[0];
  p_output1[1]=t379*var4[0];
  p_output1[2]=2.*t33*t416*var2[0]*var4[0];
  p_output1[3]=2.*t203*t416*var2[1]*var4[0];
  p_output1[4]=2.*t287*t416*var2[2]*var4[0];
  p_output1[5]=2.*t302*t416*var2[3]*var4[0];
  p_output1[6]=2.*t309*t416*var2[4]*var4[0];
  p_output1[7]=2.*t319*t416*var2[5]*var4[0];
  p_output1[8]=2.*t340*t416*var2[6]*var4[0];
  p_output1[9]=2.*t345*t416*var2[7]*var4[0];
  p_output1[10]=2.*t108*t416*var3[6]*var4[0];
  p_output1[11]=2.*t223*t416*var3[7]*var4[0];
  p_output1[12]=2.*t288*t416*var3[10]*var4[0];
  p_output1[13]=2.*t304*t416*var3[11]*var4[0];
  p_output1[14]=2.*t315*t416*var3[14]*var4[0];
  p_output1[15]=2.*t331*t416*var3[15]*var4[0];
  p_output1[16]=2.*t342*t416*var3[18]*var4[0];
  p_output1[17]=2.*t354*t416*var3[19]*var4[0];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 8 && ncols == 1) && 
      !(mrows == 1 && ncols == 8))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_power_FrontStance_integral.hh"

namespace FrontStance
{

void J_power_FrontStance_integral_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
