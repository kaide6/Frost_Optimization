/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:29:55 GMT-04:00
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
  p_output1[0]=1;
  p_output1[1]=1;
  p_output1[2]=1;
  p_output1[3]=1;
  p_output1[4]=1;
  p_output1[5]=1;
  p_output1[6]=1;
  p_output1[7]=1;
  p_output1[8]=1;
  p_output1[9]=1;
  p_output1[10]=1;
  p_output1[11]=1;
  p_output1[12]=1;
  p_output1[13]=2;
  p_output1[14]=2;
  p_output1[15]=2;
  p_output1[16]=2;
  p_output1[17]=2;
  p_output1[18]=2;
  p_output1[19]=2;
  p_output1[20]=2;
  p_output1[21]=2;
  p_output1[22]=2;
  p_output1[23]=2;
  p_output1[24]=2;
  p_output1[25]=2;
  p_output1[26]=3;
  p_output1[27]=3;
  p_output1[28]=3;
  p_output1[29]=3;
  p_output1[30]=3;
  p_output1[31]=3;
  p_output1[32]=3;
  p_output1[33]=3;
  p_output1[34]=3;
  p_output1[35]=3;
  p_output1[36]=3;
  p_output1[37]=3;
  p_output1[38]=3;
  p_output1[39]=4;
  p_output1[40]=4;
  p_output1[41]=4;
  p_output1[42]=4;
  p_output1[43]=4;
  p_output1[44]=4;
  p_output1[45]=4;
  p_output1[46]=4;
  p_output1[47]=4;
  p_output1[48]=4;
  p_output1[49]=4;
  p_output1[50]=4;
  p_output1[51]=4;
  p_output1[52]=5;
  p_output1[53]=5;
  p_output1[54]=5;
  p_output1[55]=5;
  p_output1[56]=5;
  p_output1[57]=5;
  p_output1[58]=5;
  p_output1[59]=5;
  p_output1[60]=5;
  p_output1[61]=5;
  p_output1[62]=5;
  p_output1[63]=5;
  p_output1[64]=5;
  p_output1[65]=6;
  p_output1[66]=6;
  p_output1[67]=6;
  p_output1[68]=6;
  p_output1[69]=6;
  p_output1[70]=6;
  p_output1[71]=6;
  p_output1[72]=6;
  p_output1[73]=6;
  p_output1[74]=6;
  p_output1[75]=6;
  p_output1[76]=6;
  p_output1[77]=6;
  p_output1[78]=7;
  p_output1[79]=7;
  p_output1[80]=7;
  p_output1[81]=7;
  p_output1[82]=7;
  p_output1[83]=7;
  p_output1[84]=7;
  p_output1[85]=7;
  p_output1[86]=7;
  p_output1[87]=7;
  p_output1[88]=7;
  p_output1[89]=7;
  p_output1[90]=7;
  p_output1[91]=8;
  p_output1[92]=8;
  p_output1[93]=8;
  p_output1[94]=8;
  p_output1[95]=8;
  p_output1[96]=8;
  p_output1[97]=8;
  p_output1[98]=8;
  p_output1[99]=8;
  p_output1[100]=8;
  p_output1[101]=8;
  p_output1[102]=8;
  p_output1[103]=8;
  p_output1[104]=15;
  p_output1[105]=16;
  p_output1[106]=17;
  p_output1[107]=18;
  p_output1[108]=37;
  p_output1[109]=38;
  p_output1[110]=39;
  p_output1[111]=40;
  p_output1[112]=59;
  p_output1[113]=60;
  p_output1[114]=61;
  p_output1[115]=62;
  p_output1[116]=67;
  p_output1[117]=15;
  p_output1[118]=16;
  p_output1[119]=17;
  p_output1[120]=18;
  p_output1[121]=37;
  p_output1[122]=38;
  p_output1[123]=39;
  p_output1[124]=40;
  p_output1[125]=59;
  p_output1[126]=60;
  p_output1[127]=61;
  p_output1[128]=62;
  p_output1[129]=68;
  p_output1[130]=7;
  p_output1[131]=8;
  p_output1[132]=9;
  p_output1[133]=10;
  p_output1[134]=29;
  p_output1[135]=30;
  p_output1[136]=31;
  p_output1[137]=32;
  p_output1[138]=51;
  p_output1[139]=52;
  p_output1[140]=53;
  p_output1[141]=54;
  p_output1[142]=69;
  p_output1[143]=7;
  p_output1[144]=8;
  p_output1[145]=9;
  p_output1[146]=10;
  p_output1[147]=29;
  p_output1[148]=30;
  p_output1[149]=31;
  p_output1[150]=32;
  p_output1[151]=51;
  p_output1[152]=52;
  p_output1[153]=53;
  p_output1[154]=54;
  p_output1[155]=70;
  p_output1[156]=19;
  p_output1[157]=20;
  p_output1[158]=21;
  p_output1[159]=22;
  p_output1[160]=41;
  p_output1[161]=42;
  p_output1[162]=43;
  p_output1[163]=44;
  p_output1[164]=63;
  p_output1[165]=64;
  p_output1[166]=65;
  p_output1[167]=66;
  p_output1[168]=71;
  p_output1[169]=19;
  p_output1[170]=20;
  p_output1[171]=21;
  p_output1[172]=22;
  p_output1[173]=41;
  p_output1[174]=42;
  p_output1[175]=43;
  p_output1[176]=44;
  p_output1[177]=63;
  p_output1[178]=64;
  p_output1[179]=65;
  p_output1[180]=66;
  p_output1[181]=72;
  p_output1[182]=11;
  p_output1[183]=12;
  p_output1[184]=13;
  p_output1[185]=14;
  p_output1[186]=33;
  p_output1[187]=34;
  p_output1[188]=35;
  p_output1[189]=36;
  p_output1[190]=55;
  p_output1[191]=56;
  p_output1[192]=57;
  p_output1[193]=58;
  p_output1[194]=73;
  p_output1[195]=11;
  p_output1[196]=12;
  p_output1[197]=13;
  p_output1[198]=14;
  p_output1[199]=33;
  p_output1[200]=34;
  p_output1[201]=35;
  p_output1[202]=36;
  p_output1[203]=55;
  p_output1[204]=56;
  p_output1[205]=57;
  p_output1[206]=58;
  p_output1[207]=74;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 104, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_ddh_fourBar_minitaur.hh"

namespace FrontStance
{

void Js_ddh_fourBar_minitaur_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
