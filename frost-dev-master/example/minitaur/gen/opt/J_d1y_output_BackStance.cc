/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:57:35 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t19830;
  double t15077;
  double t15127;
  double t19801;
  double t19803;
  double t19818;
  double t20253;
  double t20711;
  double t21179;
  double t21449;
  double t21516;
  double t21567;
  double t21573;
  double t21662;
  double t21668;
  double t21688;
  double t21765;
  double t22525;
  double t22676;
  double t22686;
  double t22900;
  double t23016;
  double t23469;
  double t23608;
  double t23894;
  double t23918;
  double t23939;
  double t23474;
  double t23480;
  double t23485;
  double t23493;
  double t23512;
  double t23513;
  double t23515;
  double t23519;
  double t23562;
  double t23601;
  double t23652;
  double t23686;
  double t23694;
  double t23759;
  t19830 = -1.*var5[0];
  t15077 = -1. + var6[0];
  t15127 = -1. + var7[0];
  t19801 = 1/t15127;
  t19803 = -1.*t15077*t19801;
  t19818 = 1. + t19803;
  t20253 = t19830 + var5[1];
  t20711 = Power(t20253,-5);
  t21179 = -1.*var1[0];
  t21449 = t21179 + var1[1];
  t21516 = t15077*t19801*t21449;
  t21567 = t19830 + var1[0] + t21516;
  t21573 = Power(t21567,3);
  t21662 = Power(t20253,-4);
  t21668 = Power(t21567,2);
  t21688 = 1/t20253;
  t21765 = -1.*t21688*t21567;
  t22525 = 1. + t21765;
  t22676 = Power(t20253,-3);
  t22686 = Power(t22525,2);
  t22900 = Power(t20253,-2);
  t23016 = Power(t22525,3);
  t23469 = Power(t22525,4);
  t23608 = Power(t21567,4);
  t23894 = Power(t20253,-6);
  t23918 = -1.*t22900*t21567;
  t23939 = t21688 + t23918;
  t23474 = 5.*t21688*t23469;
  t23480 = 20.*t22900*t21567*t23016;
  t23485 = -5.*t21688*t23469;
  t23493 = t23480 + t23485;
  t23512 = 30.*t22676*t21668*t22686;
  t23513 = -20.*t22900*t21567*t23016;
  t23515 = t23512 + t23513;
  t23519 = 20.*t21662*t21573*t22525;
  t23562 = -30.*t22676*t21668*t22686;
  t23601 = t23519 + t23562;
  t23652 = 5.*t20711*t23608;
  t23686 = -20.*t21662*t21573*t22525;
  t23694 = t23652 + t23686;
  t23759 = -5.*t20711*t23608;
  p_output1[0]=-20.*t19818*t22900*t23016*var4[0] - 60.*t19818*t21567*t22676*t22686*var4[8] + 40.*t19818*t22900*t23016*var4[8] - 60.*t19818*t21662*t21668*t22525*var4[16] + 120.*t19818*t21567*t22676*t22686*var4[16] - 20.*t19818*t22900*t23016*var4[16] - 20.*t19818*t20711*t21573*var4[24] + 120.*t19818*t21662*t21668*t22525*var4[24] - 60.*t19818*t21567*t22676*t22686*var4[24] + 40.*t19818*t20711*t21573*var4[32] - 60.*t19818*t21662*t21668*t22525*var4[32] - 20.*t19818*t20711*t21573*var4[40];
  p_output1[1]=-20.*t15077*t19801*t22900*t23016*var4[0] - 60.*t15077*t19801*t21567*t22676*t22686*var4[8] + 40.*t15077*t19801*t22900*t23016*var4[8] - 60.*t15077*t19801*t21662*t21668*t22525*var4[16] + 120.*t15077*t19801*t21567*t22676*t22686*var4[16] - 20.*t15077*t19801*t22900*t23016*var4[16] - 20.*t15077*t19801*t20711*t21573*var4[24] + 120.*t15077*t19801*t21662*t21668*t22525*var4[24] - 60.*t15077*t19801*t21567*t22676*t22686*var4[24] + 40.*t15077*t19801*t20711*t21573*var4[32] - 60.*t15077*t19801*t21662*t21668*t22525*var4[32] - 20.*t15077*t19801*t20711*t21573*var4[40];
  p_output1[2]=0.5;
  p_output1[3]=0.5;
  p_output1[4]=t23474;
  p_output1[5]=t23493;
  p_output1[6]=t23515;
  p_output1[7]=t23601;
  p_output1[8]=t23694;
  p_output1[9]=t23759;
  p_output1[10]=5.*t22900*t23469*var4[0] + 20.*t21688*t23016*t23939*var4[0] + 40.*t21567*t22676*t23016*var4[8] - 20.*t22900*t23016*var4[8] - 5.*t22900*t23469*var4[8] + 60.*t21567*t22686*t22900*t23939*var4[8] - 20.*t21688*t23016*t23939*var4[8] + 90.*t21662*t21668*t22686*var4[16] - 60.*t21567*t22676*t22686*var4[16] - 40.*t21567*t22676*t23016*var4[16] + 20.*t22900*t23016*var4[16] + 60.*t21668*t22525*t22676*t23939*var4[16] - 60.*t21567*t22686*t22900*t23939*var4[16] + 80.*t20711*t21573*t22525*var4[24] - 60.*t21662*t21668*t22525*var4[24] - 90.*t21662*t21668*t22686*var4[24] + 60.*t21567*t22676*t22686*var4[24] + 20.*t21573*t21662*t23939*var4[24] - 60.*t21668*t22525*t22676*t23939*var4[24] - 20.*t20711*t21573*var4[32] - 80.*t20711*t21573*t22525*var4[32] + 60.*t21662*t21668*t22525*var4[32] + 25.*t23608*t23894*var4[32] - 20.*t21573*t21662*t23939*var4[32] + 20.*t20711*t21573*var4[40] - 25.*t23608*t23894*var4[40];
  p_output1[11]=20.*t21567*t22676*t23016*var4[0] - 5.*t22900*t23469*var4[0] + 60.*t21662*t21668*t22686*var4[8] - 60.*t21567*t22676*t23016*var4[8] + 5.*t22900*t23469*var4[8] + 60.*t20711*t21573*t22525*var4[16] - 150.*t21662*t21668*t22686*var4[16] + 40.*t21567*t22676*t23016*var4[16] - 140.*t20711*t21573*t22525*var4[24] + 90.*t21662*t21668*t22686*var4[24] + 20.*t23608*t23894*var4[24] + 80.*t20711*t21573*t22525*var4[32] - 45.*t23608*t23894*var4[32] + 25.*t23608*t23894*var4[40];
  p_output1[12]=-20.*t19818*t22900*t23016*var4[1] - 60.*t19818*t21567*t22676*t22686*var4[9] + 40.*t19818*t22900*t23016*var4[9] - 60.*t19818*t21662*t21668*t22525*var4[17] + 120.*t19818*t21567*t22676*t22686*var4[17] - 20.*t19818*t22900*t23016*var4[17] - 20.*t19818*t20711*t21573*var4[25] + 120.*t19818*t21662*t21668*t22525*var4[25] - 60.*t19818*t21567*t22676*t22686*var4[25] + 40.*t19818*t20711*t21573*var4[33] - 60.*t19818*t21662*t21668*t22525*var4[33] - 20.*t19818*t20711*t21573*var4[41];
  p_output1[13]=-20.*t15077*t19801*t22900*t23016*var4[1] - 60.*t15077*t19801*t21567*t22676*t22686*var4[9] + 40.*t15077*t19801*t22900*t23016*var4[9] - 60.*t15077*t19801*t21662*t21668*t22525*var4[17] + 120.*t15077*t19801*t21567*t22676*t22686*var4[17] - 20.*t15077*t19801*t22900*t23016*var4[17] - 20.*t15077*t19801*t20711*t21573*var4[25] + 120.*t15077*t19801*t21662*t21668*t22525*var4[25] - 60.*t15077*t19801*t21567*t22676*t22686*var4[25] + 40.*t15077*t19801*t20711*t21573*var4[33] - 60.*t15077*t19801*t21662*t21668*t22525*var4[33] - 20.*t15077*t19801*t20711*t21573*var4[41];
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t23474;
  p_output1[17]=t23493;
  p_output1[18]=t23515;
  p_output1[19]=t23601;
  p_output1[20]=t23694;
  p_output1[21]=t23759;
  p_output1[22]=5.*t22900*t23469*var4[1] + 20.*t21688*t23016*t23939*var4[1] + 40.*t21567*t22676*t23016*var4[9] - 20.*t22900*t23016*var4[9] - 5.*t22900*t23469*var4[9] + 60.*t21567*t22686*t22900*t23939*var4[9] - 20.*t21688*t23016*t23939*var4[9] + 90.*t21662*t21668*t22686*var4[17] - 60.*t21567*t22676*t22686*var4[17] - 40.*t21567*t22676*t23016*var4[17] + 20.*t22900*t23016*var4[17] + 60.*t21668*t22525*t22676*t23939*var4[17] - 60.*t21567*t22686*t22900*t23939*var4[17] + 80.*t20711*t21573*t22525*var4[25] - 60.*t21662*t21668*t22525*var4[25] - 90.*t21662*t21668*t22686*var4[25] + 60.*t21567*t22676*t22686*var4[25] + 20.*t21573*t21662*t23939*var4[25] - 60.*t21668*t22525*t22676*t23939*var4[25] - 20.*t20711*t21573*var4[33] - 80.*t20711*t21573*t22525*var4[33] + 60.*t21662*t21668*t22525*var4[33] + 25.*t23608*t23894*var4[33] - 20.*t21573*t21662*t23939*var4[33] + 20.*t20711*t21573*var4[41] - 25.*t23608*t23894*var4[41];
  p_output1[23]=20.*t21567*t22676*t23016*var4[1] - 5.*t22900*t23469*var4[1] + 60.*t21662*t21668*t22686*var4[9] - 60.*t21567*t22676*t23016*var4[9] + 5.*t22900*t23469*var4[9] + 60.*t20711*t21573*t22525*var4[17] - 150.*t21662*t21668*t22686*var4[17] + 40.*t21567*t22676*t23016*var4[17] - 140.*t20711*t21573*t22525*var4[25] + 90.*t21662*t21668*t22686*var4[25] + 20.*t23608*t23894*var4[25] + 80.*t20711*t21573*t22525*var4[33] - 45.*t23608*t23894*var4[33] + 25.*t23608*t23894*var4[41];
  p_output1[24]=-20.*t19818*t22900*t23016*var4[2] - 60.*t19818*t21567*t22676*t22686*var4[10] + 40.*t19818*t22900*t23016*var4[10] - 60.*t19818*t21662*t21668*t22525*var4[18] + 120.*t19818*t21567*t22676*t22686*var4[18] - 20.*t19818*t22900*t23016*var4[18] - 20.*t19818*t20711*t21573*var4[26] + 120.*t19818*t21662*t21668*t22525*var4[26] - 60.*t19818*t21567*t22676*t22686*var4[26] + 40.*t19818*t20711*t21573*var4[34] - 60.*t19818*t21662*t21668*t22525*var4[34] - 20.*t19818*t20711*t21573*var4[42];
  p_output1[25]=-20.*t15077*t19801*t22900*t23016*var4[2] - 60.*t15077*t19801*t21567*t22676*t22686*var4[10] + 40.*t15077*t19801*t22900*t23016*var4[10] - 60.*t15077*t19801*t21662*t21668*t22525*var4[18] + 120.*t15077*t19801*t21567*t22676*t22686*var4[18] - 20.*t15077*t19801*t22900*t23016*var4[18] - 20.*t15077*t19801*t20711*t21573*var4[26] + 120.*t15077*t19801*t21662*t21668*t22525*var4[26] - 60.*t15077*t19801*t21567*t22676*t22686*var4[26] + 40.*t15077*t19801*t20711*t21573*var4[34] - 60.*t15077*t19801*t21662*t21668*t22525*var4[34] - 20.*t15077*t19801*t20711*t21573*var4[42];
  p_output1[26]=0.5;
  p_output1[27]=0.5;
  p_output1[28]=t23474;
  p_output1[29]=t23493;
  p_output1[30]=t23515;
  p_output1[31]=t23601;
  p_output1[32]=t23694;
  p_output1[33]=t23759;
  p_output1[34]=5.*t22900*t23469*var4[2] + 20.*t21688*t23016*t23939*var4[2] + 40.*t21567*t22676*t23016*var4[10] - 20.*t22900*t23016*var4[10] - 5.*t22900*t23469*var4[10] + 60.*t21567*t22686*t22900*t23939*var4[10] - 20.*t21688*t23016*t23939*var4[10] + 90.*t21662*t21668*t22686*var4[18] - 60.*t21567*t22676*t22686*var4[18] - 40.*t21567*t22676*t23016*var4[18] + 20.*t22900*t23016*var4[18] + 60.*t21668*t22525*t22676*t23939*var4[18] - 60.*t21567*t22686*t22900*t23939*var4[18] + 80.*t20711*t21573*t22525*var4[26] - 60.*t21662*t21668*t22525*var4[26] - 90.*t21662*t21668*t22686*var4[26] + 60.*t21567*t22676*t22686*var4[26] + 20.*t21573*t21662*t23939*var4[26] - 60.*t21668*t22525*t22676*t23939*var4[26] - 20.*t20711*t21573*var4[34] - 80.*t20711*t21573*t22525*var4[34] + 60.*t21662*t21668*t22525*var4[34] + 25.*t23608*t23894*var4[34] - 20.*t21573*t21662*t23939*var4[34] + 20.*t20711*t21573*var4[42] - 25.*t23608*t23894*var4[42];
  p_output1[35]=20.*t21567*t22676*t23016*var4[2] - 5.*t22900*t23469*var4[2] + 60.*t21662*t21668*t22686*var4[10] - 60.*t21567*t22676*t23016*var4[10] + 5.*t22900*t23469*var4[10] + 60.*t20711*t21573*t22525*var4[18] - 150.*t21662*t21668*t22686*var4[18] + 40.*t21567*t22676*t23016*var4[18] - 140.*t20711*t21573*t22525*var4[26] + 90.*t21662*t21668*t22686*var4[26] + 20.*t23608*t23894*var4[26] + 80.*t20711*t21573*t22525*var4[34] - 45.*t23608*t23894*var4[34] + 25.*t23608*t23894*var4[42];
  p_output1[36]=-20.*t19818*t22900*t23016*var4[3] - 60.*t19818*t21567*t22676*t22686*var4[11] + 40.*t19818*t22900*t23016*var4[11] - 60.*t19818*t21662*t21668*t22525*var4[19] + 120.*t19818*t21567*t22676*t22686*var4[19] - 20.*t19818*t22900*t23016*var4[19] - 20.*t19818*t20711*t21573*var4[27] + 120.*t19818*t21662*t21668*t22525*var4[27] - 60.*t19818*t21567*t22676*t22686*var4[27] + 40.*t19818*t20711*t21573*var4[35] - 60.*t19818*t21662*t21668*t22525*var4[35] - 20.*t19818*t20711*t21573*var4[43];
  p_output1[37]=-20.*t15077*t19801*t22900*t23016*var4[3] - 60.*t15077*t19801*t21567*t22676*t22686*var4[11] + 40.*t15077*t19801*t22900*t23016*var4[11] - 60.*t15077*t19801*t21662*t21668*t22525*var4[19] + 120.*t15077*t19801*t21567*t22676*t22686*var4[19] - 20.*t15077*t19801*t22900*t23016*var4[19] - 20.*t15077*t19801*t20711*t21573*var4[27] + 120.*t15077*t19801*t21662*t21668*t22525*var4[27] - 60.*t15077*t19801*t21567*t22676*t22686*var4[27] + 40.*t15077*t19801*t20711*t21573*var4[35] - 60.*t15077*t19801*t21662*t21668*t22525*var4[35] - 20.*t15077*t19801*t20711*t21573*var4[43];
  p_output1[38]=-1.;
  p_output1[39]=1.;
  p_output1[40]=t23474;
  p_output1[41]=t23493;
  p_output1[42]=t23515;
  p_output1[43]=t23601;
  p_output1[44]=t23694;
  p_output1[45]=t23759;
  p_output1[46]=5.*t22900*t23469*var4[3] + 20.*t21688*t23016*t23939*var4[3] + 40.*t21567*t22676*t23016*var4[11] - 20.*t22900*t23016*var4[11] - 5.*t22900*t23469*var4[11] + 60.*t21567*t22686*t22900*t23939*var4[11] - 20.*t21688*t23016*t23939*var4[11] + 90.*t21662*t21668*t22686*var4[19] - 60.*t21567*t22676*t22686*var4[19] - 40.*t21567*t22676*t23016*var4[19] + 20.*t22900*t23016*var4[19] + 60.*t21668*t22525*t22676*t23939*var4[19] - 60.*t21567*t22686*t22900*t23939*var4[19] + 80.*t20711*t21573*t22525*var4[27] - 60.*t21662*t21668*t22525*var4[27] - 90.*t21662*t21668*t22686*var4[27] + 60.*t21567*t22676*t22686*var4[27] + 20.*t21573*t21662*t23939*var4[27] - 60.*t21668*t22525*t22676*t23939*var4[27] - 20.*t20711*t21573*var4[35] - 80.*t20711*t21573*t22525*var4[35] + 60.*t21662*t21668*t22525*var4[35] + 25.*t23608*t23894*var4[35] - 20.*t21573*t21662*t23939*var4[35] + 20.*t20711*t21573*var4[43] - 25.*t23608*t23894*var4[43];
  p_output1[47]=20.*t21567*t22676*t23016*var4[3] - 5.*t22900*t23469*var4[3] + 60.*t21662*t21668*t22686*var4[11] - 60.*t21567*t22676*t23016*var4[11] + 5.*t22900*t23469*var4[11] + 60.*t20711*t21573*t22525*var4[19] - 150.*t21662*t21668*t22686*var4[19] + 40.*t21567*t22676*t23016*var4[19] - 140.*t20711*t21573*t22525*var4[27] + 90.*t21662*t21668*t22686*var4[27] + 20.*t23608*t23894*var4[27] + 80.*t20711*t21573*t22525*var4[35] - 45.*t23608*t23894*var4[35] + 25.*t23608*t23894*var4[43];
  p_output1[48]=-20.*t19818*t22900*t23016*var4[4] - 60.*t19818*t21567*t22676*t22686*var4[12] + 40.*t19818*t22900*t23016*var4[12] - 60.*t19818*t21662*t21668*t22525*var4[20] + 120.*t19818*t21567*t22676*t22686*var4[20] - 20.*t19818*t22900*t23016*var4[20] - 20.*t19818*t20711*t21573*var4[28] + 120.*t19818*t21662*t21668*t22525*var4[28] - 60.*t19818*t21567*t22676*t22686*var4[28] + 40.*t19818*t20711*t21573*var4[36] - 60.*t19818*t21662*t21668*t22525*var4[36] - 20.*t19818*t20711*t21573*var4[44];
  p_output1[49]=-20.*t15077*t19801*t22900*t23016*var4[4] - 60.*t15077*t19801*t21567*t22676*t22686*var4[12] + 40.*t15077*t19801*t22900*t23016*var4[12] - 60.*t15077*t19801*t21662*t21668*t22525*var4[20] + 120.*t15077*t19801*t21567*t22676*t22686*var4[20] - 20.*t15077*t19801*t22900*t23016*var4[20] - 20.*t15077*t19801*t20711*t21573*var4[28] + 120.*t15077*t19801*t21662*t21668*t22525*var4[28] - 60.*t15077*t19801*t21567*t22676*t22686*var4[28] + 40.*t15077*t19801*t20711*t21573*var4[36] - 60.*t15077*t19801*t21662*t21668*t22525*var4[36] - 20.*t15077*t19801*t20711*t21573*var4[44];
  p_output1[50]=0.5;
  p_output1[51]=0.5;
  p_output1[52]=t23474;
  p_output1[53]=t23493;
  p_output1[54]=t23515;
  p_output1[55]=t23601;
  p_output1[56]=t23694;
  p_output1[57]=t23759;
  p_output1[58]=5.*t22900*t23469*var4[4] + 20.*t21688*t23016*t23939*var4[4] + 40.*t21567*t22676*t23016*var4[12] - 20.*t22900*t23016*var4[12] - 5.*t22900*t23469*var4[12] + 60.*t21567*t22686*t22900*t23939*var4[12] - 20.*t21688*t23016*t23939*var4[12] + 90.*t21662*t21668*t22686*var4[20] - 60.*t21567*t22676*t22686*var4[20] - 40.*t21567*t22676*t23016*var4[20] + 20.*t22900*t23016*var4[20] + 60.*t21668*t22525*t22676*t23939*var4[20] - 60.*t21567*t22686*t22900*t23939*var4[20] + 80.*t20711*t21573*t22525*var4[28] - 60.*t21662*t21668*t22525*var4[28] - 90.*t21662*t21668*t22686*var4[28] + 60.*t21567*t22676*t22686*var4[28] + 20.*t21573*t21662*t23939*var4[28] - 60.*t21668*t22525*t22676*t23939*var4[28] - 20.*t20711*t21573*var4[36] - 80.*t20711*t21573*t22525*var4[36] + 60.*t21662*t21668*t22525*var4[36] + 25.*t23608*t23894*var4[36] - 20.*t21573*t21662*t23939*var4[36] + 20.*t20711*t21573*var4[44] - 25.*t23608*t23894*var4[44];
  p_output1[59]=20.*t21567*t22676*t23016*var4[4] - 5.*t22900*t23469*var4[4] + 60.*t21662*t21668*t22686*var4[12] - 60.*t21567*t22676*t23016*var4[12] + 5.*t22900*t23469*var4[12] + 60.*t20711*t21573*t22525*var4[20] - 150.*t21662*t21668*t22686*var4[20] + 40.*t21567*t22676*t23016*var4[20] - 140.*t20711*t21573*t22525*var4[28] + 90.*t21662*t21668*t22686*var4[28] + 20.*t23608*t23894*var4[28] + 80.*t20711*t21573*t22525*var4[36] - 45.*t23608*t23894*var4[36] + 25.*t23608*t23894*var4[44];
  p_output1[60]=-20.*t19818*t22900*t23016*var4[5] - 60.*t19818*t21567*t22676*t22686*var4[13] + 40.*t19818*t22900*t23016*var4[13] - 60.*t19818*t21662*t21668*t22525*var4[21] + 120.*t19818*t21567*t22676*t22686*var4[21] - 20.*t19818*t22900*t23016*var4[21] - 20.*t19818*t20711*t21573*var4[29] + 120.*t19818*t21662*t21668*t22525*var4[29] - 60.*t19818*t21567*t22676*t22686*var4[29] + 40.*t19818*t20711*t21573*var4[37] - 60.*t19818*t21662*t21668*t22525*var4[37] - 20.*t19818*t20711*t21573*var4[45];
  p_output1[61]=-20.*t15077*t19801*t22900*t23016*var4[5] - 60.*t15077*t19801*t21567*t22676*t22686*var4[13] + 40.*t15077*t19801*t22900*t23016*var4[13] - 60.*t15077*t19801*t21662*t21668*t22525*var4[21] + 120.*t15077*t19801*t21567*t22676*t22686*var4[21] - 20.*t15077*t19801*t22900*t23016*var4[21] - 20.*t15077*t19801*t20711*t21573*var4[29] + 120.*t15077*t19801*t21662*t21668*t22525*var4[29] - 60.*t15077*t19801*t21567*t22676*t22686*var4[29] + 40.*t15077*t19801*t20711*t21573*var4[37] - 60.*t15077*t19801*t21662*t21668*t22525*var4[37] - 20.*t15077*t19801*t20711*t21573*var4[45];
  p_output1[62]=-1.;
  p_output1[63]=1.;
  p_output1[64]=t23474;
  p_output1[65]=t23493;
  p_output1[66]=t23515;
  p_output1[67]=t23601;
  p_output1[68]=t23694;
  p_output1[69]=t23759;
  p_output1[70]=5.*t22900*t23469*var4[5] + 20.*t21688*t23016*t23939*var4[5] + 40.*t21567*t22676*t23016*var4[13] - 20.*t22900*t23016*var4[13] - 5.*t22900*t23469*var4[13] + 60.*t21567*t22686*t22900*t23939*var4[13] - 20.*t21688*t23016*t23939*var4[13] + 90.*t21662*t21668*t22686*var4[21] - 60.*t21567*t22676*t22686*var4[21] - 40.*t21567*t22676*t23016*var4[21] + 20.*t22900*t23016*var4[21] + 60.*t21668*t22525*t22676*t23939*var4[21] - 60.*t21567*t22686*t22900*t23939*var4[21] + 80.*t20711*t21573*t22525*var4[29] - 60.*t21662*t21668*t22525*var4[29] - 90.*t21662*t21668*t22686*var4[29] + 60.*t21567*t22676*t22686*var4[29] + 20.*t21573*t21662*t23939*var4[29] - 60.*t21668*t22525*t22676*t23939*var4[29] - 20.*t20711*t21573*var4[37] - 80.*t20711*t21573*t22525*var4[37] + 60.*t21662*t21668*t22525*var4[37] + 25.*t23608*t23894*var4[37] - 20.*t21573*t21662*t23939*var4[37] + 20.*t20711*t21573*var4[45] - 25.*t23608*t23894*var4[45];
  p_output1[71]=20.*t21567*t22676*t23016*var4[5] - 5.*t22900*t23469*var4[5] + 60.*t21662*t21668*t22686*var4[13] - 60.*t21567*t22676*t23016*var4[13] + 5.*t22900*t23469*var4[13] + 60.*t20711*t21573*t22525*var4[21] - 150.*t21662*t21668*t22686*var4[21] + 40.*t21567*t22676*t23016*var4[21] - 140.*t20711*t21573*t22525*var4[29] + 90.*t21662*t21668*t22686*var4[29] + 20.*t23608*t23894*var4[29] + 80.*t20711*t21573*t22525*var4[37] - 45.*t23608*t23894*var4[37] + 25.*t23608*t23894*var4[45];
  p_output1[72]=-20.*t19818*t22900*t23016*var4[6] - 60.*t19818*t21567*t22676*t22686*var4[14] + 40.*t19818*t22900*t23016*var4[14] - 60.*t19818*t21662*t21668*t22525*var4[22] + 120.*t19818*t21567*t22676*t22686*var4[22] - 20.*t19818*t22900*t23016*var4[22] - 20.*t19818*t20711*t21573*var4[30] + 120.*t19818*t21662*t21668*t22525*var4[30] - 60.*t19818*t21567*t22676*t22686*var4[30] + 40.*t19818*t20711*t21573*var4[38] - 60.*t19818*t21662*t21668*t22525*var4[38] - 20.*t19818*t20711*t21573*var4[46];
  p_output1[73]=-20.*t15077*t19801*t22900*t23016*var4[6] - 60.*t15077*t19801*t21567*t22676*t22686*var4[14] + 40.*t15077*t19801*t22900*t23016*var4[14] - 60.*t15077*t19801*t21662*t21668*t22525*var4[22] + 120.*t15077*t19801*t21567*t22676*t22686*var4[22] - 20.*t15077*t19801*t22900*t23016*var4[22] - 20.*t15077*t19801*t20711*t21573*var4[30] + 120.*t15077*t19801*t21662*t21668*t22525*var4[30] - 60.*t15077*t19801*t21567*t22676*t22686*var4[30] + 40.*t15077*t19801*t20711*t21573*var4[38] - 60.*t15077*t19801*t21662*t21668*t22525*var4[38] - 20.*t15077*t19801*t20711*t21573*var4[46];
  p_output1[74]=0.5;
  p_output1[75]=0.5;
  p_output1[76]=t23474;
  p_output1[77]=t23493;
  p_output1[78]=t23515;
  p_output1[79]=t23601;
  p_output1[80]=t23694;
  p_output1[81]=t23759;
  p_output1[82]=5.*t22900*t23469*var4[6] + 20.*t21688*t23016*t23939*var4[6] + 40.*t21567*t22676*t23016*var4[14] - 20.*t22900*t23016*var4[14] - 5.*t22900*t23469*var4[14] + 60.*t21567*t22686*t22900*t23939*var4[14] - 20.*t21688*t23016*t23939*var4[14] + 90.*t21662*t21668*t22686*var4[22] - 60.*t21567*t22676*t22686*var4[22] - 40.*t21567*t22676*t23016*var4[22] + 20.*t22900*t23016*var4[22] + 60.*t21668*t22525*t22676*t23939*var4[22] - 60.*t21567*t22686*t22900*t23939*var4[22] + 80.*t20711*t21573*t22525*var4[30] - 60.*t21662*t21668*t22525*var4[30] - 90.*t21662*t21668*t22686*var4[30] + 60.*t21567*t22676*t22686*var4[30] + 20.*t21573*t21662*t23939*var4[30] - 60.*t21668*t22525*t22676*t23939*var4[30] - 20.*t20711*t21573*var4[38] - 80.*t20711*t21573*t22525*var4[38] + 60.*t21662*t21668*t22525*var4[38] + 25.*t23608*t23894*var4[38] - 20.*t21573*t21662*t23939*var4[38] + 20.*t20711*t21573*var4[46] - 25.*t23608*t23894*var4[46];
  p_output1[83]=20.*t21567*t22676*t23016*var4[6] - 5.*t22900*t23469*var4[6] + 60.*t21662*t21668*t22686*var4[14] - 60.*t21567*t22676*t23016*var4[14] + 5.*t22900*t23469*var4[14] + 60.*t20711*t21573*t22525*var4[22] - 150.*t21662*t21668*t22686*var4[22] + 40.*t21567*t22676*t23016*var4[22] - 140.*t20711*t21573*t22525*var4[30] + 90.*t21662*t21668*t22686*var4[30] + 20.*t23608*t23894*var4[30] + 80.*t20711*t21573*t22525*var4[38] - 45.*t23608*t23894*var4[38] + 25.*t23608*t23894*var4[46];
  p_output1[84]=-20.*t19818*t22900*t23016*var4[7] - 60.*t19818*t21567*t22676*t22686*var4[15] + 40.*t19818*t22900*t23016*var4[15] - 60.*t19818*t21662*t21668*t22525*var4[23] + 120.*t19818*t21567*t22676*t22686*var4[23] - 20.*t19818*t22900*t23016*var4[23] - 20.*t19818*t20711*t21573*var4[31] + 120.*t19818*t21662*t21668*t22525*var4[31] - 60.*t19818*t21567*t22676*t22686*var4[31] + 40.*t19818*t20711*t21573*var4[39] - 60.*t19818*t21662*t21668*t22525*var4[39] - 20.*t19818*t20711*t21573*var4[47];
  p_output1[85]=-20.*t15077*t19801*t22900*t23016*var4[7] - 60.*t15077*t19801*t21567*t22676*t22686*var4[15] + 40.*t15077*t19801*t22900*t23016*var4[15] - 60.*t15077*t19801*t21662*t21668*t22525*var4[23] + 120.*t15077*t19801*t21567*t22676*t22686*var4[23] - 20.*t15077*t19801*t22900*t23016*var4[23] - 20.*t15077*t19801*t20711*t21573*var4[31] + 120.*t15077*t19801*t21662*t21668*t22525*var4[31] - 60.*t15077*t19801*t21567*t22676*t22686*var4[31] + 40.*t15077*t19801*t20711*t21573*var4[39] - 60.*t15077*t19801*t21662*t21668*t22525*var4[39] - 20.*t15077*t19801*t20711*t21573*var4[47];
  p_output1[86]=-1.;
  p_output1[87]=1.;
  p_output1[88]=t23474;
  p_output1[89]=t23493;
  p_output1[90]=t23515;
  p_output1[91]=t23601;
  p_output1[92]=t23694;
  p_output1[93]=t23759;
  p_output1[94]=5.*t22900*t23469*var4[7] + 20.*t21688*t23016*t23939*var4[7] + 40.*t21567*t22676*t23016*var4[15] - 20.*t22900*t23016*var4[15] - 5.*t22900*t23469*var4[15] + 60.*t21567*t22686*t22900*t23939*var4[15] - 20.*t21688*t23016*t23939*var4[15] + 90.*t21662*t21668*t22686*var4[23] - 60.*t21567*t22676*t22686*var4[23] - 40.*t21567*t22676*t23016*var4[23] + 20.*t22900*t23016*var4[23] + 60.*t21668*t22525*t22676*t23939*var4[23] - 60.*t21567*t22686*t22900*t23939*var4[23] + 80.*t20711*t21573*t22525*var4[31] - 60.*t21662*t21668*t22525*var4[31] - 90.*t21662*t21668*t22686*var4[31] + 60.*t21567*t22676*t22686*var4[31] + 20.*t21573*t21662*t23939*var4[31] - 60.*t21668*t22525*t22676*t23939*var4[31] - 20.*t20711*t21573*var4[39] - 80.*t20711*t21573*t22525*var4[39] + 60.*t21662*t21668*t22525*var4[39] + 25.*t23608*t23894*var4[39] - 20.*t21573*t21662*t23939*var4[39] + 20.*t20711*t21573*var4[47] - 25.*t23608*t23894*var4[47];
  p_output1[95]=20.*t21567*t22676*t23016*var4[7] - 5.*t22900*t23469*var4[7] + 60.*t21662*t21668*t22686*var4[15] - 60.*t21567*t22676*t23016*var4[15] + 5.*t22900*t23469*var4[15] + 60.*t20711*t21573*t22525*var4[23] - 150.*t21662*t21668*t22686*var4[23] + 40.*t21567*t22676*t23016*var4[23] - 140.*t20711*t21573*t22525*var4[31] + 90.*t21662*t21668*t22686*var4[31] + 20.*t23608*t23894*var4[31] + 80.*t20711*t21573*t22525*var4[39] - 45.*t23608*t23894*var4[39] + 25.*t23608*t23894*var4[47];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
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
    ( !(mrows == 48 && ncols == 1) && 
      !(mrows == 1 && ncols == 48))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 96, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_output_BackStance.hh"

namespace BackStance
{

void J_d1y_output_BackStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
