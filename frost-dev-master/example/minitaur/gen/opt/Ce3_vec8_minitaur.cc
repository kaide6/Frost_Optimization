/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:12:49 GMT-04:00
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
  double t7208;
  double t32610;
  double t32885;
  double t33806;
  double t34449;
  double t41430;
  double t41437;
  double t41475;
  double t38825;
  double t39322;
  double t41504;
  double t41505;
  double t41548;
  double t41549;
  double t40825;
  double t41246;
  double t41583;
  double t41593;
  double t41597;
  double t41598;
  double t41608;
  double t41443;
  double t41463;
  double t41480;
  double t41487;
  double t9587;
  double t12202;
  double t34453;
  double t34465;
  double t9629;
  double t14117;
  double t12126;
  double t13948;
  double t12222;
  double t41640;
  double t41641;
  double t41491;
  double t41558;
  double t41611;
  double t44252;
  double t44300;
  double t44306;
  double t41644;
  double t41647;
  double t41648;
  double t45299;
  double t45301;
  double t45302;
  double t12303;
  double t14212;
  double t14882;
  double t37524;
  double t41613;
  double t41639;
  double t41657;
  double t41684;
  double t41694;
  double t41713;
  double t41716;
  double t41731;
  double t41739;
  double t41741;
  double t41745;
  double t41746;
  double t41754;
  double t42232;
  double t43500;
  double t43804;
  double t43817;
  double t43831;
  double t43892;
  double t43944;
  double t43966;
  double t43970;
  double t44248;
  double t44251;
  double t44367;
  double t44368;
  double t44397;
  double t44550;
  double t44657;
  double t44666;
  double t44670;
  double t44684;
  double t44695;
  double t44698;
  double t44699;
  double t44713;
  double t44725;
  double t44729;
  double t44758;
  double t45288;
  double t45296;
  double t45303;
  double t45306;
  double t45311;
  double t45312;
  double t45313;
  double t45314;
  double t45324;
  double t45421;
  double t45425;
  double t45435;
  double t45591;
  double t46230;
  double t46242;
  double t46276;
  double t46495;
  double t46559;
  double t46593;
  double t46637;
  double t46670;
  double t46671;
  double t46699;
  double t46701;
  double t46725;
  double t46873;
  double t47022;
  double t47071;
  double t47072;
  double t47073;
  double t47074;
  double t47107;
  double t47119;
  double t47174;
  double t47216;
  double t47222;
  double t47229;
  double t47250;
  double t47256;
  double t47267;
  double t47240;
  double t47244;
  double t47245;
  double t46861;
  double t47200;
  double t47201;
  double t47947;
  double t47961;
  double t47975;
  double t47276;
  double t47589;
  double t47716;
  double t48208;
  double t48217;
  double t48223;
  double t48229;
  double t48233;
  double t48237;
  double t48239;
  double t48264;
  double t48301;
  double t48318;
  double t48405;
  double t48413;
  double t48414;
  double t48431;
  double t48433;
  double t48439;
  double t48370;
  double t48372;
  double t48384;
  double t48231;
  double t48355;
  double t48366;
  double t48197;
  double t48198;
  double t48200;
  double t48456;
  double t48470;
  double t48490;
  double t48594;
  double t48602;
  double t48605;
  double t48852;
  double t48853;
  double t48864;
  double t48865;
  double t48869;
  double t48872;
  double t48873;
  double t48876;
  double t47848;
  double t49454;
  double t49457;
  double t49461;
  double t48170;
  double t48495;
  double t49755;
  double t49761;
  double t49771;
  double t48564;
  double t48672;
  double t48700;
  double t48736;
  double t48768;
  double t47249;
  double t47271;
  double t47884;
  double t49472;
  double t48172;
  double t48177;
  double t48187;
  double t49489;
  double t49718;
  double t49779;
  double t49904;
  double t49913;
  double t48496;
  double t48501;
  double t48504;
  double t48575;
  double t48581;
  double t48583;
  double t49984;
  double t49998;
  double t48673;
  double t48675;
  double t48679;
  double t50071;
  double t50098;
  double t48709;
  double t48711;
  double t48713;
  double t50174;
  double t50207;
  double t48737;
  double t48745;
  double t48748;
  double t50291;
  double t50317;
  double t48769;
  double t48783;
  double t48785;
  double t48125;
  double t48137;
  double t48140;
  double t51019;
  double t51022;
  double t51024;
  double t51045;
  double t51049;
  double t51067;
  double t51083;
  double t51089;
  double t51092;
  double t51104;
  double t51107;
  double t51109;
  double t51118;
  double t51119;
  double t51121;
  double t51168;
  double t51170;
  double t51179;
  double t49807;
  double t51258;
  double t51265;
  double t51266;
  double t49941;
  double t50017;
  double t50135;
  double t50218;
  double t50345;
  double t49383;
  double t49386;
  double t51270;
  double t51316;
  double t51321;
  double t49815;
  double t49831;
  double t49945;
  double t49955;
  double t51459;
  double t50020;
  double t50022;
  double t51918;
  double t51948;
  double t50144;
  double t50146;
  double t52038;
  double t52087;
  double t50242;
  double t50254;
  double t52305;
  double t52315;
  double t50350;
  double t50351;
  double t50995;
  double t50997;
  double t51000;
  double t51027;
  double t51030;
  double t51031;
  double t51034;
  double t51069;
  double t51070;
  double t52444;
  double t52537;
  double t52552;
  double t52927;
  double t52940;
  double t52948;
  double t53022;
  double t53037;
  double t53046;
  double t52970;
  double t53003;
  double t53010;
  double t52599;
  double t52605;
  double t52628;
  double t52649;
  double t53229;
  double t53230;
  double t53233;
  double t53241;
  double t53251;
  double t53253;
  double t52702;
  double t52716;
  double t52749;
  double t52776;
  double t52821;
  double t52827;
  double t52849;
  double t52853;
  double t53643;
  double t53648;
  double t53664;
  double t53672;
  double t53757;
  double t53770;
  double t53789;
  double t53661;
  double t53662;
  double t53726;
  double t53727;
  double t53729;
  double t53737;
  double t53793;
  double t53819;
  double t53833;
  double t53850;
  double t53922;
  double t53970;
  double t53635;
  double t53674;
  double t53675;
  double t53679;
  double t53756;
  double t53795;
  double t53847;
  double t53852;
  double t53857;
  double t53871;
  double t53879;
  double t53911;
  double t53914;
  double t53971;
  double t53999;
  double t54050;
  double t54056;
  double t54058;
  double t54059;
  double t54064;
  double t54130;
  double t54353;
  double t54496;
  double t54500;
  double t54272;
  double t54356;
  double t51282;
  double t51283;
  double t51349;
  double t51351;
  double t51352;
  double t51778;
  double t51822;
  double t51844;
  double t51851;
  double t51866;
  double t52169;
  double t52204;
  double t52260;
  double t52263;
  double t54393;
  double t54399;
  double t54840;
  double t54842;
  double t54843;
  double t54859;
  double t54870;
  double t54871;
  double t54536;
  double t54537;
  double t54370;
  double t54404;
  double t54423;
  double t54528;
  double t54540;
  double t54547;
  double t45918;
  double t45938;
  double t45940;
  double t46029;
  double t46036;
  double t46039;
  double t55238;
  double t55248;
  double t55250;
  double t55260;
  double t55265;
  double t55267;
  double t46071;
  double t46073;
  double t46076;
  double t55309;
  double t55311;
  double t55314;
  double t55316;
  double t55320;
  double t55322;
  double t54854;
  double t54950;
  double t54992;
  double t55538;
  double t55542;
  double t55556;
  double t55573;
  double t55591;
  double t55600;
  double t55024;
  double t55033;
  double t55042;
  double t55049;
  double t55138;
  double t55173;
  double t55178;
  double t54363;
  double t54460;
  double t54461;
  double t54524;
  double t54550;
  double t54567;
  double t55602;
  double t55614;
  double t55626;
  double t55925;
  double t55927;
  double t55930;
  double t55938;
  double t55973;
  double t55993;
  double t55658;
  double t55672;
  double t55692;
  double t55703;
  double t55729;
  double t55771;
  double t55792;
  t7208 = Cos(var1[7]);
  t32610 = Cos(var1[9]);
  t32885 = -1.*t32610;
  t33806 = 1. + t32885;
  t34449 = 3.e-6*t33806;
  t41430 = -1.000000000009*t33806;
  t41437 = 1. + t41430;
  t41475 = Sin(var1[9]);
  t38825 = -9.e-12*t33806;
  t39322 = 1. + t38825;
  t41504 = 1.2e-12*var1[9];
  t41505 = 0.0999997000009*t33806;
  t41548 = -3.e-12*t41475;
  t41549 = t41504 + t41505 + t41548;
  t40825 = -3.e-6*t39322;
  t41246 = t40825 + t34449;
  t41583 = -4.e-7*var1[9];
  t41593 = 0.1*t39322;
  t41597 = 3.000000000027e-7*t33806;
  t41598 = -9.e-18*t41475;
  t41608 = t41583 + t41593 + t41597 + t41598;
  t41443 = 0.2*t41437;
  t41463 = 0.2000000000048*t33806;
  t41480 = 0.0999997000009*t41475;
  t41487 = t41443 + t41463 + t41480;
  t9587 = Sin(var1[3]);
  t12202 = Cos(var1[5]);
  t34453 = 3.e-6*t32610;
  t34465 = t34449 + t34453;
  t9629 = Sin(var1[5]);
  t14117 = Sin(var1[7]);
  t12126 = Cos(var1[3]);
  t13948 = Cos(var1[4]);
  t12222 = Sin(var1[4]);
  t41640 = 9.e-12*t33806;
  t41641 = t41640 + t32885;
  t41491 = t41437*t41487;
  t41558 = t41549*t41475;
  t41611 = 3.e-6*t41608*t41475;
  t44252 = 1.000000000009*t7208*t41475;
  t44300 = t41641*t14117;
  t44306 = t44252 + t44300;
  t41644 = -1.*t41641*t41549;
  t41647 = -1.*t41246*t41608;
  t41648 = -1.000000000009*t41487*t41475;
  t45299 = t41437*t7208;
  t45301 = t41475*t14117;
  t45302 = t45299 + t45301;
  t12303 = -1.*t12202*t7208*t12222;
  t14212 = -1.*t13948*t14117;
  t14882 = t12303 + t14212;
  t37524 = 0.2*t34465;
  t41613 = t41491 + t41558 + t41611;
  t41639 = t41246*t41613;
  t41657 = t41644 + t41647 + t41648;
  t41684 = 3.e-6*t41475*t41657;
  t41694 = t37524 + t41639 + t41684;
  t41713 = -1.*t12202;
  t41716 = t34465*t9629*t14117;
  t41731 = t41713 + t41716;
  t41739 = t34465*t13948*t7208;
  t41741 = t34465*t12202*t14117;
  t41745 = t9629 + t41741;
  t41746 = -1.*t12222*t41745;
  t41754 = t41739 + t41746;
  t42232 = 0.2*t41641;
  t43500 = 4.e-7*var1[9];
  t43804 = -1. + t41640;
  t43817 = 0.1*t43804;
  t43831 = -3.000000000027e-7*t33806;
  t43892 = t34465*t41549;
  t43944 = 9.e-18*t41475;
  t43966 = t43500 + t43817 + t43831 + t43892 + t43944;
  t43970 = 3.e-6*t43966*t41475;
  t44248 = t42232 + t41491 + t41558 + t41611 + t43970;
  t44251 = t41246*t12202;
  t44367 = t9629*t44306;
  t44368 = t44251 + t44367;
  t44397 = t41641*t7208;
  t44550 = -1.000000000009*t41475*t14117;
  t44657 = t44397 + t44550;
  t44666 = t13948*t44657;
  t44670 = -1.*t41246*t9629;
  t44684 = t12202*t44306;
  t44695 = t44670 + t44684;
  t44698 = -1.*t12222*t44695;
  t44699 = t44666 + t44698;
  t44713 = -1.*t34465*t41549;
  t44725 = t41583 + t41593 + t41597 + t44713 + t41598;
  t44729 = t41246*t44725;
  t44758 = 0.2*t41475;
  t45288 = t41644 + t41647 + t44729 + t44758 + t41648;
  t45296 = 3.e-6*t12202*t41475;
  t45303 = t9629*t45302;
  t45306 = t45296 + t45303;
  t45311 = t7208*t41475;
  t45312 = -1.*t41437*t14117;
  t45313 = t45311 + t45312;
  t45314 = t13948*t45313;
  t45324 = -3.e-6*t41475*t9629;
  t45421 = t12202*t45302;
  t45425 = t45324 + t45421;
  t45435 = -1.*t12222*t45425;
  t45591 = t45314 + t45435;
  t46230 = -1.*t13948*t12202*t7208;
  t46242 = t12222*t14117;
  t46276 = t46230 + t46242;
  t46495 = -1.*t34465*t7208*t12222;
  t46559 = -1.*t13948*t41745;
  t46593 = t46495 + t46559;
  t46637 = -1.*t12222*t44657;
  t46670 = -1.*t13948*t44695;
  t46671 = t46637 + t46670;
  t46699 = -1.*t12222*t45313;
  t46701 = -1.*t13948*t45425;
  t46725 = t46699 + t46701;
  t46873 = -0.1*t9629;
  t47022 = -1.*t7208;
  t47071 = 1. + t47022;
  t47072 = 0.2*t47071;
  t47073 = 0.2*t7208;
  t47074 = 0.05*t14117;
  t47107 = t47072 + t47073 + t47074;
  t47119 = t12202*t47107;
  t47174 = t46873 + t47119;
  t47216 = 0.05*t7208*t12222;
  t47222 = t13948*t47174;
  t47229 = t47216 + t47222;
  t47250 = 0.05*t13948*t7208;
  t47256 = -1.*t12222*t47174;
  t47267 = t47250 + t47256;
  t47240 = t7208*t12222;
  t47244 = t13948*t12202*t14117;
  t47245 = t47240 + t47244;
  t46861 = -0.05*t7208*t12222;
  t47200 = -1.*t13948*t47174;
  t47201 = t46861 + t47200;
  t47947 = t13948*t7208;
  t47961 = -1.*t12202*t12222*t14117;
  t47975 = t47947 + t47961;
  t47276 = 0.1*t12202;
  t47589 = t9629*t47107;
  t47716 = t47276 + t47589;
  t48208 = t7208*t41549;
  t48217 = 0.2*t14117;
  t48223 = -1.*t41487*t14117;
  t48229 = t48208 + t48217 + t48223;
  t48233 = -1.*t41608*t9629;
  t48237 = t7208*t41487;
  t48239 = t41549*t14117;
  t48264 = t47072 + t48237 + t48239;
  t48301 = t12202*t48264;
  t48318 = t48233 + t48301;
  t48405 = t13948*t48229;
  t48413 = -1.*t12222*t48318;
  t48414 = t48405 + t48413;
  t48431 = t34465*t7208*t12222;
  t48433 = t13948*t41745;
  t48439 = t48431 + t48433;
  t48370 = t12222*t48229;
  t48372 = t13948*t48318;
  t48384 = t48370 + t48372;
  t48231 = -1.*t12222*t48229;
  t48355 = -1.*t13948*t48318;
  t48366 = t48231 + t48355;
  t48197 = t12222*t44657;
  t48198 = t13948*t44695;
  t48200 = t48197 + t48198;
  t48456 = t12202*t41608;
  t48470 = t9629*t48264;
  t48490 = t48456 + t48470;
  t48594 = t12222*t45313;
  t48602 = t13948*t45425;
  t48605 = t48594 + t48602;
  t48852 = -1.*t34465*t9629*t14117;
  t48853 = t12202 + t48852;
  t48864 = -1.*t41246*t12202;
  t48865 = -1.*t9629*t44306;
  t48869 = t48864 + t48865;
  t48872 = -3.e-6*t12202*t41475;
  t48873 = -1.*t9629*t45302;
  t48876 = t48872 + t48873;
  t47848 = -1.*t12202*t47716;
  t49454 = -0.1*t12202;
  t49457 = -1.*t9629*t47107;
  t49461 = t49454 + t49457;
  t48170 = t9629*t47716*t14117;
  t48495 = -1.*t41731*t48490;
  t49755 = -1.*t12202*t41608;
  t49761 = -1.*t9629*t48264;
  t49771 = t49755 + t49761;
  t48564 = t44368*t48490;
  t48672 = t41731*t48490;
  t48700 = -1.*t48490*t45306;
  t48736 = -1.*t44368*t48490;
  t48768 = t48490*t45306;
  t47249 = t13948*t9629*t47229;
  t47271 = -1.*t12222*t9629*t47267;
  t47884 = t47249 + t47271 + t47848;
  t49472 = t9629*t47716;
  t48172 = t47229*t47245;
  t48177 = t47267*t47975;
  t48187 = t48170 + t48172 + t48177;
  t49489 = t12202*t47716*t14117;
  t49718 = -1.*t41731*t48318;
  t49779 = -1.*t41745*t48490;
  t49904 = t44368*t48318;
  t49913 = t44695*t48490;
  t48496 = -1.*t48439*t48384;
  t48501 = -1.*t41754*t48414;
  t48504 = t48495 + t48496 + t48501;
  t48575 = t48200*t48384;
  t48581 = t44699*t48414;
  t48583 = t48564 + t48575 + t48581;
  t49984 = t41731*t48318;
  t49998 = t41745*t48490;
  t48673 = t48439*t48384;
  t48675 = t41754*t48414;
  t48679 = t48672 + t48673 + t48675;
  t50071 = -1.*t48490*t45425;
  t50098 = -1.*t48318*t45306;
  t48709 = -1.*t48384*t48605;
  t48711 = -1.*t48414*t45591;
  t48713 = t48700 + t48709 + t48711;
  t50174 = -1.*t44368*t48318;
  t50207 = -1.*t44695*t48490;
  t48737 = -1.*t48200*t48384;
  t48745 = -1.*t44699*t48414;
  t48748 = t48736 + t48737 + t48745;
  t50291 = t48490*t45425;
  t50317 = t48318*t45306;
  t48769 = t48384*t48605;
  t48783 = t48414*t45591;
  t48785 = t48768 + t48769 + t48783;
  t48125 = -1.*t7208*t12222;
  t48137 = -1.*t13948*t12202*t14117;
  t48140 = t48125 + t48137;
  t51019 = -1.000000000009*t7208*t41475;
  t51022 = -1.*t41641*t14117;
  t51024 = t51019 + t51022;
  t51045 = -1.*t41437*t7208;
  t51049 = -1.*t41475*t14117;
  t51067 = t51045 + t51049;
  t51083 = -1.*t34465*t12202*t7208*t12222;
  t51089 = -1.*t34465*t13948*t14117;
  t51092 = t51083 + t51089;
  t51104 = -1.*t13948*t7208;
  t51107 = t12202*t12222*t14117;
  t51109 = t51104 + t51107;
  t51118 = t13948*t51024;
  t51119 = -1.*t12202*t12222*t44657;
  t51121 = t51118 + t51119;
  t51168 = -1.*t12202*t12222*t45313;
  t51170 = t13948*t51067;
  t51179 = t51168 + t51170;
  t49807 = -1.*t34465*t7208*t48229;
  t51258 = -1.*t7208*t41487;
  t51265 = -1.*t41549*t14117;
  t51266 = t47073 + t51258 + t51265;
  t49941 = t48229*t44657;
  t50017 = t34465*t7208*t48229;
  t50135 = -1.*t45313*t48229;
  t50218 = -1.*t48229*t44657;
  t50345 = t45313*t48229;
  t49383 = t9629*t47174;
  t49386 = t49383 + t47848;
  t51270 = -1.*t34465*t7208*t51266;
  t51316 = t51024*t48229;
  t51321 = t51266*t44657;
  t49815 = -1.*t41745*t48318;
  t49831 = t49807 + t49815 + t48495;
  t49945 = t44695*t48318;
  t49955 = t49941 + t49945 + t48564;
  t51459 = t34465*t7208*t51266;
  t50020 = t41745*t48318;
  t50022 = t50017 + t50020 + t48672;
  t51918 = -1.*t45313*t51266;
  t51948 = -1.*t48229*t51067;
  t50144 = -1.*t48318*t45425;
  t50146 = t50135 + t50144 + t48700;
  t52038 = -1.*t51024*t48229;
  t52087 = -1.*t51266*t44657;
  t50242 = -1.*t44695*t48318;
  t50254 = t50218 + t50242 + t48736;
  t52305 = t45313*t51266;
  t52315 = t48229*t51067;
  t50350 = t48318*t45425;
  t50351 = t50345 + t50350 + t48768;
  t50995 = t34465*t13948*t12202*t7208;
  t50997 = -1.*t34465*t12222*t14117;
  t51000 = t50995 + t50997;
  t51027 = t12222*t51024;
  t51030 = t13948*t12202*t44657;
  t51031 = t51027 + t51030;
  t51034 = t13948*t12202*t45313;
  t51069 = t12222*t51067;
  t51070 = t51034 + t51069;
  t52444 = t7208*t9629*t47716;
  t52537 = Power(t9629,2);
  t52552 = 0.05*t7208*t52537*t14117;
  t52927 = t13948*t12202*t7208;
  t52940 = -1.*t12222*t14117;
  t52948 = t52927 + t52940;
  t53022 = 0.05*t13948*t12202*t7208;
  t53037 = -0.05*t12222*t14117;
  t53046 = t53022 + t53037;
  t52970 = -0.05*t12202*t7208*t12222;
  t53003 = -0.05*t13948*t14117;
  t53010 = t52970 + t53003;
  t52599 = -1.*t9629*t48229*t41731;
  t52605 = -1.*t34465*t7208*t9629*t48490;
  t52628 = t9629*t48229*t44368;
  t52649 = t9629*t44657*t48490;
  t53229 = t12222*t51266;
  t53230 = t13948*t12202*t48229;
  t53233 = t53229 + t53230;
  t53241 = t13948*t51266;
  t53251 = -1.*t12202*t12222*t48229;
  t53253 = t53241 + t53251;
  t52702 = t9629*t48229*t41731;
  t52716 = t34465*t7208*t9629*t48490;
  t52749 = -1.*t9629*t45313*t48490;
  t52776 = -1.*t9629*t48229*t45306;
  t52821 = -1.*t9629*t48229*t44368;
  t52827 = -1.*t9629*t44657*t48490;
  t52849 = t9629*t45313*t48490;
  t52853 = t9629*t48229*t45306;
  t53643 = -9.e-18*t32610;
  t53648 = 2.999991000027e-7*t41475;
  t53664 = -3.e-12*t32610;
  t53672 = 1.2e-12 + t53664 + t41480;
  t53757 = 0.0999997000009*t32610;
  t53770 = 3.000000000027e-12*t41475;
  t53789 = t53757 + t53770;
  t53661 = -4.e-7 + t53643 + t53648;
  t53662 = -1.*t41246*t53661;
  t53726 = -1.000000000009*t32610*t41487;
  t53727 = -1.*t41641*t53672;
  t53729 = -1.000000000009*t41549*t41475;
  t53737 = -3.000000000027e-6*t41608*t41475;
  t53793 = -1.000000000009*t53789*t41475;
  t53819 = t32610*t41549;
  t53833 = 3.e-6*t32610*t41608;
  t53850 = t41437*t53789;
  t53922 = 3.e-6*t53661*t41475;
  t53970 = t53672*t41475;
  t53635 = 0.2*t32610;
  t53674 = -1.*t34465*t53672;
  t53675 = -4.e-7 + t53643 + t53674 + t53648;
  t53679 = t41246*t53675;
  t53756 = 3.000000000027e-6*t44725*t41475;
  t53795 = t53635 + t53662 + t53679 + t53726 + t53727 + t53729 + t53737 + t53756 + t53793;
  t53847 = 3.e-6*t32610*t43966;
  t53852 = 0.2000000000018*t41475;
  t53857 = 9.e-18*t32610;
  t53871 = t34465*t53672;
  t53879 = -2.999991000027e-7*t41475;
  t53911 = 4.e-7 + t53857 + t53871 + t53879;
  t53914 = 3.e-6*t53911*t41475;
  t53971 = t53819 + t53833 + t53847 + t53850 + t53852 + t53914 + t53922 + t41648 + t53970;
  t53999 = 3.000000000027e-6*t41475*t41613;
  t54050 = t53662 + t53726 + t53727 + t53729 + t53737 + t53793;
  t54056 = 3.e-6*t41475*t54050;
  t54058 = 3.e-6*t32610*t41657;
  t54059 = t53819 + t53833 + t53850 + t53922 + t41648 + t53970;
  t54064 = t41246*t54059;
  t54130 = t53999 + t54056 + t54058 + t54064;
  t54353 = 1.000000000009*t41475*t14117;
  t54496 = -1.000000000009*t32610*t14117;
  t54500 = t44252 + t54496;
  t54272 = t32610*t7208;
  t54356 = t54272 + t54353;
  t51282 = -1.*t34465*t14117*t48264;
  t51283 = t41583 + t41593 + t41597 + t41598 + t51282 + t49807;
  t51349 = t41246*t41608;
  t51351 = t44306*t48264;
  t51352 = t51349 + t51351 + t49941;
  t51778 = t34465*t14117*t48264;
  t51822 = t43500 + t43817 + t43831 + t43944 + t51778 + t50017;
  t51844 = -3.e-6*t41608*t41475;
  t51851 = -1.*t48264*t45302;
  t51866 = t51844 + t50135 + t51851;
  t52169 = -1.*t44306*t48264;
  t52204 = t41647 + t52169 + t50218;
  t52260 = t48264*t45302;
  t52263 = t41611 + t50345 + t52260;
  t54393 = t32610*t14117;
  t54399 = t51019 + t54393;
  t54840 = t7208*t53672;
  t54842 = -1.*t53789*t14117;
  t54843 = t54840 + t54842;
  t54859 = t7208*t53789;
  t54870 = t53672*t14117;
  t54871 = t54859 + t54870;
  t54536 = 1.000000000009*t32610*t7208;
  t54537 = t54536 + t54353;
  t54370 = -3.e-6*t32610*t9629;
  t54404 = t12202*t54399;
  t54423 = t54370 + t54404;
  t54528 = -3.000000000027e-6*t41475*t9629;
  t54540 = t12202*t54537;
  t54547 = t54528 + t54540;
  t45918 = t12126*t41731;
  t45938 = -1.*t9587*t41754;
  t45940 = t45918 + t45938;
  t46029 = t12126*t44368;
  t46036 = -1.*t9587*t44699;
  t46039 = t46029 + t46036;
  t55238 = 3.e-6*t32610*t12202;
  t55248 = t9629*t54399;
  t55250 = t55238 + t55248;
  t55260 = t13948*t54356;
  t55265 = -1.*t12222*t54423;
  t55267 = t55260 + t55265;
  t46071 = t12126*t45306;
  t46073 = -1.*t9587*t45591;
  t46076 = t46071 + t46073;
  t55309 = 3.000000000027e-6*t12202*t41475;
  t55311 = t9629*t54537;
  t55314 = t55309 + t55311;
  t55316 = t13948*t54500;
  t55320 = -1.*t12222*t54547;
  t55322 = t55316 + t55320;
  t54854 = t34465*t7208*t54843;
  t54950 = -1.*t45313*t54843;
  t54992 = -1.*t48229*t54356;
  t55538 = -1.*t53661*t9629;
  t55542 = t12202*t54871;
  t55556 = t55538 + t55542;
  t55573 = t12202*t53661;
  t55591 = t9629*t54871;
  t55600 = t55573 + t55591;
  t55024 = t45313*t54843;
  t55033 = t48229*t54356;
  t55042 = -1.*t54500*t48229;
  t55049 = -1.*t54843*t44657;
  t55138 = -1.*t34465*t7208*t54843;
  t55173 = t54500*t48229;
  t55178 = t54843*t44657;
  t54363 = t12222*t54356;
  t54460 = t13948*t54423;
  t54461 = t54363 + t54460;
  t54524 = t12222*t54500;
  t54550 = t13948*t54547;
  t54567 = t54524 + t54550;
  t55602 = t41731*t55600;
  t55614 = -1.*t55250*t48490;
  t55626 = -1.*t55600*t45306;
  t55925 = t12222*t54843;
  t55927 = t13948*t55556;
  t55930 = t55925 + t55927;
  t55938 = t13948*t54843;
  t55973 = -1.*t12222*t55556;
  t55993 = t55938 + t55973;
  t55658 = t55250*t48490;
  t55672 = t55600*t45306;
  t55692 = -1.*t44368*t55600;
  t55703 = -1.*t48490*t55314;
  t55729 = -1.*t41731*t55600;
  t55771 = t44368*t55600;
  t55792 = t48490*t55314;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(-0.043*t41694*(-1.*t12126*t41754 - 1.*t41731*t9587) - 0.043*t44248*(-1.*t12126*t44699 - 1.*t44368*t9587) - 0.043*t45288*(-1.*t12126*t45591 - 1.*t45306*t9587) - 0.0013*(-1.*t12126*t14882 - 1.*t7208*t9587*t9629))*var2[1] - 0.5*(-0.043*t41694*t45940 - 0.043*t44248*t46039 - 0.043*t45288*t46076 - 0.0013*(-1.*t14882*t9587 + t12126*t7208*t9629))*var2[2])*var2[7];
  p_output1[4]=(-0.5*(-0.0013*t14882 - 0.043*t41694*t41754 - 0.043*t44248*t44699 - 0.043*t45288*t45591)*var2[0] - 0.5*(0.0013*t46276*t9587 + 0.043*t41694*t46593*t9587 + 0.043*t44248*t46671*t9587 + 0.043*t45288*t46725*t9587)*var2[1] - 0.5*(-0.0013*t12126*t46276 - 0.043*t12126*t41694*t46593 - 0.043*t12126*t44248*t46671 - 0.043*t12126*t45288*t46725)*var2[2] - 0.5*(0.000271*t41754 - 0.000271*t41246*t44699 - 6.e-12*t41475*t45591 - 0.043*t45288*((t44699*t48366 + t44699*t48384 + t46671*t48414 + t48200*t48414)*t48439 + t48200*(-1.*t41754*t48366 - 1.*t41754*t48384 - 1.*t46593*t48414 - 1.*t48414*t48439) + t44699*t48504 + t41754*t48583) - 0.043*t44248*((t41754*t48366 + t41754*t48384 + t46593*t48414 + t48414*t48439)*t48605 + t48439*(-1.*t45591*t48366 - 1.*t45591*t48384 - 1.*t46725*t48414 - 1.*t48414*t48605) + t45591*t48679 + t41754*t48713) - 0.043*t41694*((-1.*t44699*t48366 - 1.*t44699*t48384 - 1.*t46671*t48414 - 1.*t48200*t48414)*t48605 + t48200*(t45591*t48366 + t45591*t48384 + t46725*t48414 + t48414*t48605) + t45591*t48748 + t44699*t48785) - 0.000046*t12222*t9629 - 0.0013*(t47884*t47975 - 1.*t13948*(t47245*t47267 + t47201*t47975 + t47229*t47975 + t47267*t48140)*t9629 + t12222*t48187*t9629 + t47245*(-1.*t12222*t47201*t9629 - 1.*t12222*t47229*t9629)))*var2[3])*var2[7];
  p_output1[5]=(-0.5*(-0.043*t13948*t41694*t48853 - 0.043*t13948*t44248*t48869 - 0.043*t13948*t45288*t48876 + 0.0013*t13948*t7208*t9629)*var2[0] - 0.5*(-0.043*t41694*(t12126*t41745 + t12222*t48853*t9587) - 0.043*t44248*(t12126*t44695 + t12222*t48869*t9587) - 0.043*t45288*(t12126*t45425 + t12222*t48876*t9587) - 0.0013*(t12126*t12202*t7208 - 1.*t12222*t7208*t9587*t9629))*var2[1] - 0.5*(-0.043*t41694*(-1.*t12126*t12222*t48853 + t41745*t9587) - 0.043*t44248*(-1.*t12126*t12222*t48869 + t44695*t9587) - 0.043*t45288*(-1.*t12126*t12222*t48876 + t45425*t9587) - 0.0013*(t12202*t7208*t9587 + t12126*t12222*t7208*t9629))*var2[2] - 0.5*(0.000046*t12202*t13948 + 0.000271*t13948*t48853 - 0.000271*t13948*t41246*t48869 - 6.e-12*t13948*t41475*t48876 - 0.043*t45288*(t13948*t48583*t48853 + t13948*t48504*t48869 + t48200*(-1.*t13948*t48384*t48853 + t12222*t48414*t48853 + t49718 + t12222*t41754*t49771 - 1.*t13948*t48439*t49771 + t49779) + t48439*(t13948*t48384*t48869 - 1.*t12222*t48414*t48869 - 1.*t12222*t44699*t49771 + t13948*t48200*t49771 + t49904 + t49913)) - 0.043*t44248*(t13948*t48713*t48853 + t13948*t48679*t48876 + t48605*(t13948*t48384*t48853 - 1.*t12222*t48414*t48853 - 1.*t12222*t41754*t49771 + t13948*t48439*t49771 + t49984 + t49998) + t48439*(-1.*t13948*t48384*t48876 + t12222*t48414*t48876 + t12222*t45591*t49771 - 1.*t13948*t48605*t49771 + t50071 + t50098)) - 0.043*t41694*(t13948*t48785*t48869 + t13948*t48748*t48876 + t48605*(-1.*t13948*t48384*t48869 + t12222*t48414*t48869 + t12222*t44699*t49771 - 1.*t13948*t48200*t49771 + t50174 + t50207) + t48200*(t13948*t48384*t48876 - 1.*t12222*t48414*t48876 - 1.*t12222*t45591*t49771 + t13948*t48605*t49771 + t50291 + t50317)) - 0.0013*(-1.*t12202*t13948*t48187 - 1.*t13948*t14117*t47884*t9629 - 1.*t13948*t9629*(t13948*t47245*t49461 - 1.*t12222*t47975*t49461 + t49489 + t14117*t47174*t9629 - 1.*t13948*t14117*t47229*t9629 + t12222*t14117*t47267*t9629) + t47245*(-1.*t12202*t47174 + t12202*t13948*t47229 - 1.*t12202*t12222*t47267 + t49472 + Power(t12222,2)*t49461*t9629 + Power(t13948,2)*t49461*t9629)))*var2[3] - 0.5*(0.000271*t41745 - 0.000271*t41246*t44695 - 6.e-12*t41475*t45425 - 0.043*t45288*(t44368*(-1.*t48318*t48853 + t49718 - 1.*t41745*t49771 + t49779) + t44695*t49831 + t41731*(t48318*t48869 + t44695*t49771 + t49904 + t49913) + t41745*t49955) - 0.043*t44248*(t45306*(t48318*t48853 + t41745*t49771 + t49984 + t49998) + t45425*t50022 + t41731*(-1.*t48318*t48876 - 1.*t45425*t49771 + t50071 + t50098) + t41745*t50146) - 0.043*t41694*(t45306*(-1.*t48318*t48869 - 1.*t44695*t49771 + t50174 + t50207) + t45425*t50254 + t44368*(t48318*t48876 + t45425*t49771 + t50291 + t50317) + t44695*t50351) + 0.000046*t9629 - 0.0013*(t12202*t14117*t49386 + t12202*(t12202*t14117*t49461 + t49489) - 1.*(t12202*t14117*t47174 + t48170 + 0.05*Power(t7208,2))*t9629 + t14117*t9629*(t49472 + t49461*t9629)))*var2[4])*var2[7];
  p_output1[6]=0;
  p_output1[7]=(-0.5*(-0.0013*t48140 - 0.043*t41694*t51000 - 0.043*t44248*t51031 - 0.043*t45288*t51070)*var2[0] - 0.5*(-0.0013*(-1.*t51109*t9587 - 1.*t12126*t14117*t9629) - 0.043*t44248*(-1.*t51121*t9587 + t12126*t44657*t9629) - 0.043*t45288*(-1.*t51179*t9587 + t12126*t45313*t9629) - 0.043*t41694*(-1.*t51092*t9587 + t12126*t34465*t7208*t9629))*var2[1] - 0.5*(-0.0013*(t12126*t51109 - 1.*t14117*t9587*t9629) - 0.043*t44248*(t12126*t51121 + t44657*t9587*t9629) - 0.043*t45288*(t12126*t51179 + t45313*t9587*t9629) - 0.043*t41694*(t12126*t51092 + t34465*t7208*t9587*t9629))*var2[2] - 0.5*(0.000271*t51000 - 0.000271*t41246*t51031 - 6.e-12*t41475*t51070 - 0.043*t45288*(t48583*t51000 + t48504*t51031 + t48200*(-1.*t48384*t51000 - 1.*t48414*t51092 + t52599 + t52605 - 1.*t48439*t53233 - 1.*t41754*t53253) + t48439*(t48384*t51031 + t48414*t51121 + t52628 + t52649 + t48200*t53233 + t44699*t53253)) - 0.043*t44248*(t48713*t51000 + t48679*t51070 + t48605*(t48384*t51000 + t48414*t51092 + t52702 + t52716 + t48439*t53233 + t41754*t53253) + t48439*(-1.*t48384*t51070 - 1.*t48414*t51179 + t52749 + t52776 - 1.*t48605*t53233 - 1.*t45591*t53253)) - 0.043*t41694*(t48785*t51031 + t48748*t51070 + t48605*(-1.*t48384*t51031 - 1.*t48414*t51121 + t52821 + t52827 - 1.*t48200*t53233 - 1.*t44699*t53253) + t48200*(t48384*t51070 + t48414*t51179 + t52849 + t52853 + t48605*t53233 + t45591*t53253)) - 0.0013*(t47884*t52948 - 1.*t13948*(t14882*t47267 + t52444 + t52552 + t47229*t52948 + t47975*t53010 + t47245*t53046)*t9629 + t47245*(-1.*t12222*t53010*t9629 + t13948*t53046*t9629 - 0.05*t12202*t7208*t9629)))*var2[3] - 0.5*(-0.000271*t41246*t44657*t9629 - 6.e-12*t41475*t45313*t9629 + 0.000271*t34465*t7208*t9629 - 0.043*t41694*(t45306*(-1.*t12202*t44695*t48229 - 1.*t12202*t44657*t48318 + t52038 + t52087 + t52821 + t52827) + t44368*(t12202*t45425*t48229 + t12202*t45313*t48318 + t52305 + t52315 + t52849 + t52853) + t45313*t50254*t9629 + t44657*t50351*t9629) - 0.0013*(t12202*(t52444 + t52552 - 0.1*t14117*t7208 + 0.05*Power(t12202,2)*t14117*t7208 + t12202*t47174*t7208) + t49386*t7208*t9629) - 0.043*t45288*(t41731*(t12202*t44695*t48229 + t12202*t44657*t48318 + t51316 + t51321 + t52628 + t52649) + t44368*(t14117*t34465*t48229 - 1.*t12202*t41745*t48229 + t51270 + t52599 + t52605 - 1.*t12202*t34465*t48318*t7208) + t44657*t49831*t9629 + t34465*t49955*t7208*t9629) - 0.043*t44248*(t41731*(-1.*t12202*t45425*t48229 - 1.*t12202*t45313*t48318 + t51918 + t51948 + t52749 + t52776) + t45306*(-1.*t14117*t34465*t48229 + t12202*t41745*t48229 + t51459 + t52702 + t52716 + t12202*t34465*t48318*t7208) + t45313*t50022*t9629 + t34465*t50146*t7208*t9629))*var2[4] - 0.5*(-0.00013*t14117 - 0.000271*t14117*t34465 - 0.000271*t41246*t51024 - 6.e-12*t41475*t51067 - 0.043*t41694*(t45313*(-1.*t44306*t48229 - 1.*t44657*t48264 + t52038 + t52087) + t51067*t52204 + t51024*t52263 + t44657*(t45302*t48229 + t45313*t48264 + t52305 + t52315)) - 0.043*t45288*(t51024*t51283 - 1.*t14117*t34465*t51352 + t34465*(t44306*t48229 + t44657*t48264 + t51316 + t51321)*t7208 + t44657*(t51270 - 1.*t34465*t48264*t7208)) - 0.043*t44248*(t51067*t51822 - 1.*t14117*t34465*t51866 + t34465*(-1.*t45302*t48229 - 1.*t45313*t48264 + t51918 + t51948)*t7208 + t45313*(t51459 + t34465*t48264*t7208)))*var2[5])*var2[7];
  p_output1[8]=0;
  p_output1[9]=var2[7]*(-0.5*(-0.043*t48605*t53795 - 0.043*t48200*t53971 - 0.043*t48439*t54130 - 0.043*t45288*t54461 - 0.043*t44248*t54567)*var2[0] - 0.5*(-0.043*t46076*t53795 - 0.043*t46039*t53971 - 0.043*t45940*t54130 - 0.043*t45288*(t12126*t55250 - 1.*t55267*t9587) - 0.043*t44248*(t12126*t55314 - 1.*t55322*t9587))*var2[1] - 0.5*(-0.043*t54130*(t12126*t41754 + t41731*t9587) - 0.043*t53971*(t12126*t44699 + t44368*t9587) - 0.043*t53795*(t12126*t45591 + t45306*t9587) - 0.043*t45288*(t12126*t55267 + t55250*t9587) - 0.043*t44248*(t12126*t55322 + t55314*t9587))*var2[2] - 0.5*(-8.13000000007317e-10*t41475*t48200 - 6.e-12*t32610*t48605 - 0.043*(t48200*t48504 + t48439*t48583)*t53795 - 0.043*(t48605*t48679 + t48439*t48713)*t53971 - 0.043*(t48605*t48748 + t48200*t48785)*t54130 - 6.e-12*t41475*t54461 - 0.000271*t41246*t54567 - 0.043*t45288*(t48504*t54567 + t48200*(t55729 - 1.*t48439*t55930 - 1.*t41754*t55993) + t48439*(t48384*t54567 + t48414*t55322 + t55771 + t55792 + t48200*t55930 + t44699*t55993)) - 0.043*t44248*(t48679*t54461 + t48605*(t55602 + t48439*t55930 + t41754*t55993) + t48439*(-1.*t48384*t54461 - 1.*t48414*t55267 + t55614 + t55626 - 1.*t48605*t55930 - 1.*t45591*t55993)) - 0.043*t41694*(t48748*t54461 + t48785*t54567 + t48605*(-1.*t48384*t54567 - 1.*t48414*t55322 + t55692 + t55703 - 1.*t48200*t55930 - 1.*t44699*t55993) + t48200*(t48384*t54461 + t48414*t55267 + t55658 + t55672 + t48605*t55930 + t45591*t55993)))*var2[3] - 0.5*(-8.13000000007317e-10*t41475*t44368 - 6.e-12*t32610*t45306 - 0.043*(t44368*t49831 + t41731*t49955)*t53795 - 0.043*(t45306*t50022 + t41731*t50146)*t53971 - 0.043*(t45306*t50254 + t44368*t50351)*t54130 - 6.e-12*t41475*t55250 - 0.000271*t41246*t55314 - 0.043*t44248*(t50022*t55250 + t45306*(t54854 + t41745*t55556 + t55602) + t41731*(-1.*t48318*t54423 + t54950 + t54992 - 1.*t45425*t55556 + t55614 + t55626)) - 0.043*t41694*(t50254*t55250 + t50351*t55314 + t44368*(t48318*t54423 + t55024 + t55033 + t45425*t55556 + t55658 + t55672) + t45306*(-1.*t48318*t54547 + t55042 + t55049 - 1.*t44695*t55556 + t55692 + t55703)) - 0.043*t45288*(t49831*t55314 + t44368*(t55138 - 1.*t41745*t55556 + t55729) + t41731*(t48318*t54547 + t55173 + t55178 + t44695*t55556 + t55771 + t55792)))*var2[4] - 0.5*(-8.13000000007317e-10*t41475*t44657 - 6.e-12*t32610*t45313 - 0.043*(t45313*t52204 + t44657*t52263)*t54130 - 6.e-12*t41475*t54356 - 0.000271*t41246*t54500 - 0.043*t41694*(t52204*t54356 + t52263*t54500 + t44657*(t53833 + t53922 + t48264*t54399 + t45302*t54871 + t55024 + t55033) + t45313*(t53662 + t53737 - 1.*t48264*t54537 - 1.*t44306*t54871 + t55042 + t55049)) - 0.043*t53795*(t44657*t51283 + t34465*t51352*t7208) - 0.043*t53971*(t45313*t51822 + t34465*t51866*t7208) - 0.043*t44248*(t51822*t54356 + t45313*(4.e-7 + t53857 + t53879 + t54854 + t14117*t34465*t54871) + t34465*(-3.e-6*t32610*t41608 - 3.e-6*t41475*t53661 - 1.*t48264*t54399 - 1.*t45302*t54871 + t54950 + t54992)*t7208) - 0.043*t45288*(t51283*t54500 + t44657*(-4.e-7 + t53643 + t53648 - 1.*t14117*t34465*t54871 + t55138) + t34465*(3.000000000027e-6*t41475*t41608 + t41246*t53661 + t48264*t54537 + t44306*t54871 + t55173 + t55178)*t7208))*var2[5] - 0.5*(-3.6e-17*t32610*t41475 - 1.62600000001463e-9*t41246*t41475 - 0.086*t45288*t53795 - 0.086*t44248*t53971 - 0.086*t41694*t54130)*var2[7] - 0.5*(-0.0042999871*t53795 - 5.16e-14*t53971 - 1.72e-8*t54130)*var2[9]);
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
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

#include "Ce3_vec8_minitaur.hh"

namespace FrontStance
{

void Ce3_vec8_minitaur_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
