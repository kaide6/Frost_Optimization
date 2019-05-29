/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:13:26 GMT-04:00
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
  double t293;
  double t535;
  double t574;
  double t579;
  double t670;
  double t787;
  double t795;
  double t825;
  double t898;
  double t840;
  double t846;
  double t850;
  double t858;
  double t731;
  double t736;
  double t750;
  double t754;
  double t889;
  double t903;
  double t904;
  double t907;
  double t915;
  double t919;
  double t799;
  double t801;
  double t830;
  double t835;
  double t410;
  double t318;
  double t673;
  double t704;
  double t261;
  double t465;
  double t159;
  double t258;
  double t326;
  double t944;
  double t839;
  double t860;
  double t924;
  double t1097;
  double t1105;
  double t1109;
  double t947;
  double t948;
  double t951;
  double t1173;
  double t4479;
  double t12175;
  double t282;
  double t355;
  double t361;
  double t707;
  double t928;
  double t940;
  double t952;
  double t955;
  double t959;
  double t960;
  double t978;
  double t981;
  double t986;
  double t995;
  double t1012;
  double t1020;
  double t1021;
  double t1084;
  double t1085;
  double t1087;
  double t1088;
  double t1089;
  double t1091;
  double t1092;
  double t1093;
  double t1094;
  double t1096;
  double t1115;
  double t1116;
  double t1118;
  double t1149;
  double t1150;
  double t1151;
  double t1153;
  double t1154;
  double t1155;
  double t1157;
  double t1161;
  double t1166;
  double t1167;
  double t1168;
  double t1170;
  double t1171;
  double t1172;
  double t34431;
  double t38490;
  double t41615;
  double t42720;
  double t45284;
  double t46635;
  double t49025;
  double t50042;
  double t50164;
  double t50184;
  double t50193;
  double t55851;
  double t56755;
  double t56773;
  double t56809;
  double t58664;
  double t59035;
  double t62129;
  double t62218;
  double t62223;
  double t62368;
  double t62504;
  double t62505;
  double t62891;
  double t62942;
  double t62944;
  double t63014;
  double t63015;
  double t63019;
  double t63020;
  double t63021;
  double t63022;
  double t63033;
  double t63040;
  double t63044;
  double t63553;
  double t63595;
  double t63603;
  double t63680;
  double t63725;
  double t63859;
  double t62980;
  double t63046;
  double t63047;
  double t63050;
  double t63053;
  double t63071;
  double t64041;
  double t64062;
  double t64111;
  double t64437;
  double t64475;
  double t64480;
  double t64482;
  double t64494;
  double t64498;
  double t64513;
  double t64521;
  double t64527;
  double t64550;
  double t64623;
  double t64644;
  double t64685;
  double t64693;
  double t64697;
  double t64720;
  double t64554;
  double t64586;
  double t64589;
  double t64492;
  double t64551;
  double t64552;
  double t64398;
  double t64414;
  double t64435;
  double t65444;
  double t65447;
  double t65764;
  double t68346;
  double t68497;
  double t68598;
  double t70258;
  double t70275;
  double t71414;
  double t71419;
  double t71425;
  double t71826;
  double t71848;
  double t71899;
  double t64224;
  double t73260;
  double t73261;
  double t73273;
  double t64247;
  double t65886;
  double t67969;
  double t74016;
  double t74017;
  double t74019;
  double t69082;
  double t69463;
  double t69816;
  double t70160;
  double t63973;
  double t63975;
  double t64229;
  double t73284;
  double t73295;
  double t64231;
  double t64238;
  double t64248;
  double t74022;
  double t74031;
  double t74095;
  double t74104;
  double t66207;
  double t66235;
  double t66961;
  double t67972;
  double t68153;
  double t68167;
  double t74357;
  double t74366;
  double t69097;
  double t69098;
  double t69100;
  double t74499;
  double t74501;
  double t69487;
  double t69501;
  double t69508;
  double t74566;
  double t74588;
  double t70043;
  double t70054;
  double t70072;
  double t74638;
  double t74646;
  double t70168;
  double t70181;
  double t70185;
  double t73931;
  double t75025;
  double t75026;
  double t75027;
  double t75139;
  double t75140;
  double t75142;
  double t74057;
  double t74218;
  double t75029;
  double t75035;
  double t75043;
  double t74473;
  double t74530;
  double t74591;
  double t63120;
  double t63394;
  double t63475;
  double t75351;
  double t75352;
  double t75353;
  double t75358;
  double t75359;
  double t75361;
  double t75367;
  double t75368;
  double t75376;
  double t75383;
  double t75384;
  double t75385;
  double t73020;
  double t73029;
  double t75143;
  double t73945;
  double t73971;
  double t75151;
  double t75155;
  double t74081;
  double t74084;
  double t75170;
  double t74311;
  double t74316;
  double t75197;
  double t75204;
  double t74495;
  double t74496;
  double t75214;
  double t75216;
  double t74541;
  double t74542;
  double t75235;
  double t75237;
  double t74592;
  double t74628;
  double t75301;
  double t75309;
  double t75310;
  double t75313;
  double t75322;
  double t75330;
  double t75332;
  double t75336;
  double t75341;
  double t75583;
  double t75584;
  double t75585;
  double t75578;
  double t75579;
  double t75581;
  double t75589;
  double t75591;
  double t75592;
  double t75442;
  double t75443;
  double t75446;
  double t75459;
  double t75460;
  double t75470;
  double t75497;
  double t75605;
  double t75606;
  double t75607;
  double t75609;
  double t75610;
  double t75611;
  double t75531;
  double t75532;
  double t75539;
  double t75543;
  double t75551;
  double t75555;
  double t75561;
  double t75565;
  double t75708;
  double t75709;
  double t75725;
  double t75726;
  double t75737;
  double t75739;
  double t75740;
  double t75723;
  double t75724;
  double t75732;
  double t75733;
  double t75734;
  double t75735;
  double t75741;
  double t75744;
  double t75748;
  double t75752;
  double t75760;
  double t75762;
  double t75707;
  double t75729;
  double t75730;
  double t75731;
  double t75736;
  double t75742;
  double t75749;
  double t75753;
  double t75754;
  double t75755;
  double t75756;
  double t75758;
  double t75759;
  double t75763;
  double t75767;
  double t75768;
  double t75769;
  double t75773;
  double t75774;
  double t75775;
  double t75776;
  double t75084;
  double t75085;
  double t75163;
  double t75164;
  double t75165;
  double t75176;
  double t75178;
  double t75182;
  double t75184;
  double t75195;
  double t75225;
  double t75226;
  double t75232;
  double t75233;
  double t75793;
  double t75794;
  double t75796;
  double t75813;
  double t75814;
  double t75817;
  double t75820;
  double t75821;
  double t75822;
  double t75789;
  double t75790;
  double t75833;
  double t75834;
  double t75860;
  double t75861;
  double t75948;
  double t75949;
  double t75951;
  double t75957;
  double t75958;
  double t75959;
  double t51805;
  double t51898;
  double t52046;
  double t52341;
  double t52376;
  double t53281;
  double t75989;
  double t75990;
  double t75991;
  double t76001;
  double t76002;
  double t76005;
  double t76017;
  double t76018;
  double t76021;
  double t76024;
  double t76028;
  double t76029;
  double t53739;
  double t53740;
  double t54243;
  double t75818;
  double t75836;
  double t75838;
  double t76088;
  double t76089;
  double t76094;
  double t76084;
  double t76085;
  double t76086;
  double t75849;
  double t75853;
  double t75858;
  double t75859;
  double t75899;
  double t75931;
  double t75932;
  double t75947;
  double t75953;
  double t75954;
  double t75956;
  double t75960;
  double t75961;
  double t76189;
  double t76200;
  double t76201;
  double t76217;
  double t76219;
  double t76220;
  double t76223;
  double t76224;
  double t76225;
  double t76087;
  double t76100;
  double t76102;
  double t76119;
  double t76121;
  double t76113;
  double t76114;
  t293 = Cos(var1[14]);
  t535 = Cos(var1[16]);
  t574 = -1.*t535;
  t579 = 1. + t574;
  t670 = 3.e-6*t579;
  t787 = -1.000000000009*t579;
  t795 = 1. + t787;
  t825 = Sin(var1[16]);
  t898 = 9.e-12*t579;
  t840 = 1.2e-12*var1[16];
  t846 = 0.1000003000009*t579;
  t850 = -3.e-12*t825;
  t858 = t840 + t846 + t850;
  t731 = -9.e-12*t579;
  t736 = 1. + t731;
  t750 = -3.e-6*t736;
  t754 = t750 + t670;
  t889 = -4.e-7*var1[16];
  t903 = -1. + t898;
  t904 = 0.1*t903;
  t907 = 3.000000000027e-7*t579;
  t915 = -9.e-18*t825;
  t919 = t889 + t904 + t907 + t915;
  t799 = 0.2*t795;
  t801 = 0.2000000000048*t579;
  t830 = 0.1000003000009*t825;
  t835 = t799 + t801 + t830;
  t410 = Sin(var1[3]);
  t318 = Cos(var1[5]);
  t673 = 3.e-6*t535;
  t704 = t670 + t673;
  t261 = Sin(var1[14]);
  t465 = Sin(var1[5]);
  t159 = Cos(var1[3]);
  t258 = Cos(var1[4]);
  t326 = Sin(var1[4]);
  t944 = t898 + t574;
  t839 = t795*t835;
  t860 = t858*t825;
  t924 = 3.e-6*t919*t825;
  t1097 = t944*t261;
  t1105 = 1.000000000009*t293*t825;
  t1109 = t1097 + t1105;
  t947 = -1.*t944*t858;
  t948 = -1.*t754*t919;
  t951 = -1.000000000009*t835*t825;
  t1173 = t293*t795;
  t4479 = t261*t825;
  t12175 = t1173 + t4479;
  t282 = -1.*t258*t261;
  t355 = -1.*t293*t318*t326;
  t361 = t282 + t355;
  t707 = 0.2*t704;
  t928 = t839 + t860 + t924;
  t940 = t754*t928;
  t952 = t947 + t948 + t951;
  t955 = 3.e-6*t825*t952;
  t959 = t707 + t940 + t955;
  t960 = -1.*t318;
  t978 = t704*t261*t465;
  t981 = t960 + t978;
  t986 = t293*t704*t258;
  t995 = t704*t318*t261;
  t1012 = t995 + t465;
  t1020 = -1.*t326*t1012;
  t1021 = t986 + t1020;
  t1084 = 0.2*t944;
  t1085 = 4.e-7*var1[16];
  t1087 = 0.1*t736;
  t1088 = -3.000000000027e-7*t579;
  t1089 = t704*t858;
  t1091 = 9.e-18*t825;
  t1092 = t1085 + t1087 + t1088 + t1089 + t1091;
  t1093 = 3.e-6*t1092*t825;
  t1094 = t1084 + t839 + t860 + t924 + t1093;
  t1096 = t754*t318;
  t1115 = t1109*t465;
  t1116 = t1096 + t1115;
  t1118 = t293*t944;
  t1149 = -1.000000000009*t261*t825;
  t1150 = t1118 + t1149;
  t1151 = t258*t1150;
  t1153 = t318*t1109;
  t1154 = -1.*t754*t465;
  t1155 = t1153 + t1154;
  t1157 = -1.*t326*t1155;
  t1161 = t1151 + t1157;
  t1166 = -1.*t704*t858;
  t1167 = t889 + t904 + t907 + t1166 + t915;
  t1168 = t754*t1167;
  t1170 = 0.2*t825;
  t1171 = t947 + t948 + t1168 + t1170 + t951;
  t1172 = 3.e-6*t318*t825;
  t34431 = t12175*t465;
  t38490 = t1172 + t34431;
  t41615 = -1.*t795*t261;
  t42720 = t293*t825;
  t45284 = t41615 + t42720;
  t46635 = t258*t45284;
  t49025 = t318*t12175;
  t50042 = -3.e-6*t825*t465;
  t50164 = t49025 + t50042;
  t50184 = -1.*t326*t50164;
  t50193 = t46635 + t50184;
  t55851 = -1.*t293*t258*t318;
  t56755 = t261*t326;
  t56773 = t55851 + t56755;
  t56809 = -1.*t293*t704*t326;
  t58664 = -1.*t258*t1012;
  t59035 = t56809 + t58664;
  t62129 = -1.*t1150*t326;
  t62218 = -1.*t258*t1155;
  t62223 = t62129 + t62218;
  t62368 = -1.*t45284*t326;
  t62504 = -1.*t258*t50164;
  t62505 = t62368 + t62504;
  t62891 = t293*t258;
  t62942 = -1.*t318*t261*t326;
  t62944 = t62891 + t62942;
  t63014 = -1.*t293;
  t63015 = 1. + t63014;
  t63019 = 0.2*t63015;
  t63020 = 0.2*t293;
  t63021 = 0.05*t261;
  t63022 = t63019 + t63020 + t63021;
  t63033 = t318*t63022;
  t63040 = 0.1*t465;
  t63044 = t63033 + t63040;
  t63553 = 0.05*t293*t258;
  t63595 = -1.*t326*t63044;
  t63603 = t63553 + t63595;
  t63680 = t258*t318*t261;
  t63725 = t293*t326;
  t63859 = t63680 + t63725;
  t62980 = -0.05*t293*t326;
  t63046 = -1.*t258*t63044;
  t63047 = t62980 + t63046;
  t63050 = 0.05*t293*t326;
  t63053 = t258*t63044;
  t63071 = t63050 + t63053;
  t64041 = -0.1*t318;
  t64062 = t63022*t465;
  t64111 = t64041 + t64062;
  t64437 = 0.2*t261;
  t64475 = t293*t858;
  t64480 = -1.*t261*t835;
  t64482 = t64437 + t64475 + t64480;
  t64494 = t261*t858;
  t64498 = t293*t835;
  t64513 = t63019 + t64494 + t64498;
  t64521 = t318*t64513;
  t64527 = -1.*t919*t465;
  t64550 = t64521 + t64527;
  t64623 = t258*t64482;
  t64644 = -1.*t326*t64550;
  t64685 = t64623 + t64644;
  t64693 = t293*t704*t326;
  t64697 = t258*t1012;
  t64720 = t64693 + t64697;
  t64554 = t64482*t326;
  t64586 = t258*t64550;
  t64589 = t64554 + t64586;
  t64492 = -1.*t64482*t326;
  t64551 = -1.*t258*t64550;
  t64552 = t64492 + t64551;
  t64398 = t1150*t326;
  t64414 = t258*t1155;
  t64435 = t64398 + t64414;
  t65444 = t318*t919;
  t65447 = t64513*t465;
  t65764 = t65444 + t65447;
  t68346 = t45284*t326;
  t68497 = t258*t50164;
  t68598 = t68346 + t68497;
  t70258 = -1.*t704*t261*t465;
  t70275 = t318 + t70258;
  t71414 = -1.*t754*t318;
  t71419 = -1.*t1109*t465;
  t71425 = t71414 + t71419;
  t71826 = -3.e-6*t318*t825;
  t71848 = -1.*t12175*t465;
  t71899 = t71826 + t71848;
  t64224 = -1.*t318*t64111;
  t73260 = 0.1*t318;
  t73261 = -1.*t63022*t465;
  t73273 = t73260 + t73261;
  t64247 = t261*t465*t64111;
  t65886 = -1.*t981*t65764;
  t67969 = t65764*t1116;
  t74016 = -1.*t318*t919;
  t74017 = -1.*t64513*t465;
  t74019 = t74016 + t74017;
  t69082 = t981*t65764;
  t69463 = -1.*t65764*t38490;
  t69816 = -1.*t65764*t1116;
  t70160 = t65764*t38490;
  t63973 = t258*t63071*t465;
  t63975 = -1.*t326*t63603*t465;
  t64229 = t63973 + t63975 + t64224;
  t73284 = t318*t261*t64111;
  t73295 = t465*t64111;
  t64231 = t63859*t63071;
  t64238 = t62944*t63603;
  t64248 = t64231 + t64238 + t64247;
  t74022 = -1.*t1012*t65764;
  t74031 = -1.*t981*t64550;
  t74095 = t1155*t65764;
  t74104 = t64550*t1116;
  t66207 = -1.*t64720*t64589;
  t66235 = -1.*t1021*t64685;
  t66961 = t65886 + t66207 + t66235;
  t67972 = t64435*t64589;
  t68153 = t1161*t64685;
  t68167 = t67969 + t67972 + t68153;
  t74357 = t1012*t65764;
  t74366 = t981*t64550;
  t69097 = t64720*t64589;
  t69098 = t1021*t64685;
  t69100 = t69082 + t69097 + t69098;
  t74499 = -1.*t65764*t50164;
  t74501 = -1.*t64550*t38490;
  t69487 = -1.*t64589*t68598;
  t69501 = -1.*t64685*t50193;
  t69508 = t69463 + t69487 + t69501;
  t74566 = -1.*t1155*t65764;
  t74588 = -1.*t64550*t1116;
  t70043 = -1.*t64435*t64589;
  t70054 = -1.*t1161*t64685;
  t70072 = t69816 + t70043 + t70054;
  t74638 = t65764*t50164;
  t74646 = t64550*t38490;
  t70168 = t64589*t68598;
  t70181 = t64685*t50193;
  t70185 = t70160 + t70168 + t70181;
  t73931 = -1.*t293*t704*t64482;
  t75025 = -1.*t944*t261;
  t75026 = -1.000000000009*t293*t825;
  t75027 = t75025 + t75026;
  t75139 = -1.*t261*t858;
  t75140 = -1.*t293*t835;
  t75142 = t63020 + t75139 + t75140;
  t74057 = t64482*t1150;
  t74218 = t293*t704*t64482;
  t75029 = -1.*t293*t795;
  t75035 = -1.*t261*t825;
  t75043 = t75029 + t75035;
  t74473 = -1.*t64482*t45284;
  t74530 = -1.*t64482*t1150;
  t74591 = t64482*t45284;
  t63120 = -1.*t258*t318*t261;
  t63394 = -1.*t293*t326;
  t63475 = t63120 + t63394;
  t75351 = -1.*t704*t258*t261;
  t75352 = -1.*t293*t704*t318*t326;
  t75353 = t75351 + t75352;
  t75358 = -1.*t293*t258;
  t75359 = t318*t261*t326;
  t75361 = t75358 + t75359;
  t75367 = t258*t75043;
  t75368 = -1.*t318*t45284*t326;
  t75376 = t75367 + t75368;
  t75383 = t258*t75027;
  t75384 = -1.*t318*t1150*t326;
  t75385 = t75383 + t75384;
  t73020 = t63044*t465;
  t73029 = t73020 + t64224;
  t75143 = -1.*t293*t704*t75142;
  t73945 = -1.*t1012*t64550;
  t73971 = t73931 + t65886 + t73945;
  t75151 = t64482*t75027;
  t75155 = t75142*t1150;
  t74081 = t1155*t64550;
  t74084 = t74057 + t74081 + t67969;
  t75170 = t293*t704*t75142;
  t74311 = t1012*t64550;
  t74316 = t74218 + t69082 + t74311;
  t75197 = -1.*t75142*t45284;
  t75204 = -1.*t64482*t75043;
  t74495 = -1.*t64550*t50164;
  t74496 = t74473 + t74495 + t69463;
  t75214 = -1.*t64482*t75027;
  t75216 = -1.*t75142*t1150;
  t74541 = -1.*t1155*t64550;
  t74542 = t74530 + t74541 + t69816;
  t75235 = t75142*t45284;
  t75237 = t64482*t75043;
  t74592 = t64550*t50164;
  t74628 = t74591 + t74592 + t70160;
  t75301 = t293*t704*t258*t318;
  t75309 = -1.*t704*t261*t326;
  t75310 = t75301 + t75309;
  t75313 = t258*t318*t1150;
  t75322 = t75027*t326;
  t75330 = t75313 + t75322;
  t75332 = t258*t318*t45284;
  t75336 = t75043*t326;
  t75341 = t75332 + t75336;
  t75583 = 0.05*t293*t258*t318;
  t75584 = -0.05*t261*t326;
  t75585 = t75583 + t75584;
  t75578 = -0.05*t258*t261;
  t75579 = -0.05*t293*t318*t326;
  t75581 = t75578 + t75579;
  t75589 = t293*t258*t318;
  t75591 = -1.*t261*t326;
  t75592 = t75589 + t75591;
  t75442 = Power(t465,2);
  t75443 = 0.05*t293*t261*t75442;
  t75446 = t293*t465*t64111;
  t75459 = -1.*t64482*t465*t981;
  t75460 = -1.*t293*t704*t465*t65764;
  t75470 = t1150*t465*t65764;
  t75497 = t64482*t465*t1116;
  t75605 = t258*t318*t64482;
  t75606 = t75142*t326;
  t75607 = t75605 + t75606;
  t75609 = t258*t75142;
  t75610 = -1.*t318*t64482*t326;
  t75611 = t75609 + t75610;
  t75531 = t64482*t465*t981;
  t75532 = t293*t704*t465*t65764;
  t75539 = -1.*t45284*t465*t65764;
  t75543 = -1.*t64482*t465*t38490;
  t75551 = -1.*t1150*t465*t65764;
  t75555 = -1.*t64482*t465*t1116;
  t75561 = t45284*t465*t65764;
  t75565 = t64482*t465*t38490;
  t75708 = -9.e-18*t535;
  t75709 = 3.000009000027e-7*t825;
  t75725 = -3.e-12*t535;
  t75726 = 1.2e-12 + t75725 + t830;
  t75737 = 0.1000003000009*t535;
  t75739 = 3.000000000027e-12*t825;
  t75740 = t75737 + t75739;
  t75723 = -4.e-7 + t75708 + t75709;
  t75724 = -1.*t754*t75723;
  t75732 = -1.000000000009*t535*t835;
  t75733 = -1.*t944*t75726;
  t75734 = -1.000000000009*t858*t825;
  t75735 = -3.000000000027e-6*t919*t825;
  t75741 = -1.000000000009*t75740*t825;
  t75744 = t535*t858;
  t75748 = 3.e-6*t535*t919;
  t75752 = t795*t75740;
  t75760 = 3.e-6*t75723*t825;
  t75762 = t75726*t825;
  t75707 = 0.2*t535;
  t75729 = -1.*t704*t75726;
  t75730 = -4.e-7 + t75708 + t75729 + t75709;
  t75731 = t754*t75730;
  t75736 = 3.000000000027e-6*t1167*t825;
  t75742 = t75707 + t75724 + t75731 + t75732 + t75733 + t75734 + t75735 + t75736 + t75741;
  t75749 = 3.e-6*t535*t1092;
  t75753 = 0.2000000000018*t825;
  t75754 = 9.e-18*t535;
  t75755 = t704*t75726;
  t75756 = -3.000009000027e-7*t825;
  t75758 = 4.e-7 + t75754 + t75755 + t75756;
  t75759 = 3.e-6*t75758*t825;
  t75763 = t75744 + t75748 + t75749 + t75752 + t75753 + t75759 + t75760 + t951 + t75762;
  t75767 = 3.000000000027e-6*t825*t928;
  t75768 = t75724 + t75732 + t75733 + t75734 + t75735 + t75741;
  t75769 = 3.e-6*t825*t75768;
  t75773 = 3.e-6*t535*t952;
  t75774 = t75744 + t75748 + t75752 + t75760 + t951 + t75762;
  t75775 = t754*t75774;
  t75776 = t75767 + t75769 + t75773 + t75775;
  t75084 = -1.*t704*t261*t64513;
  t75085 = t889 + t904 + t907 + t75084 + t73931 + t915;
  t75163 = t754*t919;
  t75164 = t64513*t1109;
  t75165 = t75163 + t75164 + t74057;
  t75176 = t704*t261*t64513;
  t75178 = t1085 + t1087 + t1088 + t75176 + t74218 + t1091;
  t75182 = -3.e-6*t919*t825;
  t75184 = -1.*t64513*t12175;
  t75195 = t75182 + t74473 + t75184;
  t75225 = -1.*t64513*t1109;
  t75226 = t948 + t75225 + t74530;
  t75232 = t64513*t12175;
  t75233 = t924 + t74591 + t75232;
  t75793 = t293*t535;
  t75794 = 1.000000000009*t261*t825;
  t75796 = t75793 + t75794;
  t75813 = -1.*t261*t75740;
  t75814 = t293*t75726;
  t75817 = t75813 + t75814;
  t75820 = t293*t75740;
  t75821 = t261*t75726;
  t75822 = t75820 + t75821;
  t75789 = -1.000000000009*t535*t261;
  t75790 = t75789 + t1105;
  t75833 = t535*t261;
  t75834 = t75833 + t75026;
  t75860 = 1.000000000009*t293*t535;
  t75861 = t75860 + t75794;
  t75948 = t318*t75834;
  t75949 = -3.e-6*t535*t465;
  t75951 = t75948 + t75949;
  t75957 = t318*t75861;
  t75958 = -3.000000000027e-6*t825*t465;
  t75959 = t75957 + t75958;
  t51805 = t159*t981;
  t51898 = -1.*t410*t1021;
  t52046 = t51805 + t51898;
  t52341 = t159*t1116;
  t52376 = -1.*t410*t1161;
  t53281 = t52341 + t52376;
  t75989 = 3.e-6*t535*t318;
  t75990 = t75834*t465;
  t75991 = t75989 + t75990;
  t76001 = t258*t75796;
  t76002 = -1.*t326*t75951;
  t76005 = t76001 + t76002;
  t76017 = 3.000000000027e-6*t318*t825;
  t76018 = t75861*t465;
  t76021 = t76017 + t76018;
  t76024 = t258*t75790;
  t76028 = -1.*t326*t75959;
  t76029 = t76024 + t76028;
  t53739 = t159*t38490;
  t53740 = -1.*t410*t50193;
  t54243 = t53739 + t53740;
  t75818 = t293*t704*t75817;
  t75836 = -1.*t75817*t45284;
  t75838 = -1.*t64482*t75796;
  t76088 = t318*t75822;
  t76089 = -1.*t75723*t465;
  t76094 = t76088 + t76089;
  t76084 = t318*t75723;
  t76085 = t75822*t465;
  t76086 = t76084 + t76085;
  t75849 = t75817*t45284;
  t75853 = t64482*t75796;
  t75858 = -1.*t64482*t75790;
  t75859 = -1.*t75817*t1150;
  t75899 = -1.*t293*t704*t75817;
  t75931 = t64482*t75790;
  t75932 = t75817*t1150;
  t75947 = t75796*t326;
  t75953 = t258*t75951;
  t75954 = t75947 + t75953;
  t75956 = t75790*t326;
  t75960 = t258*t75959;
  t75961 = t75956 + t75960;
  t76189 = -1.*t981*t76086;
  t76200 = t76086*t1116;
  t76201 = t65764*t76021;
  t76217 = t75817*t326;
  t76219 = t258*t76094;
  t76220 = t76217 + t76219;
  t76223 = t258*t75817;
  t76224 = -1.*t326*t76094;
  t76225 = t76223 + t76224;
  t76087 = t981*t76086;
  t76100 = -1.*t65764*t75991;
  t76102 = -1.*t76086*t38490;
  t76119 = -1.*t76086*t1116;
  t76121 = -1.*t65764*t76021;
  t76113 = t65764*t75991;
  t76114 = t76086*t38490;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(-0.05186*t1094*(-1.*t1161*t159 - 1.*t1116*t410) - 0.0013*(-1.*t159*t361 - 1.*t293*t410*t465) - 0.05186*t1171*(-1.*t38490*t410 - 1.*t159*t50193) - 0.05186*t959*(-1.*t1021*t159 - 1.*t410*t981))*var2[1] - 0.5*(-0.0013*(-1.*t361*t410 + t159*t293*t465) - 0.05186*t1094*t53281 - 0.05186*t1171*t54243 - 0.05186*t52046*t959)*var2[2])*var2[14];
  p_output1[4]=(-0.5*(-0.05186*t1094*t1161 - 0.0013*t361 - 0.05186*t1171*t50193 - 0.05186*t1021*t959)*var2[0] - 0.5*(0.0013*t410*t56773 + 0.05186*t1094*t410*t62223 + 0.05186*t1171*t410*t62505 + 0.05186*t410*t59035*t959)*var2[1] - 0.5*(-0.0013*t159*t56773 - 0.05186*t1094*t159*t62223 - 0.05186*t1171*t159*t62505 - 0.05186*t159*t59035*t959)*var2[2] - 0.5*(0.000245*t1021 - 0.000046*t326*t465 - 0.0013*((-1.*t326*t465*t63047 - 1.*t326*t465*t63071)*t63859 - 1.*t258*t465*(t62944*t63047 + t62944*t63071 + t63475*t63603 + t63603*t63859) + t62944*t64229 + t326*t465*t64248) - 0.05186*t1171*((t1161*t64552 + t1161*t64589 + t62223*t64685 + t64435*t64685)*t64720 + t64435*(-1.*t1021*t64552 - 1.*t1021*t64589 - 1.*t59035*t64685 - 1.*t64685*t64720) + t1161*t66961 + t1021*t68167) - 0.05186*t1094*((t1021*t64552 + t1021*t64589 + t59035*t64685 + t64685*t64720)*t68598 + t64720*(-1.*t50193*t64552 - 1.*t50193*t64589 - 1.*t62505*t64685 - 1.*t64685*t68598) + t50193*t69100 + t1021*t69508) - 0.000245*t1161*t754 - 6.e-12*t50193*t825 - 0.05186*((-1.*t1161*t64552 - 1.*t1161*t64589 - 1.*t62223*t64685 - 1.*t64435*t64685)*t68598 + t64435*(t50193*t64552 + t50193*t64589 + t62505*t64685 + t64685*t68598) + t50193*t70072 + t1161*t70185)*t959)*var2[3])*var2[14];
  p_output1[5]=(-0.5*(0.0013*t258*t293*t465 - 0.05186*t1094*t258*t71425 - 0.05186*t1171*t258*t71899 - 0.05186*t258*t70275*t959)*var2[0] - 0.5*(-0.0013*(t159*t293*t318 - 1.*t293*t326*t410*t465) - 0.05186*t1094*(t1155*t159 + t326*t410*t71425) - 0.05186*t1171*(t159*t50164 + t326*t410*t71899) - 0.05186*(t1012*t159 + t326*t410*t70275)*t959)*var2[1] - 0.5*(-0.0013*(t293*t318*t410 + t159*t293*t326*t465) - 0.05186*t1094*(t1155*t410 - 1.*t159*t326*t71425) - 0.05186*t1171*(t410*t50164 - 1.*t159*t326*t71899) - 0.05186*(t1012*t410 - 1.*t159*t326*t70275)*t959)*var2[2] - 0.5*(0.000046*t258*t318 + 0.000245*t258*t70275 - 0.0013*(-1.*t258*t261*t465*t64229 - 1.*t258*t318*t64248 - 1.*t258*t465*(t261*t465*t63044 - 1.*t258*t261*t465*t63071 + t261*t326*t465*t63603 - 1.*t326*t62944*t73273 + t258*t63859*t73273 + t73284) + t63859*(-1.*t318*t63044 + t258*t318*t63071 - 1.*t318*t326*t63603 + Power(t258,2)*t465*t73273 + Power(t326,2)*t465*t73273 + t73295)) - 0.05186*t1171*(t258*t68167*t70275 + t258*t66961*t71425 + t64435*(-1.*t258*t64589*t70275 + t326*t64685*t70275 + t1021*t326*t74019 - 1.*t258*t64720*t74019 + t74022 + t74031) + t64720*(t258*t64589*t71425 - 1.*t326*t64685*t71425 - 1.*t1161*t326*t74019 + t258*t64435*t74019 + t74095 + t74104)) - 0.05186*t1094*(t258*t69508*t70275 + t258*t69100*t71899 + t68598*(t258*t64589*t70275 - 1.*t326*t64685*t70275 - 1.*t1021*t326*t74019 + t258*t64720*t74019 + t74357 + t74366) + t64720*(-1.*t258*t64589*t71899 + t326*t64685*t71899 + t326*t50193*t74019 - 1.*t258*t68598*t74019 + t74499 + t74501)) - 0.000245*t258*t71425*t754 - 6.e-12*t258*t71899*t825 - 0.05186*(t258*t70185*t71425 + t258*t70072*t71899 + t68598*(-1.*t258*t64589*t71425 + t326*t64685*t71425 + t1161*t326*t74019 - 1.*t258*t64435*t74019 + t74566 + t74588) + t64435*(t258*t64589*t71899 - 1.*t326*t64685*t71899 - 1.*t326*t50193*t74019 + t258*t68598*t74019 + t74638 + t74646))*t959)*var2[3] - 0.5*(0.000245*t1012 + 0.000046*t465 - 0.0013*(-1.*t465*(0.05*Power(t293,2) + t261*t318*t63044 + t64247) + t261*t318*t73029 + t318*(t261*t318*t73273 + t73284) + t261*t465*(t465*t73273 + t73295)) - 0.000245*t1155*t754 - 6.e-12*t50164*t825 - 0.05186*(t50164*t74542 + t38490*(-1.*t64550*t71425 - 1.*t1155*t74019 + t74566 + t74588) + t1155*t74628 + t1116*(t64550*t71899 + t50164*t74019 + t74638 + t74646))*t959 - 0.05186*t1171*(t1155*t73971 + t1116*(-1.*t64550*t70275 - 1.*t1012*t74019 + t74022 + t74031) + t1012*t74084 + (t64550*t71425 + t1155*t74019 + t74095 + t74104)*t981) - 0.05186*t1094*(t50164*t74316 + t38490*(t64550*t70275 + t1012*t74019 + t74357 + t74366) + t1012*t74496 + (-1.*t64550*t71899 - 1.*t50164*t74019 + t74499 + t74501)*t981))*var2[4])*var2[14];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=(-0.5*(-0.0013*t63475 - 0.05186*t1094*t75330 - 0.05186*t1171*t75341 - 0.05186*t75310*t959)*var2[0] - 0.5*(-0.0013*(-1.*t159*t261*t465 - 1.*t410*t75361) - 0.05186*t1171*(t159*t45284*t465 - 1.*t410*t75376) - 0.05186*t1094*(t1150*t159*t465 - 1.*t410*t75385) - 0.05186*(t159*t293*t465*t704 - 1.*t410*t75353)*t959)*var2[1] - 0.5*(-0.0013*(-1.*t261*t410*t465 + t159*t75361) - 0.05186*t1171*(t410*t45284*t465 + t159*t75376) - 0.05186*t1094*(t1150*t410*t465 + t159*t75385) - 0.05186*(t293*t410*t465*t704 + t159*t75353)*t959)*var2[2] - 0.5*(0.000245*t75310 - 0.000245*t75330*t754 - 0.0013*(t63859*(-0.05*t293*t318*t465 - 1.*t326*t465*t75581 + t258*t465*t75585) + t64229*t75592 - 1.*t258*t465*(t361*t63603 + t75443 + t75446 + t62944*t75581 + t63859*t75585 + t63071*t75592)) - 0.05186*t1171*(t68167*t75310 + t66961*t75330 + t64435*(-1.*t64589*t75310 - 1.*t64685*t75353 + t75459 + t75460 - 1.*t64720*t75607 - 1.*t1021*t75611) + t64720*(t64589*t75330 + t64685*t75385 + t75470 + t75497 + t64435*t75607 + t1161*t75611)) - 0.05186*t1094*(t69508*t75310 + t69100*t75341 + t68598*(t64589*t75310 + t64685*t75353 + t75531 + t75532 + t64720*t75607 + t1021*t75611) + t64720*(-1.*t64589*t75341 - 1.*t64685*t75376 + t75539 + t75543 - 1.*t68598*t75607 - 1.*t50193*t75611)) - 6.e-12*t75341*t825 - 0.05186*(t70185*t75330 + t70072*t75341 + t68598*(-1.*t64589*t75330 - 1.*t64685*t75385 + t75551 + t75555 - 1.*t64435*t75607 - 1.*t1161*t75611) + t64435*(t64589*t75341 + t64685*t75376 + t75561 + t75565 + t68598*t75607 + t50193*t75611))*t959)*var2[3] - 0.5*(0.000245*t293*t465*t704 - 0.000245*t1150*t465*t754 - 0.0013*(t293*t465*t73029 + t318*(-0.1*t261*t293 + 0.05*t261*t293*Power(t318,2) + t293*t318*t63044 + t75443 + t75446)) - 6.e-12*t45284*t465*t825 - 0.05186*(t45284*t465*t74542 + t1150*t465*t74628 + t38490*(-1.*t1155*t318*t64482 - 1.*t1150*t318*t64550 + t75214 + t75216 + t75551 + t75555) + t1116*(t318*t50164*t64482 + t318*t45284*t64550 + t75235 + t75237 + t75561 + t75565))*t959 - 0.05186*t1171*(t1150*t465*t73971 + t293*t465*t704*t74084 + t1116*(-1.*t1012*t318*t64482 + t261*t64482*t704 - 1.*t293*t318*t64550*t704 + t75143 + t75459 + t75460) + (t1155*t318*t64482 + t1150*t318*t64550 + t75151 + t75155 + t75470 + t75497)*t981) - 0.05186*t1094*(t45284*t465*t74316 + t293*t465*t704*t74496 + t38490*(t1012*t318*t64482 - 1.*t261*t64482*t704 + t293*t318*t64550*t704 + t75170 + t75531 + t75532) + (-1.*t318*t50164*t64482 - 1.*t318*t45284*t64550 + t75197 + t75204 + t75539 + t75543)*t981))*var2[4] - 0.5*(0.00013*t261 - 0.000245*t261*t704 - 0.05186*t1171*(t75027*t75085 + t1150*(-1.*t293*t64513*t704 + t75143) + t293*t704*(t1109*t64482 + t1150*t64513 + t75151 + t75155) - 1.*t261*t704*t75165) - 0.05186*t1094*(t45284*(t293*t64513*t704 + t75170) + t75043*t75178 - 1.*t261*t704*t75195 + t293*t704*(-1.*t12175*t64482 - 1.*t45284*t64513 + t75197 + t75204)) - 0.000245*t75027*t754 - 6.e-12*t75043*t825 - 0.05186*(t45284*(-1.*t1109*t64482 - 1.*t1150*t64513 + t75214 + t75216) + t75043*t75226 + t75027*t75233 + t1150*(t12175*t64482 + t45284*t64513 + t75235 + t75237))*t959)*var2[5])*var2[14];
  p_output1[15]=0;
  p_output1[16]=var2[14]*(-0.5*(-0.05186*t68598*t75742 - 0.05186*t64435*t75763 - 0.05186*t64720*t75776 - 0.05186*t1171*t75954 - 0.05186*t1094*t75961)*var2[0] - 0.5*(-0.05186*t54243*t75742 - 0.05186*t53281*t75763 - 0.05186*t52046*t75776 - 0.05186*t1171*(t159*t75991 - 1.*t410*t76005) - 0.05186*t1094*(t159*t76021 - 1.*t410*t76029))*var2[1] - 0.5*(-0.05186*(t38490*t410 + t159*t50193)*t75742 - 0.05186*(t1161*t159 + t1116*t410)*t75763 - 0.05186*t1171*(t410*t75991 + t159*t76005) - 0.05186*t1094*(t410*t76021 + t159*t76029) - 0.05186*t75776*(t1021*t159 + t410*t981))*var2[2] - 0.5*(-6.e-12*t535*t68598 - 0.05186*(t64435*t66961 + t64720*t68167)*t75742 - 0.05186*(t68598*t69100 + t64720*t69508)*t75763 - 0.05186*(t68598*t70072 + t64435*t70185)*t75776 - 0.000245*t754*t75961 - 0.05186*t1171*(t66961*t75961 + t64435*(t76189 - 1.*t64720*t76220 - 1.*t1021*t76225) + t64720*(t64589*t75961 + t64685*t76029 + t76200 + t76201 + t64435*t76220 + t1161*t76225)) - 0.05186*t1094*(t69100*t75954 + t68598*(t76087 + t64720*t76220 + t1021*t76225) + t64720*(-1.*t64589*t75954 - 1.*t64685*t76005 + t76100 + t76102 - 1.*t68598*t76220 - 1.*t50193*t76225)) - 7.35000000006615e-10*t64435*t825 - 6.e-12*t75954*t825 - 0.05186*(t70072*t75954 + t70185*t75961 + t68598*(-1.*t64589*t75961 - 1.*t64685*t76029 + t76119 + t76121 - 1.*t64435*t76220 - 1.*t1161*t76225) + t64435*(t64589*t75954 + t64685*t76005 + t76113 + t76114 + t68598*t76220 + t50193*t76225))*t959)*var2[3] - 0.5*(-6.e-12*t38490*t535 - 0.05186*(t38490*t74542 + t1116*t74628)*t75776 - 0.000245*t754*t76021 - 7.35000000006615e-10*t1116*t825 - 6.e-12*t75991*t825 - 0.05186*(t74542*t75991 + t74628*t76021 + t1116*(t75849 + t75853 + t64550*t75951 + t50164*t76094 + t76113 + t76114) + t38490*(t75858 + t75859 - 1.*t64550*t75959 - 1.*t1155*t76094 + t76119 + t76121))*t959 - 0.05186*t75742*(t1116*t73971 + t74084*t981) - 0.05186*t75763*(t38490*t74316 + t74496*t981) - 0.05186*t1094*(t74316*t75991 + t38490*(t75818 + t76087 + t1012*t76094) + (t75836 + t75838 - 1.*t64550*t75951 - 1.*t50164*t76094 + t76100 + t76102)*t981) - 0.05186*t1171*(t73971*t76021 + t1116*(t75899 - 1.*t1012*t76094 + t76189) + (t75931 + t75932 + t64550*t75959 + t1155*t76094 + t76200 + t76201)*t981))*var2[4] - 0.5*(-6.e-12*t45284*t535 - 0.05186*(t1150*t75085 + t293*t704*t75165)*t75742 - 0.05186*(t45284*t75178 + t293*t704*t75195)*t75763 - 0.05186*(t45284*t75226 + t1150*t75233)*t75776 - 0.000245*t754*t75790 - 7.35000000006615e-10*t1150*t825 - 6.e-12*t75796*t825 - 0.05186*t1094*(t75178*t75796 + t45284*(4.e-7 + t75754 + t75756 + t75818 + t261*t704*t75822) + t293*t704*(-1.*t12175*t75822 - 1.*t64513*t75834 + t75836 + t75838 - 3.e-6*t75723*t825 - 3.e-6*t535*t919)) - 0.05186*t1171*(t75085*t75790 + t1150*(-4.e-7 + t75708 + t75709 - 1.*t261*t704*t75822 + t75899) + t293*t704*(t754*t75723 + t1109*t75822 + t64513*t75861 + t75931 + t75932 + 3.000000000027e-6*t825*t919)) - 0.05186*(t75233*t75790 + t75226*t75796 + t1150*(t75748 + t75760 + t12175*t75822 + t64513*t75834 + t75849 + t75853) + t45284*(t75724 + t75735 - 1.*t1109*t75822 + t75858 + t75859 - 1.*t64513*t75861))*t959)*var2[5] - 0.5*(-0.10372*t1171*t75742 - 0.10372*t1094*t75763 - 3.6e-17*t535*t825 - 1.47000000001323e-9*t754*t825 - 0.10372*t75776*t959)*var2[14] - 0.5*(-0.005186015558*t75742 - 6.2232e-14*t75763 - 2.0744e-8*t75776)*var2[16]);
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

#include "Ce3_vec15_minitaur.hh"

namespace FrontStance
{

void Ce3_vec15_minitaur_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
