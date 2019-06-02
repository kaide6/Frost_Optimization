/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:13:46 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  double t264;
  double t1230;
  double t26427;
  double t26527;
  double t26562;
  double t26563;
  double t26692;
  double t26700;
  double t27399;
  double t27535;
  double t27536;
  double t27553;
  double t27554;
  double t27555;
  double t27556;
  double t27557;
  double t27565;
  double t27578;
  double t27588;
  double t27589;
  double t27664;
  double t27966;
  double t28147;
  double t28166;
  t264 = -1.*var6[0];
  t1230 = t264 + var6[1];
  t26427 = Power(t1230,-5);
  t26527 = -1. + var7[0];
  t26562 = -1. + var8[0];
  t26563 = 1/t26562;
  t26692 = -1.*var1[0];
  t26700 = t26692 + var1[1];
  t27399 = t26527*t26563*t26700;
  t27535 = t264 + var1[0] + t27399;
  t27536 = Power(t27535,3);
  t27553 = Power(t1230,-4);
  t27554 = Power(t27535,2);
  t27555 = 1/t1230;
  t27556 = -1.*t27555*t27535;
  t27557 = 1. + t27556;
  t27565 = Power(t1230,-3);
  t27578 = Power(t27557,2);
  t27588 = Power(t1230,-2);
  t27589 = Power(t27557,3);
  t27664 = Power(t27535,4);
  t27966 = Power(t27557,4);
  t28147 = Power(t27535,5);
  t28166 = Power(t27557,5);
  p_output1[0]=0.5*var4[6] + 0.5*var4[7] - 20.*t27588*t27589*var5[0] - 60.*t27535*t27565*t27578*var5[8] + 40.*t27588*t27589*var5[8] - 60.*t27553*t27554*t27557*var5[16] + 120.*t27535*t27565*t27578*var5[16] - 20.*t27588*t27589*var5[16] - 20.*t26427*t27536*var5[24] + 120.*t27553*t27554*t27557*var5[24] - 60.*t27535*t27565*t27578*var5[24] + 40.*t26427*t27536*var5[32] - 60.*t27553*t27554*t27557*var5[32] - 20.*t26427*t27536*var5[40] + (0.5*(var2[6] + var2[7]) - 1.*t28166*var5[0] - 5.*t27535*t27555*t27966*var5[8] - 10.*t27554*t27588*t27589*var5[16] - 10.*t27536*t27565*t27578*var5[24] - 5.*t27553*t27557*t27664*var5[32] - 1.*t26427*t28147*var5[40])*var9[0] + (0.5*var3[6] + 0.5*var3[7] + 5.*t27555*t27966*var5[0] + 20.*t27535*t27588*t27589*var5[8] - 5.*t27555*t27966*var5[8] + 30.*t27554*t27565*t27578*var5[16] - 20.*t27535*t27588*t27589*var5[16] + 20.*t27536*t27553*t27557*var5[24] - 30.*t27554*t27565*t27578*var5[24] - 20.*t27536*t27553*t27557*var5[32] + 5.*t26427*t27664*var5[32] - 5.*t26427*t27664*var5[40])*var9[1];
  p_output1[1]=-1.*var4[6] + var4[7] - 20.*t27588*t27589*var5[1] - 60.*t27535*t27565*t27578*var5[9] + 40.*t27588*t27589*var5[9] - 60.*t27553*t27554*t27557*var5[17] + 120.*t27535*t27565*t27578*var5[17] - 20.*t27588*t27589*var5[17] - 20.*t26427*t27536*var5[25] + 120.*t27553*t27554*t27557*var5[25] - 60.*t27535*t27565*t27578*var5[25] + 40.*t26427*t27536*var5[33] - 60.*t27553*t27554*t27557*var5[33] - 20.*t26427*t27536*var5[41] + (-1.*var2[6] + var2[7] - 1.*t28166*var5[1] - 5.*t27535*t27555*t27966*var5[9] - 10.*t27554*t27588*t27589*var5[17] - 10.*t27536*t27565*t27578*var5[25] - 5.*t27553*t27557*t27664*var5[33] - 1.*t26427*t28147*var5[41])*var9[0] + (-1.*var3[6] + var3[7] + 5.*t27555*t27966*var5[1] + 20.*t27535*t27588*t27589*var5[9] - 5.*t27555*t27966*var5[9] + 30.*t27554*t27565*t27578*var5[17] - 20.*t27535*t27588*t27589*var5[17] + 20.*t27536*t27553*t27557*var5[25] - 30.*t27554*t27565*t27578*var5[25] - 20.*t27536*t27553*t27557*var5[33] + 5.*t26427*t27664*var5[33] - 5.*t26427*t27664*var5[41])*var9[1];
  p_output1[2]=0.5*var4[10] + 0.5*var4[11] - 20.*t27588*t27589*var5[2] - 60.*t27535*t27565*t27578*var5[10] + 40.*t27588*t27589*var5[10] - 60.*t27553*t27554*t27557*var5[18] + 120.*t27535*t27565*t27578*var5[18] - 20.*t27588*t27589*var5[18] - 20.*t26427*t27536*var5[26] + 120.*t27553*t27554*t27557*var5[26] - 60.*t27535*t27565*t27578*var5[26] + 40.*t26427*t27536*var5[34] - 60.*t27553*t27554*t27557*var5[34] - 20.*t26427*t27536*var5[42] + (0.5*(var2[10] + var2[11]) - 1.*t28166*var5[2] - 5.*t27535*t27555*t27966*var5[10] - 10.*t27554*t27588*t27589*var5[18] - 10.*t27536*t27565*t27578*var5[26] - 5.*t27553*t27557*t27664*var5[34] - 1.*t26427*t28147*var5[42])*var9[0] + (0.5*var3[10] + 0.5*var3[11] + 5.*t27555*t27966*var5[2] + 20.*t27535*t27588*t27589*var5[10] - 5.*t27555*t27966*var5[10] + 30.*t27554*t27565*t27578*var5[18] - 20.*t27535*t27588*t27589*var5[18] + 20.*t27536*t27553*t27557*var5[26] - 30.*t27554*t27565*t27578*var5[26] - 20.*t27536*t27553*t27557*var5[34] + 5.*t26427*t27664*var5[34] - 5.*t26427*t27664*var5[42])*var9[1];
  p_output1[3]=-1.*var4[10] + var4[11] - 20.*t27588*t27589*var5[3] - 60.*t27535*t27565*t27578*var5[11] + 40.*t27588*t27589*var5[11] - 60.*t27553*t27554*t27557*var5[19] + 120.*t27535*t27565*t27578*var5[19] - 20.*t27588*t27589*var5[19] - 20.*t26427*t27536*var5[27] + 120.*t27553*t27554*t27557*var5[27] - 60.*t27535*t27565*t27578*var5[27] + 40.*t26427*t27536*var5[35] - 60.*t27553*t27554*t27557*var5[35] - 20.*t26427*t27536*var5[43] + (-1.*var2[10] + var2[11] - 1.*t28166*var5[3] - 5.*t27535*t27555*t27966*var5[11] - 10.*t27554*t27588*t27589*var5[19] - 10.*t27536*t27565*t27578*var5[27] - 5.*t27553*t27557*t27664*var5[35] - 1.*t26427*t28147*var5[43])*var9[0] + (-1.*var3[10] + var3[11] + 5.*t27555*t27966*var5[3] + 20.*t27535*t27588*t27589*var5[11] - 5.*t27555*t27966*var5[11] + 30.*t27554*t27565*t27578*var5[19] - 20.*t27535*t27588*t27589*var5[19] + 20.*t27536*t27553*t27557*var5[27] - 30.*t27554*t27565*t27578*var5[27] - 20.*t27536*t27553*t27557*var5[35] + 5.*t26427*t27664*var5[35] - 5.*t26427*t27664*var5[43])*var9[1];
  p_output1[4]=0.5*var4[14] + 0.5*var4[15] - 20.*t27588*t27589*var5[4] - 60.*t27535*t27565*t27578*var5[12] + 40.*t27588*t27589*var5[12] - 60.*t27553*t27554*t27557*var5[20] + 120.*t27535*t27565*t27578*var5[20] - 20.*t27588*t27589*var5[20] - 20.*t26427*t27536*var5[28] + 120.*t27553*t27554*t27557*var5[28] - 60.*t27535*t27565*t27578*var5[28] + 40.*t26427*t27536*var5[36] - 60.*t27553*t27554*t27557*var5[36] - 20.*t26427*t27536*var5[44] + (0.5*(var2[14] + var2[15]) - 1.*t28166*var5[4] - 5.*t27535*t27555*t27966*var5[12] - 10.*t27554*t27588*t27589*var5[20] - 10.*t27536*t27565*t27578*var5[28] - 5.*t27553*t27557*t27664*var5[36] - 1.*t26427*t28147*var5[44])*var9[0] + (0.5*var3[14] + 0.5*var3[15] + 5.*t27555*t27966*var5[4] + 20.*t27535*t27588*t27589*var5[12] - 5.*t27555*t27966*var5[12] + 30.*t27554*t27565*t27578*var5[20] - 20.*t27535*t27588*t27589*var5[20] + 20.*t27536*t27553*t27557*var5[28] - 30.*t27554*t27565*t27578*var5[28] - 20.*t27536*t27553*t27557*var5[36] + 5.*t26427*t27664*var5[36] - 5.*t26427*t27664*var5[44])*var9[1];
  p_output1[5]=-1.*var4[14] + var4[15] - 20.*t27588*t27589*var5[5] - 60.*t27535*t27565*t27578*var5[13] + 40.*t27588*t27589*var5[13] - 60.*t27553*t27554*t27557*var5[21] + 120.*t27535*t27565*t27578*var5[21] - 20.*t27588*t27589*var5[21] - 20.*t26427*t27536*var5[29] + 120.*t27553*t27554*t27557*var5[29] - 60.*t27535*t27565*t27578*var5[29] + 40.*t26427*t27536*var5[37] - 60.*t27553*t27554*t27557*var5[37] - 20.*t26427*t27536*var5[45] + (-1.*var2[14] + var2[15] - 1.*t28166*var5[5] - 5.*t27535*t27555*t27966*var5[13] - 10.*t27554*t27588*t27589*var5[21] - 10.*t27536*t27565*t27578*var5[29] - 5.*t27553*t27557*t27664*var5[37] - 1.*t26427*t28147*var5[45])*var9[0] + (-1.*var3[14] + var3[15] + 5.*t27555*t27966*var5[5] + 20.*t27535*t27588*t27589*var5[13] - 5.*t27555*t27966*var5[13] + 30.*t27554*t27565*t27578*var5[21] - 20.*t27535*t27588*t27589*var5[21] + 20.*t27536*t27553*t27557*var5[29] - 30.*t27554*t27565*t27578*var5[29] - 20.*t27536*t27553*t27557*var5[37] + 5.*t26427*t27664*var5[37] - 5.*t26427*t27664*var5[45])*var9[1];
  p_output1[6]=0.5*var4[18] + 0.5*var4[19] - 20.*t27588*t27589*var5[6] - 60.*t27535*t27565*t27578*var5[14] + 40.*t27588*t27589*var5[14] - 60.*t27553*t27554*t27557*var5[22] + 120.*t27535*t27565*t27578*var5[22] - 20.*t27588*t27589*var5[22] - 20.*t26427*t27536*var5[30] + 120.*t27553*t27554*t27557*var5[30] - 60.*t27535*t27565*t27578*var5[30] + 40.*t26427*t27536*var5[38] - 60.*t27553*t27554*t27557*var5[38] - 20.*t26427*t27536*var5[46] + (0.5*(var2[18] + var2[19]) - 1.*t28166*var5[6] - 5.*t27535*t27555*t27966*var5[14] - 10.*t27554*t27588*t27589*var5[22] - 10.*t27536*t27565*t27578*var5[30] - 5.*t27553*t27557*t27664*var5[38] - 1.*t26427*t28147*var5[46])*var9[0] + (0.5*var3[18] + 0.5*var3[19] + 5.*t27555*t27966*var5[6] + 20.*t27535*t27588*t27589*var5[14] - 5.*t27555*t27966*var5[14] + 30.*t27554*t27565*t27578*var5[22] - 20.*t27535*t27588*t27589*var5[22] + 20.*t27536*t27553*t27557*var5[30] - 30.*t27554*t27565*t27578*var5[30] - 20.*t27536*t27553*t27557*var5[38] + 5.*t26427*t27664*var5[38] - 5.*t26427*t27664*var5[46])*var9[1];
  p_output1[7]=-1.*var4[18] + var4[19] - 20.*t27588*t27589*var5[7] - 60.*t27535*t27565*t27578*var5[15] + 40.*t27588*t27589*var5[15] - 60.*t27553*t27554*t27557*var5[23] + 120.*t27535*t27565*t27578*var5[23] - 20.*t27588*t27589*var5[23] - 20.*t26427*t27536*var5[31] + 120.*t27553*t27554*t27557*var5[31] - 60.*t27535*t27565*t27578*var5[31] + 40.*t26427*t27536*var5[39] - 60.*t27553*t27554*t27557*var5[39] - 20.*t26427*t27536*var5[47] + (-1.*var2[18] + var2[19] - 1.*t28166*var5[7] - 5.*t27535*t27555*t27966*var5[15] - 10.*t27554*t27588*t27589*var5[23] - 10.*t27536*t27565*t27578*var5[31] - 5.*t27553*t27557*t27664*var5[39] - 1.*t26427*t28147*var5[47])*var9[0] + (-1.*var3[18] + var3[19] + 5.*t27555*t27966*var5[7] + 20.*t27535*t27588*t27589*var5[15] - 5.*t27555*t27966*var5[15] + 30.*t27554*t27565*t27578*var5[23] - 20.*t27535*t27588*t27589*var5[23] + 20.*t27536*t27553*t27557*var5[31] - 30.*t27554*t27565*t27578*var5[31] - 20.*t27536*t27553*t27557*var5[39] + 5.*t26427*t27664*var5[39] - 5.*t26427*t27664*var5[47])*var9[1];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8,*var9;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 9)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Nine input(s) required (var1,var2,var3,var4,var5,var6,var7,var8,var9).");
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 48 && ncols == 1) && 
      !(mrows == 1 && ncols == 48))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }
  mrows = mxGetM(prhs[8]);
  ncols = mxGetN(prhs[8]);
  if( !mxIsDouble(prhs[8]) || mxIsComplex(prhs[8]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var9 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
  var9 = mxGetPr(prhs[8]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 8, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "d2y_output_BackStance.hh"

namespace BackStance
{

void d2y_output_BackStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE