/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:16:24 GMT-04:00
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
  double t36215;
  double t12118;
  double t20976;
  double t36175;
  double t36187;
  double t36210;
  double t36280;
  double t36298;
  double t36343;
  double t36344;
  double t36352;
  double t36564;
  double t36565;
  double t36605;
  double t36649;
  double t36694;
  double t36698;
  double t36699;
  double t36716;
  double t36717;
  double t36722;
  double t36724;
  double t36751;
  double t36767;
  double t36807;
  double t36899;
  double t36900;
  double t36752;
  double t36753;
  double t36755;
  double t36756;
  double t36761;
  double t36762;
  double t36763;
  double t36764;
  double t36765;
  double t36766;
  double t36768;
  double t36769;
  double t36770;
  double t36771;
  t36215 = -1.*var5[0];
  t12118 = -1. + var6[0];
  t20976 = -1. + var7[0];
  t36175 = 1/t20976;
  t36187 = -1.*t12118*t36175;
  t36210 = 1. + t36187;
  t36280 = t36215 + var5[1];
  t36298 = Power(t36280,-5);
  t36343 = -1.*var1[0];
  t36344 = t36343 + var1[1];
  t36352 = t12118*t36175*t36344;
  t36564 = t36215 + var1[0] + t36352;
  t36565 = Power(t36564,3);
  t36605 = Power(t36280,-4);
  t36649 = Power(t36564,2);
  t36694 = 1/t36280;
  t36698 = -1.*t36694*t36564;
  t36699 = 1. + t36698;
  t36716 = Power(t36280,-3);
  t36717 = Power(t36699,2);
  t36722 = Power(t36280,-2);
  t36724 = Power(t36699,3);
  t36751 = Power(t36699,4);
  t36767 = Power(t36564,4);
  t36807 = Power(t36280,-6);
  t36899 = -1.*t36722*t36564;
  t36900 = t36694 + t36899;
  t36752 = 5.*t36694*t36751;
  t36753 = 20.*t36722*t36564*t36724;
  t36755 = -5.*t36694*t36751;
  t36756 = t36753 + t36755;
  t36761 = 30.*t36716*t36649*t36717;
  t36762 = -20.*t36722*t36564*t36724;
  t36763 = t36761 + t36762;
  t36764 = 20.*t36605*t36565*t36699;
  t36765 = -30.*t36716*t36649*t36717;
  t36766 = t36764 + t36765;
  t36768 = 5.*t36298*t36767;
  t36769 = -20.*t36605*t36565*t36699;
  t36770 = t36768 + t36769;
  t36771 = -5.*t36298*t36767;
  p_output1[0]=-20.*t36210*t36722*t36724*var4[0] - 60.*t36210*t36564*t36716*t36717*var4[8] + 40.*t36210*t36722*t36724*var4[8] - 60.*t36210*t36605*t36649*t36699*var4[16] + 120.*t36210*t36564*t36716*t36717*var4[16] - 20.*t36210*t36722*t36724*var4[16] - 20.*t36210*t36298*t36565*var4[24] + 120.*t36210*t36605*t36649*t36699*var4[24] - 60.*t36210*t36564*t36716*t36717*var4[24] + 40.*t36210*t36298*t36565*var4[32] - 60.*t36210*t36605*t36649*t36699*var4[32] - 20.*t36210*t36298*t36565*var4[40];
  p_output1[1]=-20.*t12118*t36175*t36722*t36724*var4[0] - 60.*t12118*t36175*t36564*t36716*t36717*var4[8] + 40.*t12118*t36175*t36722*t36724*var4[8] - 60.*t12118*t36175*t36605*t36649*t36699*var4[16] + 120.*t12118*t36175*t36564*t36716*t36717*var4[16] - 20.*t12118*t36175*t36722*t36724*var4[16] - 20.*t12118*t36175*t36298*t36565*var4[24] + 120.*t12118*t36175*t36605*t36649*t36699*var4[24] - 60.*t12118*t36175*t36564*t36716*t36717*var4[24] + 40.*t12118*t36175*t36298*t36565*var4[32] - 60.*t12118*t36175*t36605*t36649*t36699*var4[32] - 20.*t12118*t36175*t36298*t36565*var4[40];
  p_output1[2]=0.5;
  p_output1[3]=0.5;
  p_output1[4]=t36752;
  p_output1[5]=t36756;
  p_output1[6]=t36763;
  p_output1[7]=t36766;
  p_output1[8]=t36770;
  p_output1[9]=t36771;
  p_output1[10]=5.*t36722*t36751*var4[0] + 20.*t36694*t36724*t36900*var4[0] + 40.*t36564*t36716*t36724*var4[8] - 20.*t36722*t36724*var4[8] - 5.*t36722*t36751*var4[8] + 60.*t36564*t36717*t36722*t36900*var4[8] - 20.*t36694*t36724*t36900*var4[8] + 90.*t36605*t36649*t36717*var4[16] - 60.*t36564*t36716*t36717*var4[16] - 40.*t36564*t36716*t36724*var4[16] + 20.*t36722*t36724*var4[16] + 60.*t36649*t36699*t36716*t36900*var4[16] - 60.*t36564*t36717*t36722*t36900*var4[16] + 80.*t36298*t36565*t36699*var4[24] - 60.*t36605*t36649*t36699*var4[24] - 90.*t36605*t36649*t36717*var4[24] + 60.*t36564*t36716*t36717*var4[24] + 20.*t36565*t36605*t36900*var4[24] - 60.*t36649*t36699*t36716*t36900*var4[24] - 20.*t36298*t36565*var4[32] - 80.*t36298*t36565*t36699*var4[32] + 60.*t36605*t36649*t36699*var4[32] + 25.*t36767*t36807*var4[32] - 20.*t36565*t36605*t36900*var4[32] + 20.*t36298*t36565*var4[40] - 25.*t36767*t36807*var4[40];
  p_output1[11]=20.*t36564*t36716*t36724*var4[0] - 5.*t36722*t36751*var4[0] + 60.*t36605*t36649*t36717*var4[8] - 60.*t36564*t36716*t36724*var4[8] + 5.*t36722*t36751*var4[8] + 60.*t36298*t36565*t36699*var4[16] - 150.*t36605*t36649*t36717*var4[16] + 40.*t36564*t36716*t36724*var4[16] - 140.*t36298*t36565*t36699*var4[24] + 90.*t36605*t36649*t36717*var4[24] + 20.*t36767*t36807*var4[24] + 80.*t36298*t36565*t36699*var4[32] - 45.*t36767*t36807*var4[32] + 25.*t36767*t36807*var4[40];
  p_output1[12]=-20.*t36210*t36722*t36724*var4[1] - 60.*t36210*t36564*t36716*t36717*var4[9] + 40.*t36210*t36722*t36724*var4[9] - 60.*t36210*t36605*t36649*t36699*var4[17] + 120.*t36210*t36564*t36716*t36717*var4[17] - 20.*t36210*t36722*t36724*var4[17] - 20.*t36210*t36298*t36565*var4[25] + 120.*t36210*t36605*t36649*t36699*var4[25] - 60.*t36210*t36564*t36716*t36717*var4[25] + 40.*t36210*t36298*t36565*var4[33] - 60.*t36210*t36605*t36649*t36699*var4[33] - 20.*t36210*t36298*t36565*var4[41];
  p_output1[13]=-20.*t12118*t36175*t36722*t36724*var4[1] - 60.*t12118*t36175*t36564*t36716*t36717*var4[9] + 40.*t12118*t36175*t36722*t36724*var4[9] - 60.*t12118*t36175*t36605*t36649*t36699*var4[17] + 120.*t12118*t36175*t36564*t36716*t36717*var4[17] - 20.*t12118*t36175*t36722*t36724*var4[17] - 20.*t12118*t36175*t36298*t36565*var4[25] + 120.*t12118*t36175*t36605*t36649*t36699*var4[25] - 60.*t12118*t36175*t36564*t36716*t36717*var4[25] + 40.*t12118*t36175*t36298*t36565*var4[33] - 60.*t12118*t36175*t36605*t36649*t36699*var4[33] - 20.*t12118*t36175*t36298*t36565*var4[41];
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t36752;
  p_output1[17]=t36756;
  p_output1[18]=t36763;
  p_output1[19]=t36766;
  p_output1[20]=t36770;
  p_output1[21]=t36771;
  p_output1[22]=5.*t36722*t36751*var4[1] + 20.*t36694*t36724*t36900*var4[1] + 40.*t36564*t36716*t36724*var4[9] - 20.*t36722*t36724*var4[9] - 5.*t36722*t36751*var4[9] + 60.*t36564*t36717*t36722*t36900*var4[9] - 20.*t36694*t36724*t36900*var4[9] + 90.*t36605*t36649*t36717*var4[17] - 60.*t36564*t36716*t36717*var4[17] - 40.*t36564*t36716*t36724*var4[17] + 20.*t36722*t36724*var4[17] + 60.*t36649*t36699*t36716*t36900*var4[17] - 60.*t36564*t36717*t36722*t36900*var4[17] + 80.*t36298*t36565*t36699*var4[25] - 60.*t36605*t36649*t36699*var4[25] - 90.*t36605*t36649*t36717*var4[25] + 60.*t36564*t36716*t36717*var4[25] + 20.*t36565*t36605*t36900*var4[25] - 60.*t36649*t36699*t36716*t36900*var4[25] - 20.*t36298*t36565*var4[33] - 80.*t36298*t36565*t36699*var4[33] + 60.*t36605*t36649*t36699*var4[33] + 25.*t36767*t36807*var4[33] - 20.*t36565*t36605*t36900*var4[33] + 20.*t36298*t36565*var4[41] - 25.*t36767*t36807*var4[41];
  p_output1[23]=20.*t36564*t36716*t36724*var4[1] - 5.*t36722*t36751*var4[1] + 60.*t36605*t36649*t36717*var4[9] - 60.*t36564*t36716*t36724*var4[9] + 5.*t36722*t36751*var4[9] + 60.*t36298*t36565*t36699*var4[17] - 150.*t36605*t36649*t36717*var4[17] + 40.*t36564*t36716*t36724*var4[17] - 140.*t36298*t36565*t36699*var4[25] + 90.*t36605*t36649*t36717*var4[25] + 20.*t36767*t36807*var4[25] + 80.*t36298*t36565*t36699*var4[33] - 45.*t36767*t36807*var4[33] + 25.*t36767*t36807*var4[41];
  p_output1[24]=-20.*t36210*t36722*t36724*var4[2] - 60.*t36210*t36564*t36716*t36717*var4[10] + 40.*t36210*t36722*t36724*var4[10] - 60.*t36210*t36605*t36649*t36699*var4[18] + 120.*t36210*t36564*t36716*t36717*var4[18] - 20.*t36210*t36722*t36724*var4[18] - 20.*t36210*t36298*t36565*var4[26] + 120.*t36210*t36605*t36649*t36699*var4[26] - 60.*t36210*t36564*t36716*t36717*var4[26] + 40.*t36210*t36298*t36565*var4[34] - 60.*t36210*t36605*t36649*t36699*var4[34] - 20.*t36210*t36298*t36565*var4[42];
  p_output1[25]=-20.*t12118*t36175*t36722*t36724*var4[2] - 60.*t12118*t36175*t36564*t36716*t36717*var4[10] + 40.*t12118*t36175*t36722*t36724*var4[10] - 60.*t12118*t36175*t36605*t36649*t36699*var4[18] + 120.*t12118*t36175*t36564*t36716*t36717*var4[18] - 20.*t12118*t36175*t36722*t36724*var4[18] - 20.*t12118*t36175*t36298*t36565*var4[26] + 120.*t12118*t36175*t36605*t36649*t36699*var4[26] - 60.*t12118*t36175*t36564*t36716*t36717*var4[26] + 40.*t12118*t36175*t36298*t36565*var4[34] - 60.*t12118*t36175*t36605*t36649*t36699*var4[34] - 20.*t12118*t36175*t36298*t36565*var4[42];
  p_output1[26]=0.5;
  p_output1[27]=0.5;
  p_output1[28]=t36752;
  p_output1[29]=t36756;
  p_output1[30]=t36763;
  p_output1[31]=t36766;
  p_output1[32]=t36770;
  p_output1[33]=t36771;
  p_output1[34]=5.*t36722*t36751*var4[2] + 20.*t36694*t36724*t36900*var4[2] + 40.*t36564*t36716*t36724*var4[10] - 20.*t36722*t36724*var4[10] - 5.*t36722*t36751*var4[10] + 60.*t36564*t36717*t36722*t36900*var4[10] - 20.*t36694*t36724*t36900*var4[10] + 90.*t36605*t36649*t36717*var4[18] - 60.*t36564*t36716*t36717*var4[18] - 40.*t36564*t36716*t36724*var4[18] + 20.*t36722*t36724*var4[18] + 60.*t36649*t36699*t36716*t36900*var4[18] - 60.*t36564*t36717*t36722*t36900*var4[18] + 80.*t36298*t36565*t36699*var4[26] - 60.*t36605*t36649*t36699*var4[26] - 90.*t36605*t36649*t36717*var4[26] + 60.*t36564*t36716*t36717*var4[26] + 20.*t36565*t36605*t36900*var4[26] - 60.*t36649*t36699*t36716*t36900*var4[26] - 20.*t36298*t36565*var4[34] - 80.*t36298*t36565*t36699*var4[34] + 60.*t36605*t36649*t36699*var4[34] + 25.*t36767*t36807*var4[34] - 20.*t36565*t36605*t36900*var4[34] + 20.*t36298*t36565*var4[42] - 25.*t36767*t36807*var4[42];
  p_output1[35]=20.*t36564*t36716*t36724*var4[2] - 5.*t36722*t36751*var4[2] + 60.*t36605*t36649*t36717*var4[10] - 60.*t36564*t36716*t36724*var4[10] + 5.*t36722*t36751*var4[10] + 60.*t36298*t36565*t36699*var4[18] - 150.*t36605*t36649*t36717*var4[18] + 40.*t36564*t36716*t36724*var4[18] - 140.*t36298*t36565*t36699*var4[26] + 90.*t36605*t36649*t36717*var4[26] + 20.*t36767*t36807*var4[26] + 80.*t36298*t36565*t36699*var4[34] - 45.*t36767*t36807*var4[34] + 25.*t36767*t36807*var4[42];
  p_output1[36]=-20.*t36210*t36722*t36724*var4[3] - 60.*t36210*t36564*t36716*t36717*var4[11] + 40.*t36210*t36722*t36724*var4[11] - 60.*t36210*t36605*t36649*t36699*var4[19] + 120.*t36210*t36564*t36716*t36717*var4[19] - 20.*t36210*t36722*t36724*var4[19] - 20.*t36210*t36298*t36565*var4[27] + 120.*t36210*t36605*t36649*t36699*var4[27] - 60.*t36210*t36564*t36716*t36717*var4[27] + 40.*t36210*t36298*t36565*var4[35] - 60.*t36210*t36605*t36649*t36699*var4[35] - 20.*t36210*t36298*t36565*var4[43];
  p_output1[37]=-20.*t12118*t36175*t36722*t36724*var4[3] - 60.*t12118*t36175*t36564*t36716*t36717*var4[11] + 40.*t12118*t36175*t36722*t36724*var4[11] - 60.*t12118*t36175*t36605*t36649*t36699*var4[19] + 120.*t12118*t36175*t36564*t36716*t36717*var4[19] - 20.*t12118*t36175*t36722*t36724*var4[19] - 20.*t12118*t36175*t36298*t36565*var4[27] + 120.*t12118*t36175*t36605*t36649*t36699*var4[27] - 60.*t12118*t36175*t36564*t36716*t36717*var4[27] + 40.*t12118*t36175*t36298*t36565*var4[35] - 60.*t12118*t36175*t36605*t36649*t36699*var4[35] - 20.*t12118*t36175*t36298*t36565*var4[43];
  p_output1[38]=-1.;
  p_output1[39]=1.;
  p_output1[40]=t36752;
  p_output1[41]=t36756;
  p_output1[42]=t36763;
  p_output1[43]=t36766;
  p_output1[44]=t36770;
  p_output1[45]=t36771;
  p_output1[46]=5.*t36722*t36751*var4[3] + 20.*t36694*t36724*t36900*var4[3] + 40.*t36564*t36716*t36724*var4[11] - 20.*t36722*t36724*var4[11] - 5.*t36722*t36751*var4[11] + 60.*t36564*t36717*t36722*t36900*var4[11] - 20.*t36694*t36724*t36900*var4[11] + 90.*t36605*t36649*t36717*var4[19] - 60.*t36564*t36716*t36717*var4[19] - 40.*t36564*t36716*t36724*var4[19] + 20.*t36722*t36724*var4[19] + 60.*t36649*t36699*t36716*t36900*var4[19] - 60.*t36564*t36717*t36722*t36900*var4[19] + 80.*t36298*t36565*t36699*var4[27] - 60.*t36605*t36649*t36699*var4[27] - 90.*t36605*t36649*t36717*var4[27] + 60.*t36564*t36716*t36717*var4[27] + 20.*t36565*t36605*t36900*var4[27] - 60.*t36649*t36699*t36716*t36900*var4[27] - 20.*t36298*t36565*var4[35] - 80.*t36298*t36565*t36699*var4[35] + 60.*t36605*t36649*t36699*var4[35] + 25.*t36767*t36807*var4[35] - 20.*t36565*t36605*t36900*var4[35] + 20.*t36298*t36565*var4[43] - 25.*t36767*t36807*var4[43];
  p_output1[47]=20.*t36564*t36716*t36724*var4[3] - 5.*t36722*t36751*var4[3] + 60.*t36605*t36649*t36717*var4[11] - 60.*t36564*t36716*t36724*var4[11] + 5.*t36722*t36751*var4[11] + 60.*t36298*t36565*t36699*var4[19] - 150.*t36605*t36649*t36717*var4[19] + 40.*t36564*t36716*t36724*var4[19] - 140.*t36298*t36565*t36699*var4[27] + 90.*t36605*t36649*t36717*var4[27] + 20.*t36767*t36807*var4[27] + 80.*t36298*t36565*t36699*var4[35] - 45.*t36767*t36807*var4[35] + 25.*t36767*t36807*var4[43];
  p_output1[48]=-20.*t36210*t36722*t36724*var4[4] - 60.*t36210*t36564*t36716*t36717*var4[12] + 40.*t36210*t36722*t36724*var4[12] - 60.*t36210*t36605*t36649*t36699*var4[20] + 120.*t36210*t36564*t36716*t36717*var4[20] - 20.*t36210*t36722*t36724*var4[20] - 20.*t36210*t36298*t36565*var4[28] + 120.*t36210*t36605*t36649*t36699*var4[28] - 60.*t36210*t36564*t36716*t36717*var4[28] + 40.*t36210*t36298*t36565*var4[36] - 60.*t36210*t36605*t36649*t36699*var4[36] - 20.*t36210*t36298*t36565*var4[44];
  p_output1[49]=-20.*t12118*t36175*t36722*t36724*var4[4] - 60.*t12118*t36175*t36564*t36716*t36717*var4[12] + 40.*t12118*t36175*t36722*t36724*var4[12] - 60.*t12118*t36175*t36605*t36649*t36699*var4[20] + 120.*t12118*t36175*t36564*t36716*t36717*var4[20] - 20.*t12118*t36175*t36722*t36724*var4[20] - 20.*t12118*t36175*t36298*t36565*var4[28] + 120.*t12118*t36175*t36605*t36649*t36699*var4[28] - 60.*t12118*t36175*t36564*t36716*t36717*var4[28] + 40.*t12118*t36175*t36298*t36565*var4[36] - 60.*t12118*t36175*t36605*t36649*t36699*var4[36] - 20.*t12118*t36175*t36298*t36565*var4[44];
  p_output1[50]=0.5;
  p_output1[51]=0.5;
  p_output1[52]=t36752;
  p_output1[53]=t36756;
  p_output1[54]=t36763;
  p_output1[55]=t36766;
  p_output1[56]=t36770;
  p_output1[57]=t36771;
  p_output1[58]=5.*t36722*t36751*var4[4] + 20.*t36694*t36724*t36900*var4[4] + 40.*t36564*t36716*t36724*var4[12] - 20.*t36722*t36724*var4[12] - 5.*t36722*t36751*var4[12] + 60.*t36564*t36717*t36722*t36900*var4[12] - 20.*t36694*t36724*t36900*var4[12] + 90.*t36605*t36649*t36717*var4[20] - 60.*t36564*t36716*t36717*var4[20] - 40.*t36564*t36716*t36724*var4[20] + 20.*t36722*t36724*var4[20] + 60.*t36649*t36699*t36716*t36900*var4[20] - 60.*t36564*t36717*t36722*t36900*var4[20] + 80.*t36298*t36565*t36699*var4[28] - 60.*t36605*t36649*t36699*var4[28] - 90.*t36605*t36649*t36717*var4[28] + 60.*t36564*t36716*t36717*var4[28] + 20.*t36565*t36605*t36900*var4[28] - 60.*t36649*t36699*t36716*t36900*var4[28] - 20.*t36298*t36565*var4[36] - 80.*t36298*t36565*t36699*var4[36] + 60.*t36605*t36649*t36699*var4[36] + 25.*t36767*t36807*var4[36] - 20.*t36565*t36605*t36900*var4[36] + 20.*t36298*t36565*var4[44] - 25.*t36767*t36807*var4[44];
  p_output1[59]=20.*t36564*t36716*t36724*var4[4] - 5.*t36722*t36751*var4[4] + 60.*t36605*t36649*t36717*var4[12] - 60.*t36564*t36716*t36724*var4[12] + 5.*t36722*t36751*var4[12] + 60.*t36298*t36565*t36699*var4[20] - 150.*t36605*t36649*t36717*var4[20] + 40.*t36564*t36716*t36724*var4[20] - 140.*t36298*t36565*t36699*var4[28] + 90.*t36605*t36649*t36717*var4[28] + 20.*t36767*t36807*var4[28] + 80.*t36298*t36565*t36699*var4[36] - 45.*t36767*t36807*var4[36] + 25.*t36767*t36807*var4[44];
  p_output1[60]=-20.*t36210*t36722*t36724*var4[5] - 60.*t36210*t36564*t36716*t36717*var4[13] + 40.*t36210*t36722*t36724*var4[13] - 60.*t36210*t36605*t36649*t36699*var4[21] + 120.*t36210*t36564*t36716*t36717*var4[21] - 20.*t36210*t36722*t36724*var4[21] - 20.*t36210*t36298*t36565*var4[29] + 120.*t36210*t36605*t36649*t36699*var4[29] - 60.*t36210*t36564*t36716*t36717*var4[29] + 40.*t36210*t36298*t36565*var4[37] - 60.*t36210*t36605*t36649*t36699*var4[37] - 20.*t36210*t36298*t36565*var4[45];
  p_output1[61]=-20.*t12118*t36175*t36722*t36724*var4[5] - 60.*t12118*t36175*t36564*t36716*t36717*var4[13] + 40.*t12118*t36175*t36722*t36724*var4[13] - 60.*t12118*t36175*t36605*t36649*t36699*var4[21] + 120.*t12118*t36175*t36564*t36716*t36717*var4[21] - 20.*t12118*t36175*t36722*t36724*var4[21] - 20.*t12118*t36175*t36298*t36565*var4[29] + 120.*t12118*t36175*t36605*t36649*t36699*var4[29] - 60.*t12118*t36175*t36564*t36716*t36717*var4[29] + 40.*t12118*t36175*t36298*t36565*var4[37] - 60.*t12118*t36175*t36605*t36649*t36699*var4[37] - 20.*t12118*t36175*t36298*t36565*var4[45];
  p_output1[62]=-1.;
  p_output1[63]=1.;
  p_output1[64]=t36752;
  p_output1[65]=t36756;
  p_output1[66]=t36763;
  p_output1[67]=t36766;
  p_output1[68]=t36770;
  p_output1[69]=t36771;
  p_output1[70]=5.*t36722*t36751*var4[5] + 20.*t36694*t36724*t36900*var4[5] + 40.*t36564*t36716*t36724*var4[13] - 20.*t36722*t36724*var4[13] - 5.*t36722*t36751*var4[13] + 60.*t36564*t36717*t36722*t36900*var4[13] - 20.*t36694*t36724*t36900*var4[13] + 90.*t36605*t36649*t36717*var4[21] - 60.*t36564*t36716*t36717*var4[21] - 40.*t36564*t36716*t36724*var4[21] + 20.*t36722*t36724*var4[21] + 60.*t36649*t36699*t36716*t36900*var4[21] - 60.*t36564*t36717*t36722*t36900*var4[21] + 80.*t36298*t36565*t36699*var4[29] - 60.*t36605*t36649*t36699*var4[29] - 90.*t36605*t36649*t36717*var4[29] + 60.*t36564*t36716*t36717*var4[29] + 20.*t36565*t36605*t36900*var4[29] - 60.*t36649*t36699*t36716*t36900*var4[29] - 20.*t36298*t36565*var4[37] - 80.*t36298*t36565*t36699*var4[37] + 60.*t36605*t36649*t36699*var4[37] + 25.*t36767*t36807*var4[37] - 20.*t36565*t36605*t36900*var4[37] + 20.*t36298*t36565*var4[45] - 25.*t36767*t36807*var4[45];
  p_output1[71]=20.*t36564*t36716*t36724*var4[5] - 5.*t36722*t36751*var4[5] + 60.*t36605*t36649*t36717*var4[13] - 60.*t36564*t36716*t36724*var4[13] + 5.*t36722*t36751*var4[13] + 60.*t36298*t36565*t36699*var4[21] - 150.*t36605*t36649*t36717*var4[21] + 40.*t36564*t36716*t36724*var4[21] - 140.*t36298*t36565*t36699*var4[29] + 90.*t36605*t36649*t36717*var4[29] + 20.*t36767*t36807*var4[29] + 80.*t36298*t36565*t36699*var4[37] - 45.*t36767*t36807*var4[37] + 25.*t36767*t36807*var4[45];
  p_output1[72]=-20.*t36210*t36722*t36724*var4[6] - 60.*t36210*t36564*t36716*t36717*var4[14] + 40.*t36210*t36722*t36724*var4[14] - 60.*t36210*t36605*t36649*t36699*var4[22] + 120.*t36210*t36564*t36716*t36717*var4[22] - 20.*t36210*t36722*t36724*var4[22] - 20.*t36210*t36298*t36565*var4[30] + 120.*t36210*t36605*t36649*t36699*var4[30] - 60.*t36210*t36564*t36716*t36717*var4[30] + 40.*t36210*t36298*t36565*var4[38] - 60.*t36210*t36605*t36649*t36699*var4[38] - 20.*t36210*t36298*t36565*var4[46];
  p_output1[73]=-20.*t12118*t36175*t36722*t36724*var4[6] - 60.*t12118*t36175*t36564*t36716*t36717*var4[14] + 40.*t12118*t36175*t36722*t36724*var4[14] - 60.*t12118*t36175*t36605*t36649*t36699*var4[22] + 120.*t12118*t36175*t36564*t36716*t36717*var4[22] - 20.*t12118*t36175*t36722*t36724*var4[22] - 20.*t12118*t36175*t36298*t36565*var4[30] + 120.*t12118*t36175*t36605*t36649*t36699*var4[30] - 60.*t12118*t36175*t36564*t36716*t36717*var4[30] + 40.*t12118*t36175*t36298*t36565*var4[38] - 60.*t12118*t36175*t36605*t36649*t36699*var4[38] - 20.*t12118*t36175*t36298*t36565*var4[46];
  p_output1[74]=0.5;
  p_output1[75]=0.5;
  p_output1[76]=t36752;
  p_output1[77]=t36756;
  p_output1[78]=t36763;
  p_output1[79]=t36766;
  p_output1[80]=t36770;
  p_output1[81]=t36771;
  p_output1[82]=5.*t36722*t36751*var4[6] + 20.*t36694*t36724*t36900*var4[6] + 40.*t36564*t36716*t36724*var4[14] - 20.*t36722*t36724*var4[14] - 5.*t36722*t36751*var4[14] + 60.*t36564*t36717*t36722*t36900*var4[14] - 20.*t36694*t36724*t36900*var4[14] + 90.*t36605*t36649*t36717*var4[22] - 60.*t36564*t36716*t36717*var4[22] - 40.*t36564*t36716*t36724*var4[22] + 20.*t36722*t36724*var4[22] + 60.*t36649*t36699*t36716*t36900*var4[22] - 60.*t36564*t36717*t36722*t36900*var4[22] + 80.*t36298*t36565*t36699*var4[30] - 60.*t36605*t36649*t36699*var4[30] - 90.*t36605*t36649*t36717*var4[30] + 60.*t36564*t36716*t36717*var4[30] + 20.*t36565*t36605*t36900*var4[30] - 60.*t36649*t36699*t36716*t36900*var4[30] - 20.*t36298*t36565*var4[38] - 80.*t36298*t36565*t36699*var4[38] + 60.*t36605*t36649*t36699*var4[38] + 25.*t36767*t36807*var4[38] - 20.*t36565*t36605*t36900*var4[38] + 20.*t36298*t36565*var4[46] - 25.*t36767*t36807*var4[46];
  p_output1[83]=20.*t36564*t36716*t36724*var4[6] - 5.*t36722*t36751*var4[6] + 60.*t36605*t36649*t36717*var4[14] - 60.*t36564*t36716*t36724*var4[14] + 5.*t36722*t36751*var4[14] + 60.*t36298*t36565*t36699*var4[22] - 150.*t36605*t36649*t36717*var4[22] + 40.*t36564*t36716*t36724*var4[22] - 140.*t36298*t36565*t36699*var4[30] + 90.*t36605*t36649*t36717*var4[30] + 20.*t36767*t36807*var4[30] + 80.*t36298*t36565*t36699*var4[38] - 45.*t36767*t36807*var4[38] + 25.*t36767*t36807*var4[46];
  p_output1[84]=-20.*t36210*t36722*t36724*var4[7] - 60.*t36210*t36564*t36716*t36717*var4[15] + 40.*t36210*t36722*t36724*var4[15] - 60.*t36210*t36605*t36649*t36699*var4[23] + 120.*t36210*t36564*t36716*t36717*var4[23] - 20.*t36210*t36722*t36724*var4[23] - 20.*t36210*t36298*t36565*var4[31] + 120.*t36210*t36605*t36649*t36699*var4[31] - 60.*t36210*t36564*t36716*t36717*var4[31] + 40.*t36210*t36298*t36565*var4[39] - 60.*t36210*t36605*t36649*t36699*var4[39] - 20.*t36210*t36298*t36565*var4[47];
  p_output1[85]=-20.*t12118*t36175*t36722*t36724*var4[7] - 60.*t12118*t36175*t36564*t36716*t36717*var4[15] + 40.*t12118*t36175*t36722*t36724*var4[15] - 60.*t12118*t36175*t36605*t36649*t36699*var4[23] + 120.*t12118*t36175*t36564*t36716*t36717*var4[23] - 20.*t12118*t36175*t36722*t36724*var4[23] - 20.*t12118*t36175*t36298*t36565*var4[31] + 120.*t12118*t36175*t36605*t36649*t36699*var4[31] - 60.*t12118*t36175*t36564*t36716*t36717*var4[31] + 40.*t12118*t36175*t36298*t36565*var4[39] - 60.*t12118*t36175*t36605*t36649*t36699*var4[39] - 20.*t12118*t36175*t36298*t36565*var4[47];
  p_output1[86]=-1.;
  p_output1[87]=1.;
  p_output1[88]=t36752;
  p_output1[89]=t36756;
  p_output1[90]=t36763;
  p_output1[91]=t36766;
  p_output1[92]=t36770;
  p_output1[93]=t36771;
  p_output1[94]=5.*t36722*t36751*var4[7] + 20.*t36694*t36724*t36900*var4[7] + 40.*t36564*t36716*t36724*var4[15] - 20.*t36722*t36724*var4[15] - 5.*t36722*t36751*var4[15] + 60.*t36564*t36717*t36722*t36900*var4[15] - 20.*t36694*t36724*t36900*var4[15] + 90.*t36605*t36649*t36717*var4[23] - 60.*t36564*t36716*t36717*var4[23] - 40.*t36564*t36716*t36724*var4[23] + 20.*t36722*t36724*var4[23] + 60.*t36649*t36699*t36716*t36900*var4[23] - 60.*t36564*t36717*t36722*t36900*var4[23] + 80.*t36298*t36565*t36699*var4[31] - 60.*t36605*t36649*t36699*var4[31] - 90.*t36605*t36649*t36717*var4[31] + 60.*t36564*t36716*t36717*var4[31] + 20.*t36565*t36605*t36900*var4[31] - 60.*t36649*t36699*t36716*t36900*var4[31] - 20.*t36298*t36565*var4[39] - 80.*t36298*t36565*t36699*var4[39] + 60.*t36605*t36649*t36699*var4[39] + 25.*t36767*t36807*var4[39] - 20.*t36565*t36605*t36900*var4[39] + 20.*t36298*t36565*var4[47] - 25.*t36767*t36807*var4[47];
  p_output1[95]=20.*t36564*t36716*t36724*var4[7] - 5.*t36722*t36751*var4[7] + 60.*t36605*t36649*t36717*var4[15] - 60.*t36564*t36716*t36724*var4[15] + 5.*t36722*t36751*var4[15] + 60.*t36298*t36565*t36699*var4[23] - 150.*t36605*t36649*t36717*var4[23] + 40.*t36564*t36716*t36724*var4[23] - 140.*t36298*t36565*t36699*var4[31] + 90.*t36605*t36649*t36717*var4[31] + 20.*t36767*t36807*var4[31] + 80.*t36298*t36565*t36699*var4[39] - 45.*t36767*t36807*var4[39] + 25.*t36767*t36807*var4[47];
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

#include "J_d1y_output_Flight.hh"

namespace Flight2
{

void J_d1y_output_Flight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE