/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:09:26 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t340;
  double t342;
  double t345;
  double t354;
  double t416;
  double t832;
  double t1274;
  double t1584;
  double t304;
  double t2290;
  double t2366;
  double t2611;
  double t2965;
  double t2317;
  double t3395;
  double t3425;
  double t3692;
  double t3007;
  double t3925;
  double t4331;
  double t2815;
  double t2978;
  double t2988;
  double t3906;
  double t3936;
  double t3725;
  double t3762;
  double t3780;
  double t3850;
  double t3444;
  double t3452;
  double t3459;
  double t4089;
  double t4092;
  double t4096;
  double t4932;
  double t3548;
  double t3549;
  double t3561;
  double t5005;
  double t3003;
  double t3016;
  double t4686;
  double t4688;
  double t4741;
  double t4764;
  double t4865;
  double t4903;
  double t4905;
  double t4908;
  double t3700;
  double t3710;
  double t3899;
  double t3962;
  double t4044;
  double t4085;
  double t4118;
  double t4190;
  double t4356;
  double t4358;
  double t4328;
  double t4346;
  double t4366;
  double t4376;
  double t4379;
  double t4408;
  double t4410;
  double t4395;
  double t4399;
  double t4415;
  double t4426;
  double t4427;
  double t4634;
  double t4703;
  double t4718;
  double t4737;
  double t4871;
  double t4875;
  double t4896;
  double t4913;
  double t4915;
  double t4936;
  double t4945;
  double t4946;
  double t5118;
  double t5139;
  double t5142;
  double t5188;
  double t5201;
  double t5211;
  double t5272;
  double t5283;
  double t5284;
  double t5297;
  double t5301;
  double t5309;
  double t5426;
  double t5447;
  double t5449;
  double t6379;
  double t6381;
  double t6384;
  double t6393;
  double t6402;
  double t6463;
  double t6676;
  double t6698;
  double t6720;
  double t6763;
  double t7079;
  double t7086;
  double t7301;
  double t7328;
  double t7335;
  double t8401;
  double t8403;
  double t8626;
  double t12204;
  double t12304;
  double t12316;
  double t1616;
  double t2319;
  double t2340;
  double t19784;
  double t19794;
  double t19866;
  double t19901;
  double t19910;
  double t19920;
  double t19978;
  double t19982;
  double t19990;
  double t19991;
  double t19782;
  double t19906;
  double t20214;
  double t21473;
  double t22966;
  double t23232;
  double t23235;
  double t23372;
  double t22403;
  double t22410;
  double t22583;
  double t22633;
  double t22776;
  double t21997;
  double t22008;
  double t22032;
  double t22057;
  double t22079;
  double t22082;
  double t29431;
  double t29471;
  double t29827;
  double t24739;
  double t26240;
  double t26621;
  double t22159;
  double t22955;
  double t22956;
  double t22964;
  double t23460;
  double t23471;
  double t19501;
  double t19733;
  double t19779;
  double t27875;
  double t27996;
  double t29161;
  double t2991;
  double t3045;
  double t3088;
  double t29384;
  double t29897;
  double t30116;
  double t30391;
  double t30429;
  double t30434;
  double t3518;
  double t3612;
  double t3626;
  double t33211;
  double t33236;
  double t33239;
  double t50397;
  double t50401;
  double t50425;
  double t31766;
  double t32233;
  double t32297;
  double t32334;
  double t32428;
  double t32479;
  double t32496;
  double t32776;
  double t34145;
  double t34358;
  double t34423;
  double t38524;
  double t45447;
  double t45475;
  double t45536;
  double t45556;
  double t48658;
  double t48660;
  double t49007;
  double t49010;
  double t49615;
  double t49620;
  double t49748;
  double t49785;
  double t51882;
  double t51920;
  double t51921;
  double t4400;
  double t4428;
  double t4431;
  double t54765;
  double t54774;
  double t54789;
  double t54816;
  double t54862;
  double t54798;
  double t54868;
  double t55051;
  double t54654;
  double t54687;
  double t54690;
  double t55900;
  double t55933;
  double t55935;
  double t56014;
  double t56016;
  double t56017;
  double t54754;
  double t55485;
  double t55704;
  double t55972;
  double t56024;
  double t56051;
  double t56296;
  double t56297;
  double t56412;
  double t4348;
  double t4388;
  double t4391;
  double t21952;
  double t22957;
  double t31430;
  double t31432;
  double t33379;
  double t33389;
  double t39321;
  double t42543;
  double t46853;
  double t47649;
  double t49019;
  double t49034;
  double t58933;
  double t59056;
  double t59123;
  double t50355;
  double t50379;
  double t59545;
  double t59699;
  double t59792;
  double t50899;
  double t50908;
  double t60893;
  double t60894;
  double t60895;
  double t51180;
  double t51191;
  double t61297;
  double t61299;
  double t61320;
  double t51298;
  double t51326;
  double t61825;
  double t61834;
  double t61871;
  double t51400;
  double t51402;
  double t61997;
  double t62034;
  double t62056;
  double t51488;
  double t51489;
  double t57941;
  double t57993;
  double t58004;
  double t58394;
  double t58398;
  double t58271;
  double t58274;
  double t55887;
  double t56538;
  double t56547;
  double t58632;
  double t59193;
  double t59337;
  double t60691;
  double t60921;
  double t61024;
  double t61394;
  double t61416;
  double t61885;
  double t61906;
  double t63417;
  double t64894;
  double t64898;
  double t64904;
  double t64919;
  double t64920;
  double t64922;
  double t63512;
  double t63514;
  double t65051;
  double t65053;
  double t65054;
  double t65056;
  double t65058;
  double t65088;
  double t63575;
  double t63576;
  double t63637;
  double t63728;
  double t64620;
  double t64622;
  double t64374;
  double t64473;
  double t64507;
  double t65732;
  double t65769;
  double t65682;
  double t65109;
  double t65154;
  double t65686;
  double t66177;
  double t66195;
  double t66214;
  double t66227;
  double t66278;
  double t66251;
  double t66264;
  double t66285;
  t340 = Cos(var1[20]);
  t342 = -1.*t340;
  t345 = 1. + t342;
  t354 = 3.e-6*t345;
  t416 = 3.e-6*t340;
  t832 = t354 + t416;
  t1274 = Cos(var1[4]);
  t1584 = Cos(var1[5]);
  t304 = Cos(var1[18]);
  t2290 = Sin(var1[18]);
  t2366 = 9.e-12*t345;
  t2611 = t2366 + t342;
  t2965 = Sin(var1[20]);
  t2317 = Sin(var1[4]);
  t3395 = -1.000000000009*t345;
  t3425 = 1. + t3395;
  t3692 = Sin(var1[5]);
  t3007 = -1.000000000009*t304*t2965;
  t3925 = 1.000000000009*t304*t2965;
  t4331 = 1.000000000009*t2290*t2965;
  t2815 = t304*t2611;
  t2978 = -1.000000000009*t2290*t2965;
  t2988 = t2815 + t2978;
  t3906 = t2611*t2290;
  t3936 = t3906 + t3925;
  t3725 = -9.e-12*t345;
  t3762 = 1. + t3725;
  t3780 = -3.e-6*t3762;
  t3850 = t3780 + t354;
  t3444 = -1.*t3425*t2290;
  t3452 = t304*t2965;
  t3459 = t3444 + t3452;
  t4089 = t304*t3425;
  t4092 = t2290*t2965;
  t4096 = t4089 + t4092;
  t4932 = Sin(var1[3]);
  t3548 = -1.*t304*t3425;
  t3549 = -1.*t2290*t2965;
  t3561 = t3548 + t3549;
  t5005 = Cos(var1[3]);
  t3003 = -1.*t2611*t2290;
  t3016 = t3003 + t3007;
  t4686 = t832*t1584*t2290;
  t4688 = t4686 + t3692;
  t4741 = t1584*t3936;
  t4764 = -1.*t3850*t3692;
  t4865 = t4741 + t4764;
  t4903 = t1584*t4096;
  t4905 = -3.e-6*t2965*t3692;
  t4908 = t4903 + t4905;
  t3700 = -1.*t832*t2290*t3692;
  t3710 = t1584 + t3700;
  t3899 = -1.*t3850*t1584;
  t3962 = -1.*t3936*t3692;
  t4044 = t3899 + t3962;
  t4085 = -3.e-6*t1584*t2965;
  t4118 = -1.*t4096*t3692;
  t4190 = t4085 + t4118;
  t4356 = t340*t2290;
  t4358 = t4356 + t3007;
  t4328 = t304*t340;
  t4346 = t4328 + t4331;
  t4366 = t1584*t4358;
  t4376 = -3.e-6*t340*t3692;
  t4379 = t4366 + t4376;
  t4408 = 1.000000000009*t304*t340;
  t4410 = t4408 + t4331;
  t4395 = -1.000000000009*t340*t2290;
  t4399 = t4395 + t3925;
  t4415 = t1584*t4410;
  t4426 = -3.000000000027e-6*t2965*t3692;
  t4427 = t4415 + t4426;
  t4634 = t304*t832*t1274;
  t4703 = -1.*t2317*t4688;
  t4718 = t4634 + t4703;
  t4737 = t1274*t2988;
  t4871 = -1.*t2317*t4865;
  t4875 = t4737 + t4871;
  t4896 = t1274*t3459;
  t4913 = -1.*t2317*t4908;
  t4915 = t4896 + t4913;
  t4936 = -1.*t832*t1274*t2290;
  t4945 = -1.*t304*t832*t1584*t2317;
  t4946 = t4936 + t4945;
  t5118 = t1274*t3561;
  t5139 = -1.*t1584*t3459*t2317;
  t5142 = t5118 + t5139;
  t5188 = t1274*t3016;
  t5201 = -1.*t1584*t2988*t2317;
  t5211 = t5188 + t5201;
  t5272 = -1.*t304*t832*t2317;
  t5283 = -1.*t1274*t4688;
  t5284 = t5272 + t5283;
  t5297 = -1.*t2988*t2317;
  t5301 = -1.*t1274*t4865;
  t5309 = t5297 + t5301;
  t5426 = -1.*t3459*t2317;
  t5447 = -1.*t1274*t4908;
  t5449 = t5426 + t5447;
  t6379 = 3.e-6*t340*t1584;
  t6381 = t4358*t3692;
  t6384 = t6379 + t6381;
  t6393 = t1274*t4346;
  t6402 = -1.*t2317*t4379;
  t6463 = t6393 + t6402;
  t6676 = 3.000000000027e-6*t1584*t2965;
  t6698 = t4410*t3692;
  t6720 = t6676 + t6698;
  t6763 = t1274*t4399;
  t7079 = -1.*t2317*t4427;
  t7086 = t6763 + t7079;
  t7301 = -1.*t1584;
  t7328 = t832*t2290*t3692;
  t7335 = t7301 + t7328;
  t8401 = t3850*t1584;
  t8403 = t3936*t3692;
  t8626 = t8401 + t8403;
  t12204 = 3.e-6*t1584*t2965;
  t12304 = t4096*t3692;
  t12316 = t12204 + t12304;
  t1616 = t304*t832*t1274*t1584;
  t2319 = -1.*t832*t2290*t2317;
  t2340 = t1616 + t2319;
  t19784 = -1.2e-12*var1[20];
  t19794 = 0.1000003000009*t345;
  t19866 = 3.e-12*t2965;
  t19901 = t19784 + t19794 + t19866;
  t19910 = 1.000000000009*t345;
  t19920 = -1. + t19910;
  t19978 = 0.2*t19920;
  t19982 = -0.2000000000048*t345;
  t19990 = 0.1000003000009*t2965;
  t19991 = t19978 + t19982 + t19990;
  t19782 = -0.2*t2290;
  t19906 = t304*t19901;
  t20214 = -1.*t2290*t19991;
  t21473 = t19782 + t19906 + t20214;
  t22966 = -0.2*t304;
  t23232 = -1.*t2290*t19901;
  t23235 = -1.*t304*t19991;
  t23372 = t22966 + t23232 + t23235;
  t22403 = -1. + t304;
  t22410 = 0.2*t22403;
  t22583 = t2290*t19901;
  t22633 = t304*t19991;
  t22776 = t22410 + t22583 + t22633;
  t21997 = 4.e-7*var1[20];
  t22008 = -1. + t2366;
  t22032 = 0.1*t22008;
  t22057 = 3.000000000027e-7*t345;
  t22079 = 9.e-18*t2965;
  t22082 = t21997 + t22032 + t22057 + t22079;
  t29431 = t1584*t22776;
  t29471 = -1.*t22082*t3692;
  t29827 = t29431 + t29471;
  t24739 = t304*t832*t2317;
  t26240 = t1274*t4688;
  t26621 = t24739 + t26240;
  t22159 = t1584*t22082;
  t22955 = t22776*t3692;
  t22956 = t22159 + t22955;
  t22964 = t1274*t1584*t21473;
  t23460 = t23372*t2317;
  t23471 = t22964 + t23460;
  t19501 = t2988*t2317;
  t19733 = t1274*t4865;
  t19779 = t19501 + t19733;
  t27875 = t1274*t23372;
  t27996 = -1.*t1584*t21473*t2317;
  t29161 = t27875 + t27996;
  t2991 = t1274*t1584*t2988;
  t3045 = t3016*t2317;
  t3088 = t2991 + t3045;
  t29384 = t21473*t2317;
  t29897 = t1274*t29827;
  t30116 = t29384 + t29897;
  t30391 = t1274*t21473;
  t30429 = -1.*t2317*t29827;
  t30434 = t30391 + t30429;
  t3518 = t1274*t1584*t3459;
  t3612 = t3561*t2317;
  t3626 = t3518 + t3612;
  t33211 = t3459*t2317;
  t33236 = t1274*t4908;
  t33239 = t33211 + t33236;
  t50397 = -1.*t1584*t22082;
  t50401 = -1.*t22776*t3692;
  t50425 = t50397 + t50401;
  t31766 = -1.*t7335*t22956;
  t32233 = -1.*t26621*t30116;
  t32297 = -1.*t4718*t30434;
  t32334 = t31766 + t32233 + t32297;
  t32428 = t22956*t8626;
  t32479 = t19779*t30116;
  t32496 = t4875*t30434;
  t32776 = t32428 + t32479 + t32496;
  t34145 = t7335*t22956;
  t34358 = t26621*t30116;
  t34423 = t4718*t30434;
  t38524 = t34145 + t34358 + t34423;
  t45447 = -1.*t22956*t12316;
  t45475 = -1.*t30116*t33239;
  t45536 = -1.*t30434*t4915;
  t45556 = t45447 + t45475 + t45536;
  t48658 = -1.*t22956*t8626;
  t48660 = -1.*t19779*t30116;
  t49007 = -1.*t4875*t30434;
  t49010 = t48658 + t48660 + t49007;
  t49615 = t22956*t12316;
  t49620 = t30116*t33239;
  t49748 = t30434*t4915;
  t49785 = t49615 + t49620 + t49748;
  t51882 = -1.*t21473*t2317;
  t51920 = -1.*t1274*t29827;
  t51921 = t51882 + t51920;
  t4400 = t4399*t2317;
  t4428 = t1274*t4427;
  t4431 = t4400 + t4428;
  t54765 = 0.1000003000009*t340;
  t54774 = -3.000000000027e-12*t2965;
  t54789 = t54765 + t54774;
  t54816 = 3.e-12*t340;
  t54862 = -1.2e-12 + t54816 + t19990;
  t54798 = t304*t54789;
  t54868 = t2290*t54862;
  t55051 = t54798 + t54868;
  t54654 = 9.e-18*t340;
  t54687 = 3.000009000027e-7*t2965;
  t54690 = 4.e-7 + t54654 + t54687;
  t55900 = -1.*t2290*t54789;
  t55933 = t304*t54862;
  t55935 = t55900 + t55933;
  t56014 = t1584*t55051;
  t56016 = -1.*t54690*t3692;
  t56017 = t56014 + t56016;
  t54754 = t1584*t54690;
  t55485 = t55051*t3692;
  t55704 = t54754 + t55485;
  t55972 = t55935*t2317;
  t56024 = t1274*t56017;
  t56051 = t55972 + t56024;
  t56296 = t1274*t55935;
  t56297 = -1.*t2317*t56017;
  t56412 = t56296 + t56297;
  t4348 = t4346*t2317;
  t4388 = t1274*t4379;
  t4391 = t4348 + t4388;
  t21952 = -1.*t21473*t3692*t7335;
  t22957 = -1.*t304*t832*t3692*t22956;
  t31430 = t2988*t3692*t22956;
  t31432 = t21473*t3692*t8626;
  t33379 = t21473*t3692*t7335;
  t33389 = t304*t832*t3692*t22956;
  t39321 = -1.*t3459*t3692*t22956;
  t42543 = -1.*t21473*t3692*t12316;
  t46853 = -1.*t2988*t3692*t22956;
  t47649 = -1.*t21473*t3692*t8626;
  t49019 = t3459*t3692*t22956;
  t49034 = t21473*t3692*t12316;
  t58933 = -1.*t304*t832*t21473;
  t59056 = -1.*t4688*t29827;
  t59123 = t58933 + t31766 + t59056;
  t50355 = -1.*t4688*t22956;
  t50379 = -1.*t7335*t29827;
  t59545 = t21473*t2988;
  t59699 = t4865*t29827;
  t59792 = t59545 + t59699 + t32428;
  t50899 = t4865*t22956;
  t50908 = t29827*t8626;
  t60893 = t304*t832*t21473;
  t60894 = t4688*t29827;
  t60895 = t60893 + t34145 + t60894;
  t51180 = t4688*t22956;
  t51191 = t7335*t29827;
  t61297 = -1.*t21473*t3459;
  t61299 = -1.*t29827*t4908;
  t61320 = t61297 + t61299 + t45447;
  t51298 = -1.*t22956*t4908;
  t51326 = -1.*t29827*t12316;
  t61825 = -1.*t21473*t2988;
  t61834 = -1.*t4865*t29827;
  t61871 = t61825 + t61834 + t48658;
  t51400 = -1.*t4865*t22956;
  t51402 = -1.*t29827*t8626;
  t61997 = t21473*t3459;
  t62034 = t29827*t4908;
  t62056 = t61997 + t62034 + t49615;
  t51488 = t22956*t4908;
  t51489 = t29827*t12316;
  t57941 = t7335*t55704;
  t57993 = -1.*t22956*t6384;
  t58004 = -1.*t55704*t12316;
  t58394 = t22956*t6384;
  t58398 = t55704*t12316;
  t58271 = -1.*t55704*t8626;
  t58274 = -1.*t22956*t6720;
  t55887 = -1.*t7335*t55704;
  t56538 = t55704*t8626;
  t56547 = t22956*t6720;
  t58632 = -1.*t304*t832*t23372;
  t59193 = t21473*t3016;
  t59337 = t23372*t2988;
  t60691 = t304*t832*t23372;
  t60921 = -1.*t23372*t3459;
  t61024 = -1.*t21473*t3561;
  t61394 = -1.*t21473*t3016;
  t61416 = -1.*t23372*t2988;
  t61885 = t23372*t3459;
  t61906 = t21473*t3561;
  t63417 = t304*t832*t55935;
  t64894 = -4.e-7*var1[20];
  t64898 = 0.1*t3762;
  t64904 = -3.000000000027e-7*t345;
  t64919 = t832*t2290*t22776;
  t64920 = -9.e-18*t2965;
  t64922 = t64894 + t64898 + t64904 + t64919 + t60893 + t64920;
  t63512 = -1.*t55935*t3459;
  t63514 = -1.*t21473*t4346;
  t65051 = -1.*t3850*t22082;
  t65053 = -1.*t22776*t3936;
  t65054 = t65051 + t65053 + t61825;
  t65056 = 3.e-6*t22082*t2965;
  t65058 = t22776*t4096;
  t65088 = t65056 + t61997 + t65058;
  t63575 = t55935*t3459;
  t63576 = t21473*t4346;
  t63637 = -1.*t21473*t4399;
  t63728 = -1.*t55935*t2988;
  t64620 = -1.*t832*t2290*t22776;
  t64622 = t21997 + t22032 + t22057 + t64620 + t58933 + t22079;
  t64374 = -1.*t304*t832*t55935;
  t64473 = t21473*t4399;
  t64507 = t55935*t2988;
  t65732 = -1.*t3850*t54690;
  t65769 = -3.000000000027e-6*t22082*t2965;
  t65682 = 3.e-6*t340*t22082;
  t65109 = -9.e-18*t340;
  t65154 = -3.000009000027e-7*t2965;
  t65686 = 3.e-6*t54690*t2965;
  t66177 = -1.000000000009*t340*t19991;
  t66195 = -1.*t2611*t54862;
  t66214 = -1.000000000009*t54789*t2965;
  t66227 = -1.000000000009*t19901*t2965;
  t66278 = -1.000000000009*t19991*t2965;
  t66251 = t3425*t54789;
  t66264 = t340*t19901;
  t66285 = t54862*t2965;
  p_output1[0]=var2[20]*(-0.5*(-2.0744e-8*t4718 - 6.2232e-14*t4875 + 0.005186015558*t4915)*var2[4] - 0.5*(-2.0744e-8*t1274*t3710 - 6.2232e-14*t1274*t4044 + 0.005186015558*t1274*t4190)*var2[5] - 0.5*(-2.0744e-8*t2340 - 6.2232e-14*t3088 + 0.005186015558*t3626)*var2[18] - 0.5*(0.005186015558*t4391 - 6.2232e-14*t4431)*var2[20]);
  p_output1[1]=var2[20]*(-0.5*(0.005186015558*(-1.*t12316*t4932 - 1.*t4915*t5005) - 2.0744e-8*(-1.*t4718*t5005 - 1.*t4932*t7335) - 6.2232e-14*(-1.*t4875*t5005 - 1.*t4932*t8626))*var2[3] - 0.5*(2.0744e-8*t4932*t5284 + 6.2232e-14*t4932*t5309 - 0.005186015558*t4932*t5449)*var2[4] - 0.5*(-2.0744e-8*(t2317*t3710*t4932 + t4688*t5005) - 6.2232e-14*(t2317*t4044*t4932 + t4865*t5005) + 0.005186015558*(t2317*t4190*t4932 + t4908*t5005))*var2[5] - 0.5*(0.005186015558*(t3459*t3692*t5005 - 1.*t4932*t5142) - 6.2232e-14*(t2988*t3692*t5005 - 1.*t4932*t5211) - 2.0744e-8*(-1.*t4932*t4946 + t304*t3692*t5005*t832))*var2[18] - 0.5*(0.005186015558*(t5005*t6384 - 1.*t4932*t6463) - 6.2232e-14*(t5005*t6720 - 1.*t4932*t7086))*var2[20]);
  p_output1[2]=var2[20]*(-0.5*(0.005186015558*(-1.*t4915*t4932 + t12316*t5005) - 2.0744e-8*(-1.*t4718*t4932 + t5005*t7335) - 6.2232e-14*(-1.*t4875*t4932 + t5005*t8626))*var2[3] - 0.5*(-2.0744e-8*t5005*t5284 - 6.2232e-14*t5005*t5309 + 0.005186015558*t5005*t5449)*var2[4] - 0.5*(-2.0744e-8*(t4688*t4932 - 1.*t2317*t3710*t5005) - 6.2232e-14*(t4865*t4932 - 1.*t2317*t4044*t5005) + 0.005186015558*(t4908*t4932 - 1.*t2317*t4190*t5005))*var2[5] - 0.5*(0.005186015558*(t3459*t3692*t4932 + t5005*t5142) - 6.2232e-14*(t2988*t3692*t4932 + t5005*t5211) - 2.0744e-8*(t4946*t5005 + t304*t3692*t4932*t832))*var2[18] - 0.5*(0.005186015558*(t4932*t6384 + t5005*t6463) - 6.2232e-14*(t4932*t6720 + t5005*t7086))*var2[20]);
  p_output1[3]=var2[20]*(-0.5*(0.000245000000002205*t4718 + 0.005186015558*(t32776*t4718 + t32334*t4875 + t19779*(-1.*t26621*t30434 - 1.*t30116*t4718 - 1.*t4718*t51921 - 1.*t30434*t5284) + t26621*(t19779*t30434 + t30116*t4875 + t4875*t51921 + t30434*t5309)) - 6.2232e-14*(t45556*t4718 + t38524*t4915 + t33239*(t26621*t30434 + t30116*t4718 + t4718*t51921 + t30434*t5284) + t26621*(-1.*t30434*t33239 - 1.*t30116*t4915 - 1.*t4915*t51921 - 1.*t30434*t5449)) - 2.0744e-8*(t49010*t4915 + t4875*t49785 + t33239*(-1.*t19779*t30434 - 1.*t30116*t4875 - 1.*t4875*t51921 - 1.*t30434*t5309) + t19779*(t30434*t33239 + t30116*t4915 + t4915*t51921 + t30434*t5449)))*var2[4] - 0.5*(0.000245000000002205*t1274*t3710 + 0.005186015558*(t1274*t32776*t3710 + t1274*t32334*t4044 + t19779*(-1.*t1274*t30116*t3710 + t2317*t30434*t3710 + t50355 + t50379 - 1.*t1274*t26621*t50425 + t2317*t4718*t50425) + t26621*(t1274*t30116*t4044 - 1.*t2317*t30434*t4044 + t1274*t19779*t50425 - 1.*t2317*t4875*t50425 + t50899 + t50908)) - 6.2232e-14*(t1274*t38524*t4190 + t1274*t3710*t45556 + t33239*(t1274*t30116*t3710 - 1.*t2317*t30434*t3710 + t1274*t26621*t50425 - 1.*t2317*t4718*t50425 + t51180 + t51191) + t26621*(-1.*t1274*t30116*t4190 + t2317*t30434*t4190 - 1.*t1274*t33239*t50425 + t2317*t4915*t50425 + t51298 + t51326)) - 2.0744e-8*(t1274*t4190*t49010 + t1274*t4044*t49785 + t33239*(-1.*t1274*t30116*t4044 + t2317*t30434*t4044 - 1.*t1274*t19779*t50425 + t2317*t4875*t50425 + t51400 + t51402) + t19779*(t1274*t30116*t4190 - 1.*t2317*t30434*t4190 + t1274*t33239*t50425 - 1.*t2317*t4915*t50425 + t51488 + t51489)))*var2[5] - 0.5*(0.000245000000002205*t2340 - 6.2232e-14*(t3626*t38524 + t2340*t45556 + t33239*(t23471*t26621 + t2340*t30116 + t33379 + t33389 + t29161*t4718 + t30434*t4946) + t26621*(-1.*t23471*t33239 - 1.*t30116*t3626 + t39321 + t42543 - 1.*t29161*t4915 - 1.*t30434*t5142)) - 2.0744e-8*(t3626*t49010 + t3088*t49785 + t19779*(t23471*t33239 + t30116*t3626 + t49019 + t49034 + t29161*t4915 + t30434*t5142) + t33239*(-1.*t19779*t23471 - 1.*t30116*t3088 + t46853 + t47649 - 1.*t29161*t4875 - 1.*t30434*t5211)) + 0.005186015558*(t3088*t32334 + t2340*t32776 + t19779*(t21952 + t22957 - 1.*t23471*t26621 - 1.*t2340*t30116 - 1.*t29161*t4718 - 1.*t30434*t4946) + t26621*(t19779*t23471 + t30116*t3088 + t31430 + t31432 + t29161*t4875 + t30434*t5211)))*var2[18] - 0.5*(-6.2232e-14*(t38524*t4391 + t33239*(t26621*t56051 + t4718*t56412 + t57941) + t26621*(-1.*t30116*t4391 - 1.*t33239*t56051 - 1.*t4915*t56412 + t57993 + t58004 - 1.*t30434*t6463)) - 2.0744e-8*(t4391*t49010 + t4431*t49785 + t19779*(t30116*t4391 + t33239*t56051 + t4915*t56412 + t58394 + t58398 + t30434*t6463) + t33239*(-1.*t30116*t4431 - 1.*t19779*t56051 - 1.*t4875*t56412 + t58271 + t58274 - 1.*t30434*t7086)) + 0.005186015558*(t32334*t4431 + t19779*(t55887 - 1.*t26621*t56051 - 1.*t4718*t56412) + t26621*(t30116*t4431 + t19779*t56051 + t4875*t56412 + t56538 + t56547 + t30434*t7086)))*var2[20]);
  p_output1[4]=var2[20]*(-0.5*(0.000245000000002205*t4688 - 6.2232e-14*(t12316*(t29827*t3710 + t4688*t50425 + t51180 + t51191) + t4908*t60895 + t4688*t61320 + (-1.*t29827*t4190 - 1.*t4908*t50425 + t51298 + t51326)*t7335) + 0.005186015558*(t4865*t59123 + t4688*t59792 + (t29827*t4044 + t4865*t50425 + t50899 + t50908)*t7335 + (-1.*t29827*t3710 + t50355 + t50379 - 1.*t4688*t50425)*t8626) - 2.0744e-8*(t12316*(-1.*t29827*t4044 - 1.*t4865*t50425 + t51400 + t51402) + t4908*t61871 + t4865*t62056 + (t29827*t4190 + t4908*t50425 + t51488 + t51489)*t8626))*var2[5] - 0.5*(0.000245000000002205*t304*t3692*t832 - 6.2232e-14*(t3459*t3692*t60895 + (-1.*t1584*t29827*t3459 + t39321 + t42543 - 1.*t1584*t21473*t4908 + t60921 + t61024)*t7335 + t304*t3692*t61320*t832 + t12316*(t33379 + t33389 + t1584*t21473*t4688 + t60691 - 1.*t21473*t2290*t832 + t1584*t29827*t304*t832)) - 2.0744e-8*(t12316*(-1.*t1584*t29827*t2988 + t46853 + t47649 - 1.*t1584*t21473*t4865 + t61394 + t61416) + t3459*t3692*t61871 + t2988*t3692*t62056 + (t1584*t29827*t3459 + t49019 + t49034 + t1584*t21473*t4908 + t61885 + t61906)*t8626) + 0.005186015558*(t2988*t3692*t59123 + (t1584*t29827*t2988 + t31430 + t31432 + t1584*t21473*t4865 + t59193 + t59337)*t7335 + t304*t3692*t59792*t832 + (t21952 + t22957 - 1.*t1584*t21473*t4688 + t58632 + t21473*t2290*t832 - 1.*t1584*t29827*t304*t832)*t8626))*var2[18] - 0.5*(-6.2232e-14*(t12316*(t4688*t56017 + t57941 + t63417) + t60895*t6384 + (-1.*t29827*t4379 - 1.*t4908*t56017 + t57993 + t58004 + t63512 + t63514)*t7335) - 2.0744e-8*(t12316*(-1.*t29827*t4427 - 1.*t4865*t56017 + t58271 + t58274 + t63637 + t63728) + t61871*t6384 + t62056*t6720 + (t29827*t4379 + t4908*t56017 + t58394 + t58398 + t63575 + t63576)*t8626) + 0.005186015558*(t59123*t6720 + (t29827*t4427 + t4865*t56017 + t56538 + t56547 + t64473 + t64507)*t7335 + (t55887 - 1.*t4688*t56017 + t64374)*t8626))*var2[20]);
  p_output1[5]=var2[20]*(-0.5*(-2.0744e-8*(t3459*(-1.*t22776*t2988 - 1.*t21473*t3936 + t61394 + t61416) + t2988*(t22776*t3459 + t21473*t4096 + t61885 + t61906) + t3561*t65054 + t3016*t65088) - 0.000245000000002205*t2290*t832 + 0.005186015558*(t3016*t64622 + t304*(t22776*t2988 + t21473*t3936 + t59193 + t59337)*t832 - 1.*t2290*(t22082*t3850 + t22776*t3936 + t59545)*t832 + t2988*(t58632 - 1.*t22776*t304*t832)) - 6.2232e-14*(t3561*t64922 + t304*(-1.*t22776*t3459 - 1.*t21473*t4096 + t60921 + t61024)*t832 - 1.*t2290*(-3.e-6*t22082*t2965 - 1.*t22776*t4096 + t61297)*t832 + t3459*(t60691 + t22776*t304*t832)))*var2[18] - 0.5*(-2.0744e-8*(t4346*t65054 + t4399*t65088 + t2988*(t22776*t4358 + t4096*t55051 + t63575 + t63576 + t65682 + t65686) + t3459*(-1.*t22776*t4410 - 1.*t3936*t55051 + t63637 + t63728 + t65732 + t65769)) + 0.005186015558*(t4399*t64622 + t304*(3.000000000027e-6*t22082*t2965 + t22776*t4410 + t3850*t54690 + t3936*t55051 + t64473 + t64507)*t832 + t2988*(4.e-7 + t54654 + t54687 + t64374 - 1.*t2290*t55051*t832)) - 6.2232e-14*(t4346*t64922 + t304*(-3.e-6*t22082*t340 - 1.*t22776*t4358 - 3.e-6*t2965*t54690 - 1.*t4096*t55051 + t63512 + t63514)*t832 + t3459*(-4.e-7 + t63417 + t65109 + t65154 + t2290*t55051*t832)))*var2[20]);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=-0.5*(-2.0744e-8*(3.000000000027e-6*t2965*(t19901*t2965 + t19991*t3425 + t65056) + 3.e-6*t2965*(t65732 + t65769 + t66177 + t66195 + t66214 + t66227) + 3.e-6*t340*(-1.*t19901*t2611 + t65051 + t66278) + t3850*(t65682 + t65686 + t66251 + t66264 + t66278 + t66285)) + 0.005186015558*(-0.2*t340 + t65732 + t65769 + t66177 + t66195 + t66214 + t66227 + 3.000000000027e-6*t2965*(t21997 + t22032 + t22057 + t22079 - 1.*t19901*t832) + t3850*(4.e-7 + t54654 + t54687 - 1.*t54862*t832)) - 6.2232e-14*(-0.2000000000018*t2965 + t65682 + t65686 + t66251 + t66264 + t66278 + t66285 + 3.e-6*t340*(t64894 + t64898 + t64904 + t64920 + t19901*t832) + 3.e-6*t2965*(-4.e-7 + t65109 + t65154 + t54862*t832)))*Power(var2[20],2);
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce1_vec21_minitaur.hh"

namespace FrontStance
{

void Ce1_vec21_minitaur_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
