/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:13:21 GMT-04:00
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
  double t29758;
  double t40384;
  double t42742;
  double t44669;
  double t45190;
  double t45868;
  double t12928;
  double t47223;
  double t47251;
  double t12873;
  double t50084;
  double t50055;
  double t51477;
  double t57471;
  double t57585;
  double t57680;
  double t51540;
  double t57639;
  double t57703;
  double t58832;
  double t56238;
  double t56406;
  double t56435;
  double t56475;
  double t62273;
  double t62274;
  double t62276;
  double t62279;
  double t62281;
  double t13112;
  double t48903;
  double t49895;
  double t51532;
  double t51639;
  double t51960;
  double t52115;
  double t54048;
  double t57254;
  double t62005;
  double t62114;
  double t62141;
  double t62144;
  double t62149;
  double t62154;
  double t62172;
  double t62200;
  double t62203;
  double t62212;
  double t62215;
  double t62227;
  double t62287;
  double t62291;
  double t62397;
  double t62429;
  double t62432;
  double t62433;
  double t62434;
  double t62437;
  double t62439;
  double t62452;
  double t62469;
  double t62892;
  double t62926;
  double t62939;
  double t62971;
  double t62976;
  double t62978;
  double t62995;
  double t62996;
  double t63011;
  double t63070;
  double t63072;
  double t63074;
  double t63076;
  double t63086;
  double t63087;
  double t63091;
  double t63096;
  double t63097;
  double t63099;
  double t63069;
  double t63084;
  double t63123;
  double t63134;
  double t63147;
  double t63148;
  double t63157;
  double t63190;
  double t63191;
  double t63202;
  double t63227;
  double t63245;
  double t63265;
  double t63315;
  double t63348;
  double t63356;
  double t63358;
  double t63518;
  double t63524;
  double t63539;
  double t63571;
  double t63574;
  double t63578;
  double t63420;
  double t63436;
  double t63464;
  double t63142;
  double t63371;
  double t63374;
  double t63054;
  double t63065;
  double t63068;
  double t63646;
  double t63702;
  double t63825;
  double t64203;
  double t64223;
  double t64225;
  double t64700;
  double t64705;
  double t64963;
  double t64968;
  double t65248;
  double t65435;
  double t65436;
  double t65437;
  double t63834;
  double t64011;
  double t69122;
  double t69127;
  double t69129;
  double t64266;
  double t64440;
  double t64534;
  double t64600;
  double t69236;
  double t69294;
  double t69470;
  double t69503;
  double t63867;
  double t63877;
  double t63888;
  double t64015;
  double t64033;
  double t64040;
  double t69537;
  double t69762;
  double t64284;
  double t64285;
  double t64334;
  double t70058;
  double t70082;
  double t64453;
  double t64454;
  double t64458;
  double t70148;
  double t70151;
  double t64535;
  double t64537;
  double t64542;
  double t70188;
  double t70202;
  double t64602;
  double t64605;
  double t64610;
  double t69103;
  double t73098;
  double t73195;
  double t73210;
  double t73212;
  double t73214;
  double t73251;
  double t73253;
  double t69313;
  double t69518;
  double t69828;
  double t73904;
  double t73912;
  double t73913;
  double t70126;
  double t70169;
  double t74333;
  double t74338;
  double t74353;
  double t74360;
  double t74364;
  double t74365;
  double t74479;
  double t74493;
  double t74494;
  double t73254;
  double t69104;
  double t69113;
  double t73274;
  double t73283;
  double t69316;
  double t69409;
  double t73305;
  double t69522;
  double t69523;
  double t73992;
  double t74015;
  double t69980;
  double t69981;
  double t74023;
  double t74025;
  double t70127;
  double t70132;
  double t74082;
  double t74085;
  double t70170;
  double t70178;
  double t74108;
  double t74109;
  double t74111;
  double t74599;
  double t74607;
  double t74644;
  double t74654;
  double t74881;
  double t74882;
  double t74885;
  double t74887;
  double t74888;
  double t74890;
  double t74113;
  double t74117;
  double t74121;
  double t74698;
  double t74700;
  double t74123;
  double t74124;
  double t74125;
  double t74710;
  double t74713;
  double t74725;
  double t74727;
  double t74857;
  double t74862;
  double t75056;
  double t75067;
  double t75080;
  double t75081;
  double t75089;
  double t75102;
  double t75107;
  double t73310;
  double t73311;
  double t73605;
  double t73631;
  double t73882;
  double t75078;
  double t75079;
  double t75086;
  double t75087;
  double t75115;
  double t75126;
  double t75141;
  double t74058;
  double t74043;
  double t75159;
  double t75144;
  double t75149;
  double t75150;
  double t75158;
  double t75160;
  double t75152;
  double t75154;
  double t73667;
  double t73892;
  double t75185;
  double t75186;
  double t75187;
  double t75190;
  double t75191;
  double t75192;
  double t75199;
  double t75201;
  double t75202;
  double t74055;
  double t74056;
  double t74060;
  double t74079;
  double t75206;
  double t75207;
  double t75217;
  double t75218;
  double t73091;
  double t73097;
  double t75230;
  double t75231;
  double t75315;
  double t75316;
  double t75317;
  double t75324;
  double t75325;
  double t75326;
  double t75333;
  double t75334;
  double t75335;
  double t75337;
  double t75338;
  double t75340;
  double t75344;
  double t75345;
  double t75346;
  double t75348;
  double t75349;
  double t75350;
  double t75188;
  double t75209;
  double t75211;
  double t75373;
  double t75374;
  double t75375;
  double t75369;
  double t75370;
  double t75371;
  double t75222;
  double t75224;
  double t75228;
  double t75229;
  double t75238;
  double t75249;
  double t75257;
  double t75323;
  double t75327;
  double t75329;
  double t75408;
  double t75415;
  double t75416;
  double t75425;
  double t75426;
  double t75427;
  double t75429;
  double t75432;
  double t75434;
  double t75314;
  double t75320;
  double t75321;
  double t75372;
  double t75381;
  double t75382;
  double t75397;
  double t75400;
  double t75391;
  double t75392;
  t29758 = Cos(var1[13]);
  t40384 = -1.*t29758;
  t42742 = 1. + t40384;
  t44669 = 3.e-6*t42742;
  t45190 = 3.e-6*t29758;
  t45868 = t44669 + t45190;
  t12928 = Cos(var1[5]);
  t47223 = Sin(var1[11]);
  t47251 = Sin(var1[5]);
  t12873 = Sin(var1[3]);
  t50084 = Cos(var1[11]);
  t50055 = Cos(var1[3]);
  t51477 = Cos(var1[4]);
  t57471 = 9.e-12*t42742;
  t57585 = t57471 + t40384;
  t57680 = Sin(var1[13]);
  t51540 = Sin(var1[4]);
  t57639 = t57585*t47223;
  t57703 = 1.000000000009*t50084*t57680;
  t58832 = t57639 + t57703;
  t56238 = -9.e-12*t42742;
  t56406 = 1. + t56238;
  t56435 = -3.e-6*t56406;
  t56475 = t56435 + t44669;
  t62273 = -1.000000000009*t42742;
  t62274 = 1. + t62273;
  t62276 = t50084*t62274;
  t62279 = t47223*t57680;
  t62281 = t62276 + t62279;
  t13112 = -1.*t12928;
  t48903 = t45868*t47223*t47251;
  t49895 = t13112 + t48903;
  t51532 = t50084*t45868*t51477;
  t51639 = t45868*t12928*t47223;
  t51960 = t51639 + t47251;
  t52115 = -1.*t51540*t51960;
  t54048 = t51532 + t52115;
  t57254 = t56475*t12928;
  t62005 = t58832*t47251;
  t62114 = t57254 + t62005;
  t62141 = t50084*t57585;
  t62144 = -1.000000000009*t47223*t57680;
  t62149 = t62141 + t62144;
  t62154 = t51477*t62149;
  t62172 = t12928*t58832;
  t62200 = -1.*t56475*t47251;
  t62203 = t62172 + t62200;
  t62212 = -1.*t51540*t62203;
  t62215 = t62154 + t62212;
  t62227 = 3.e-6*t12928*t57680;
  t62287 = t62281*t47251;
  t62291 = t62227 + t62287;
  t62397 = -1.*t62274*t47223;
  t62429 = t50084*t57680;
  t62432 = t62397 + t62429;
  t62433 = t51477*t62432;
  t62434 = t12928*t62281;
  t62437 = -3.e-6*t57680*t47251;
  t62439 = t62434 + t62437;
  t62452 = -1.*t51540*t62439;
  t62469 = t62433 + t62452;
  t62892 = -1.*t50084*t45868*t51540;
  t62926 = -1.*t51477*t51960;
  t62939 = t62892 + t62926;
  t62971 = -1.*t62149*t51540;
  t62976 = -1.*t51477*t62203;
  t62978 = t62971 + t62976;
  t62995 = -1.*t62432*t51540;
  t62996 = -1.*t51477*t62439;
  t63011 = t62995 + t62996;
  t63070 = -1.2e-12*var1[13];
  t63072 = 0.0999997000009*t42742;
  t63074 = 3.e-12*t57680;
  t63076 = t63070 + t63072 + t63074;
  t63086 = 1.000000000009*t42742;
  t63087 = -1. + t63086;
  t63091 = 0.2*t63087;
  t63096 = -0.2000000000048*t42742;
  t63097 = 0.0999997000009*t57680;
  t63099 = t63091 + t63096 + t63097;
  t63069 = -0.2*t47223;
  t63084 = t50084*t63076;
  t63123 = -1.*t47223*t63099;
  t63134 = t63069 + t63084 + t63123;
  t63147 = -1. + t50084;
  t63148 = 0.2*t63147;
  t63157 = t47223*t63076;
  t63190 = t50084*t63099;
  t63191 = t63148 + t63157 + t63190;
  t63202 = t12928*t63191;
  t63227 = 4.e-7*var1[13];
  t63245 = 0.1*t56406;
  t63265 = 3.000000000027e-7*t42742;
  t63315 = 9.e-18*t57680;
  t63348 = t63227 + t63245 + t63265 + t63315;
  t63356 = -1.*t63348*t47251;
  t63358 = t63202 + t63356;
  t63518 = t51477*t63134;
  t63524 = -1.*t51540*t63358;
  t63539 = t63518 + t63524;
  t63571 = t50084*t45868*t51540;
  t63574 = t51477*t51960;
  t63578 = t63571 + t63574;
  t63420 = t63134*t51540;
  t63436 = t51477*t63358;
  t63464 = t63420 + t63436;
  t63142 = -1.*t63134*t51540;
  t63371 = -1.*t51477*t63358;
  t63374 = t63142 + t63371;
  t63054 = t62149*t51540;
  t63065 = t51477*t62203;
  t63068 = t63054 + t63065;
  t63646 = t12928*t63348;
  t63702 = t63191*t47251;
  t63825 = t63646 + t63702;
  t64203 = t62432*t51540;
  t64223 = t51477*t62439;
  t64225 = t64203 + t64223;
  t64700 = -1.*t45868*t47223*t47251;
  t64705 = t12928 + t64700;
  t64963 = -1.*t56475*t12928;
  t64968 = -1.*t58832*t47251;
  t65248 = t64963 + t64968;
  t65435 = -3.e-6*t12928*t57680;
  t65436 = -1.*t62281*t47251;
  t65437 = t65435 + t65436;
  t63834 = -1.*t49895*t63825;
  t64011 = t63825*t62114;
  t69122 = -1.*t12928*t63348;
  t69127 = -1.*t63191*t47251;
  t69129 = t69122 + t69127;
  t64266 = t49895*t63825;
  t64440 = -1.*t63825*t62291;
  t64534 = -1.*t63825*t62114;
  t64600 = t63825*t62291;
  t69236 = -1.*t51960*t63825;
  t69294 = -1.*t49895*t63358;
  t69470 = t62203*t63825;
  t69503 = t63358*t62114;
  t63867 = -1.*t63578*t63464;
  t63877 = -1.*t54048*t63539;
  t63888 = t63834 + t63867 + t63877;
  t64015 = t63068*t63464;
  t64033 = t62215*t63539;
  t64040 = t64011 + t64015 + t64033;
  t69537 = t51960*t63825;
  t69762 = t49895*t63358;
  t64284 = t63578*t63464;
  t64285 = t54048*t63539;
  t64334 = t64266 + t64284 + t64285;
  t70058 = -1.*t63825*t62439;
  t70082 = -1.*t63358*t62291;
  t64453 = -1.*t63464*t64225;
  t64454 = -1.*t63539*t62469;
  t64458 = t64440 + t64453 + t64454;
  t70148 = -1.*t62203*t63825;
  t70151 = -1.*t63358*t62114;
  t64535 = -1.*t63068*t63464;
  t64537 = -1.*t62215*t63539;
  t64542 = t64534 + t64535 + t64537;
  t70188 = t63825*t62439;
  t70202 = t63358*t62291;
  t64602 = t63464*t64225;
  t64605 = t63539*t62469;
  t64610 = t64600 + t64602 + t64605;
  t69103 = -1.*t50084*t45868*t63134;
  t73098 = -1.*t57585*t47223;
  t73195 = -1.000000000009*t50084*t57680;
  t73210 = t73098 + t73195;
  t73212 = -0.2*t50084;
  t73214 = -1.*t47223*t63076;
  t73251 = -1.*t50084*t63099;
  t73253 = t73212 + t73214 + t73251;
  t69313 = t63134*t62149;
  t69518 = t50084*t45868*t63134;
  t69828 = -1.*t63134*t62432;
  t73904 = -1.*t50084*t62274;
  t73912 = -1.*t47223*t57680;
  t73913 = t73904 + t73912;
  t70126 = -1.*t63134*t62149;
  t70169 = t63134*t62432;
  t74333 = -1.*t45868*t51477*t47223;
  t74338 = -1.*t50084*t45868*t12928*t51540;
  t74353 = t74333 + t74338;
  t74360 = t51477*t73913;
  t74364 = -1.*t12928*t62432*t51540;
  t74365 = t74360 + t74364;
  t74479 = t51477*t73210;
  t74493 = -1.*t12928*t62149*t51540;
  t74494 = t74479 + t74493;
  t73254 = -1.*t50084*t45868*t73253;
  t69104 = -1.*t51960*t63358;
  t69113 = t69103 + t63834 + t69104;
  t73274 = t63134*t73210;
  t73283 = t73253*t62149;
  t69316 = t62203*t63358;
  t69409 = t69313 + t69316 + t64011;
  t73305 = t50084*t45868*t73253;
  t69522 = t51960*t63358;
  t69523 = t69518 + t64266 + t69522;
  t73992 = -1.*t73253*t62432;
  t74015 = -1.*t63134*t73913;
  t69980 = -1.*t63358*t62439;
  t69981 = t69828 + t69980 + t64440;
  t74023 = -1.*t63134*t73210;
  t74025 = -1.*t73253*t62149;
  t70127 = -1.*t62203*t63358;
  t70132 = t70126 + t70127 + t64534;
  t74082 = t73253*t62432;
  t74085 = t63134*t73913;
  t70170 = t63358*t62439;
  t70178 = t70169 + t70170 + t64600;
  t74108 = t50084*t45868*t51477*t12928;
  t74109 = -1.*t45868*t47223*t51540;
  t74111 = t74108 + t74109;
  t74599 = -1.*t63134*t47251*t49895;
  t74607 = -1.*t50084*t45868*t47251*t63825;
  t74644 = t62149*t47251*t63825;
  t74654 = t63134*t47251*t62114;
  t74881 = t51477*t12928*t63134;
  t74882 = t73253*t51540;
  t74885 = t74881 + t74882;
  t74887 = t51477*t73253;
  t74888 = -1.*t12928*t63134*t51540;
  t74890 = t74887 + t74888;
  t74113 = t51477*t12928*t62149;
  t74117 = t73210*t51540;
  t74121 = t74113 + t74117;
  t74698 = t63134*t47251*t49895;
  t74700 = t50084*t45868*t47251*t63825;
  t74123 = t51477*t12928*t62432;
  t74124 = t73913*t51540;
  t74125 = t74123 + t74124;
  t74710 = -1.*t62432*t47251*t63825;
  t74713 = -1.*t63134*t47251*t62291;
  t74725 = -1.*t62149*t47251*t63825;
  t74727 = -1.*t63134*t47251*t62114;
  t74857 = t62432*t47251*t63825;
  t74862 = t63134*t47251*t62291;
  t75056 = 9.e-18*t29758;
  t75067 = 2.999991000027e-7*t57680;
  t75080 = 3.e-12*t29758;
  t75081 = -1.2e-12 + t75080 + t63097;
  t75089 = 0.0999997000009*t29758;
  t75102 = -3.000000000027e-12*t57680;
  t75107 = t75089 + t75102;
  t73310 = -4.e-7*var1[13];
  t73311 = -1. + t57471;
  t73605 = 0.1*t73311;
  t73631 = -3.000000000027e-7*t42742;
  t73882 = -9.e-18*t57680;
  t75078 = 4.e-7 + t75056 + t75067;
  t75079 = -1.*t56475*t75078;
  t75086 = -1.000000000009*t29758*t63099;
  t75087 = -1.*t57585*t75081;
  t75115 = -1.000000000009*t75107*t57680;
  t75126 = -3.000000000027e-6*t63348*t57680;
  t75141 = -1.000000000009*t63076*t57680;
  t74058 = 3.e-6*t63348*t57680;
  t74043 = -1.*t56475*t63348;
  t75159 = -1.000000000009*t63099*t57680;
  t75144 = t62274*t75107;
  t75149 = 3.e-6*t29758*t63348;
  t75150 = t29758*t63076;
  t75158 = 3.e-6*t75078*t57680;
  t75160 = t75081*t57680;
  t75152 = -9.e-18*t29758;
  t75154 = -2.999991000027e-7*t57680;
  t73667 = t45868*t47223*t63191;
  t73892 = t73310 + t73605 + t73631 + t73667 + t69518 + t73882;
  t75185 = -1.*t47223*t75107;
  t75186 = t50084*t75081;
  t75187 = t75185 + t75186;
  t75190 = t50084*t75107;
  t75191 = t47223*t75081;
  t75192 = t75190 + t75191;
  t75199 = t50084*t29758;
  t75201 = 1.000000000009*t47223*t57680;
  t75202 = t75199 + t75201;
  t74055 = -1.*t63191*t58832;
  t74056 = t74043 + t74055 + t70126;
  t74060 = t63191*t62281;
  t74079 = t74058 + t70169 + t74060;
  t75206 = t29758*t47223;
  t75207 = t75206 + t73195;
  t75217 = -1.000000000009*t29758*t47223;
  t75218 = t75217 + t57703;
  t73091 = -1.*t45868*t47223*t63191;
  t73097 = t63227 + t63245 + t63265 + t73091 + t69103 + t63315;
  t75230 = 1.000000000009*t50084*t29758;
  t75231 = t75230 + t75201;
  t75315 = t12928*t75207;
  t75316 = -3.e-6*t29758*t47251;
  t75317 = t75315 + t75316;
  t75324 = t12928*t75231;
  t75325 = -3.000000000027e-6*t57680*t47251;
  t75326 = t75324 + t75325;
  t75333 = 3.e-6*t29758*t12928;
  t75334 = t75207*t47251;
  t75335 = t75333 + t75334;
  t75337 = t51477*t75202;
  t75338 = -1.*t51540*t75317;
  t75340 = t75337 + t75338;
  t75344 = 3.000000000027e-6*t12928*t57680;
  t75345 = t75231*t47251;
  t75346 = t75344 + t75345;
  t75348 = t51477*t75218;
  t75349 = -1.*t51540*t75326;
  t75350 = t75348 + t75349;
  t75188 = t50084*t45868*t75187;
  t75209 = -1.*t75187*t62432;
  t75211 = -1.*t63134*t75202;
  t75373 = t12928*t75192;
  t75374 = -1.*t75078*t47251;
  t75375 = t75373 + t75374;
  t75369 = t12928*t75078;
  t75370 = t75192*t47251;
  t75371 = t75369 + t75370;
  t75222 = t75187*t62432;
  t75224 = t63134*t75202;
  t75228 = -1.*t63134*t75218;
  t75229 = -1.*t75187*t62149;
  t75238 = -1.*t50084*t45868*t75187;
  t75249 = t63134*t75218;
  t75257 = t75187*t62149;
  t75323 = t75218*t51540;
  t75327 = t51477*t75326;
  t75329 = t75323 + t75327;
  t75408 = -1.*t49895*t75371;
  t75415 = t75371*t62114;
  t75416 = t63825*t75346;
  t75425 = t75187*t51540;
  t75426 = t51477*t75375;
  t75427 = t75425 + t75426;
  t75429 = t51477*t75187;
  t75432 = -1.*t51540*t75375;
  t75434 = t75429 + t75432;
  t75314 = t75202*t51540;
  t75320 = t51477*t75317;
  t75321 = t75314 + t75320;
  t75372 = t49895*t75371;
  t75381 = -1.*t63825*t75335;
  t75382 = -1.*t75371*t62291;
  t75397 = -1.*t75371*t62114;
  t75400 = -1.*t63825*t75346;
  t75391 = t63825*t75335;
  t75392 = t75371*t62291;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(1.72e-8*(-1.*t12873*t49895 - 1.*t50055*t54048) + 5.16e-14*(-1.*t12873*t62114 - 1.*t50055*t62215) - 0.0042999871*(-1.*t12873*t62291 - 1.*t50055*t62469))*var2[1] - 0.5*(1.72e-8*(t49895*t50055 - 1.*t12873*t54048) + 5.16e-14*(t50055*t62114 - 1.*t12873*t62215) - 0.0042999871*(t50055*t62291 - 1.*t12873*t62469))*var2[2])*var2[13];
  p_output1[4]=(-0.5*(1.72e-8*t54048 + 5.16e-14*t62215 - 0.0042999871*t62469)*var2[0] - 0.5*(-1.72e-8*t12873*t62939 - 5.16e-14*t12873*t62978 + 0.0042999871*t12873*t63011)*var2[1] - 0.5*(1.72e-8*t50055*t62939 + 5.16e-14*t50055*t62978 - 0.0042999871*t50055*t63011)*var2[2] - 0.5*(-0.000271000000002439*t54048 - 0.0042999871*((t62215*t63374 + t62215*t63464 + t62978*t63539 + t63068*t63539)*t63578 + t63068*(-1.*t54048*t63374 - 1.*t54048*t63464 - 1.*t62939*t63539 - 1.*t63539*t63578) + t62215*t63888 + t54048*t64040) + 5.16e-14*((t54048*t63374 + t54048*t63464 + t62939*t63539 + t63539*t63578)*t64225 + t63578*(-1.*t62469*t63374 - 1.*t62469*t63464 - 1.*t63011*t63539 - 1.*t63539*t64225) + t62469*t64334 + t54048*t64458) + 1.72e-8*((-1.*t62215*t63374 - 1.*t62215*t63464 - 1.*t62978*t63539 - 1.*t63068*t63539)*t64225 + t63068*(t62469*t63374 + t62469*t63464 + t63011*t63539 + t63539*t64225) + t62469*t64542 + t62215*t64610))*var2[3])*var2[13];
  p_output1[5]=(-0.5*(1.72e-8*t51477*t64705 + 5.16e-14*t51477*t65248 - 0.0042999871*t51477*t65437)*var2[0] - 0.5*(1.72e-8*(t50055*t51960 + t12873*t51540*t64705) + 5.16e-14*(t50055*t62203 + t12873*t51540*t65248) - 0.0042999871*(t50055*t62439 + t12873*t51540*t65437))*var2[1] - 0.5*(1.72e-8*(t12873*t51960 - 1.*t50055*t51540*t64705) + 5.16e-14*(t12873*t62203 - 1.*t50055*t51540*t65248) - 0.0042999871*(t12873*t62439 - 1.*t50055*t51540*t65437))*var2[2] - 0.5*(-0.000271000000002439*t51477*t64705 - 0.0042999871*(t51477*t64040*t64705 + t51477*t63888*t65248 + t63068*(-1.*t51477*t63464*t64705 + t51540*t63539*t64705 + t51540*t54048*t69129 - 1.*t51477*t63578*t69129 + t69236 + t69294) + t63578*(t51477*t63464*t65248 - 1.*t51540*t63539*t65248 - 1.*t51540*t62215*t69129 + t51477*t63068*t69129 + t69470 + t69503)) + 5.16e-14*(t51477*t64458*t64705 + t51477*t64334*t65437 + t64225*(t51477*t63464*t64705 - 1.*t51540*t63539*t64705 - 1.*t51540*t54048*t69129 + t51477*t63578*t69129 + t69537 + t69762) + t63578*(-1.*t51477*t63464*t65437 + t51540*t63539*t65437 + t51540*t62469*t69129 - 1.*t51477*t64225*t69129 + t70058 + t70082)) + 1.72e-8*(t51477*t64610*t65248 + t51477*t64542*t65437 + t64225*(-1.*t51477*t63464*t65248 + t51540*t63539*t65248 + t51540*t62215*t69129 - 1.*t51477*t63068*t69129 + t70148 + t70151) + t63068*(t51477*t63464*t65437 - 1.*t51540*t63539*t65437 - 1.*t51540*t62469*t69129 + t51477*t64225*t69129 + t70188 + t70202)))*var2[3] - 0.5*(-0.000271000000002439*t51960 - 0.0042999871*(t62203*t69113 + t62114*(-1.*t63358*t64705 - 1.*t51960*t69129 + t69236 + t69294) + t51960*t69409 + t49895*(t63358*t65248 + t62203*t69129 + t69470 + t69503)) + 5.16e-14*(t62439*t69523 + t62291*(t63358*t64705 + t51960*t69129 + t69537 + t69762) + t51960*t69981 + t49895*(-1.*t63358*t65437 - 1.*t62439*t69129 + t70058 + t70082)) + 1.72e-8*(t62439*t70132 + t62291*(-1.*t63358*t65248 - 1.*t62203*t69129 + t70148 + t70151) + t62203*t70178 + t62114*(t63358*t65437 + t62439*t69129 + t70188 + t70202)))*var2[4])*var2[13];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=(-0.5*(1.72e-8*t74111 + 5.16e-14*t74121 - 0.0042999871*t74125)*var2[0] - 0.5*(1.72e-8*(t45868*t47251*t50055*t50084 - 1.*t12873*t74353) - 0.0042999871*(t47251*t50055*t62432 - 1.*t12873*t74365) + 5.16e-14*(t47251*t50055*t62149 - 1.*t12873*t74494))*var2[1] - 0.5*(1.72e-8*(t12873*t45868*t47251*t50084 + t50055*t74353) - 0.0042999871*(t12873*t47251*t62432 + t50055*t74365) + 5.16e-14*(t12873*t47251*t62149 + t50055*t74494))*var2[2] - 0.5*(-0.000271000000002439*t74111 - 0.0042999871*(t64040*t74111 + t63888*t74121 + t63068*(-1.*t63464*t74111 - 1.*t63539*t74353 + t74599 + t74607 - 1.*t63578*t74885 - 1.*t54048*t74890) + t63578*(t63464*t74121 + t63539*t74494 + t74644 + t74654 + t63068*t74885 + t62215*t74890)) + 5.16e-14*(t64458*t74111 + t64334*t74125 + t64225*(t63464*t74111 + t63539*t74353 + t74698 + t74700 + t63578*t74885 + t54048*t74890) + t63578*(-1.*t63464*t74125 - 1.*t63539*t74365 + t74710 + t74713 - 1.*t64225*t74885 - 1.*t62469*t74890)) + 1.72e-8*(t64610*t74121 + t64542*t74125 + t64225*(-1.*t63464*t74121 - 1.*t63539*t74494 + t74725 + t74727 - 1.*t63068*t74885 - 1.*t62215*t74890) + t63068*(t63464*t74125 + t63539*t74365 + t74857 + t74862 + t64225*t74885 + t62469*t74890)))*var2[3] - 0.5*(-0.000271000000002439*t45868*t47251*t50084 - 0.0042999871*(t47251*t62149*t69113 + t45868*t47251*t50084*t69409 + t62114*(t45868*t47223*t63134 - 1.*t12928*t51960*t63134 - 1.*t12928*t45868*t50084*t63358 + t73254 + t74599 + t74607) + t49895*(t12928*t62203*t63134 + t12928*t62149*t63358 + t73274 + t73283 + t74644 + t74654)) + 5.16e-14*(t47251*t62432*t69523 + t45868*t47251*t50084*t69981 + t62291*(-1.*t45868*t47223*t63134 + t12928*t51960*t63134 + t12928*t45868*t50084*t63358 + t73305 + t74698 + t74700) + t49895*(-1.*t12928*t62439*t63134 - 1.*t12928*t62432*t63358 + t73992 + t74015 + t74710 + t74713)) + 1.72e-8*(t47251*t62432*t70132 + t47251*t62149*t70178 + t62291*(-1.*t12928*t62203*t63134 - 1.*t12928*t62149*t63358 + t74023 + t74025 + t74725 + t74727) + t62114*(t12928*t62439*t63134 + t12928*t62432*t63358 + t74082 + t74085 + t74857 + t74862)))*var2[4] - 0.5*(0.000271000000002439*t45868*t47223 - 0.0042999871*(-1.*t45868*t47223*(t58832*t63191 + t56475*t63348 + t69313) + t73097*t73210 + t62149*(-1.*t45868*t50084*t63191 + t73254) + t45868*t50084*(t58832*t63134 + t62149*t63191 + t73274 + t73283)) + 5.16e-14*(-1.*t45868*t47223*(-1.*t62281*t63191 - 3.e-6*t57680*t63348 + t69828) + t62432*(t45868*t50084*t63191 + t73305) + t73892*t73913 + t45868*t50084*(-1.*t62281*t63134 - 1.*t62432*t63191 + t73992 + t74015)) + 1.72e-8*(t62432*(-1.*t58832*t63134 - 1.*t62149*t63191 + t74023 + t74025) + t73913*t74056 + t73210*t74079 + t62149*(t62281*t63134 + t62432*t63191 + t74082 + t74085)))*var2[5])*var2[13];
  p_output1[12]=0;
  p_output1[13]=(-0.5*(-0.0042999871*t75321 + 5.16e-14*t75329)*var2[0] - 0.5*(-0.0042999871*(t50055*t75335 - 1.*t12873*t75340) + 5.16e-14*(t50055*t75346 - 1.*t12873*t75350))*var2[1] - 0.5*(-0.0042999871*(t12873*t75335 + t50055*t75340) + 5.16e-14*(t12873*t75346 + t50055*t75350))*var2[2] - 0.5*(-0.0042999871*(t63888*t75329 + t63068*(t75408 - 1.*t63578*t75427 - 1.*t54048*t75434) + t63578*(t63464*t75329 + t63539*t75350 + t75415 + t75416 + t63068*t75427 + t62215*t75434)) + 5.16e-14*(t64334*t75321 + t64225*(t75372 + t63578*t75427 + t54048*t75434) + t63578*(-1.*t63464*t75321 - 1.*t63539*t75340 + t75381 + t75382 - 1.*t64225*t75427 - 1.*t62469*t75434)) + 1.72e-8*(t64542*t75321 + t64610*t75329 + t64225*(-1.*t63464*t75329 - 1.*t63539*t75350 + t75397 + t75400 - 1.*t63068*t75427 - 1.*t62215*t75434) + t63068*(t63464*t75321 + t63539*t75340 + t75391 + t75392 + t64225*t75427 + t62469*t75434)))*var2[3] - 0.5*(5.16e-14*(t69523*t75335 + t62291*(t75188 + t75372 + t51960*t75375) + t49895*(t75209 + t75211 - 1.*t63358*t75317 - 1.*t62439*t75375 + t75381 + t75382)) + 1.72e-8*(t70132*t75335 + t70178*t75346 + t62114*(t75222 + t75224 + t63358*t75317 + t62439*t75375 + t75391 + t75392) + t62291*(t75228 + t75229 - 1.*t63358*t75326 - 1.*t62203*t75375 + t75397 + t75400)) - 0.0042999871*(t69113*t75346 + t62114*(t75238 - 1.*t51960*t75375 + t75408) + t49895*(t75249 + t75257 + t63358*t75326 + t62203*t75375 + t75415 + t75416)))*var2[4] - 0.5*(5.16e-14*(t62432*(-4.e-7 + t75152 + t75154 + t75188 + t45868*t47223*t75192) + t73892*t75202 + t45868*t50084*(-3.e-6*t29758*t63348 - 3.e-6*t57680*t75078 - 1.*t62281*t75192 - 1.*t63191*t75207 + t75209 + t75211)) + 1.72e-8*(t74056*t75202 + t74079*t75218 + t62149*(t75149 + t75158 + t62281*t75192 + t63191*t75207 + t75222 + t75224) + t62432*(t75079 + t75126 - 1.*t58832*t75192 + t75228 + t75229 - 1.*t63191*t75231)) - 0.0042999871*(t73097*t75218 + t62149*(4.e-7 + t75056 + t75067 - 1.*t45868*t47223*t75192 + t75238) + t45868*t50084*(3.000000000027e-6*t57680*t63348 + t56475*t75078 + t58832*t75192 + t63191*t75231 + t75249 + t75257)))*var2[5] - 0.5*(-0.0042999871*(-0.2*t29758 + 3.000000000027e-6*t57680*(-1.*t45868*t63076 + t63227 + t63245 + t63265 + t63315) + t75079 + t56475*(4.e-7 + t75056 + t75067 - 1.*t45868*t75081) + t75086 + t75087 + t75115 + t75126 + t75141) + 5.16e-14*(-0.2000000000018*t57680 + 3.e-6*t29758*(t45868*t63076 + t73310 + t73605 + t73631 + t73882) + t75144 + t75149 + t75150 + 3.e-6*t57680*(-4.e-7 + t45868*t75081 + t75152 + t75154) + t75158 + t75159 + t75160) + 1.72e-8*(3.000000000027e-6*t57680*(t57680*t63076 + t62274*t63099 + t74058) + 3.e-6*t57680*(t75079 + t75086 + t75087 + t75115 + t75126 + t75141) + 3.e-6*t29758*(-1.*t57585*t63076 + t74043 + t75159) + t56475*(t75144 + t75149 + t75150 + t75158 + t75159 + t75160)))*var2[11])*var2[13];
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
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

#include "Ce3_vec14_minitaur.hh"

namespace FrontStance
{

void Ce3_vec14_minitaur_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE