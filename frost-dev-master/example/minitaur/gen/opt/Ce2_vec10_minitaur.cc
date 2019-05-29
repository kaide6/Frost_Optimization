/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:10:34 GMT-04:00
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
  double t4214;
  double t5255;
  double t8853;
  double t12860;
  double t2358;
  double t22030;
  double t23090;
  double t23694;
  double t13206;
  double t27879;
  double t27903;
  double t27908;
  double t27909;
  double t28176;
  double t28178;
  double t27928;
  double t27929;
  double t27946;
  double t27948;
  double t27959;
  double t27961;
  double t27973;
  double t28102;
  double t28161;
  double t28183;
  double t28200;
  double t28205;
  double t28210;
  double t28485;
  double t28486;
  double t28456;
  double t28461;
  double t28463;
  double t28817;
  double t28860;
  double t28866;
  double t28473;
  double t28474;
  double t28476;
  double t28935;
  double t28488;
  double t28578;
  double t28988;
  double t28990;
  double t28964;
  double t28965;
  double t28978;
  double t28982;
  double t28983;
  double t27355;
  double t28924;
  double t28932;
  double t5265;
  double t20158;
  double t22002;
  double t23451;
  double t23872;
  double t23877;
  double t23900;
  double t23918;
  double t25348;
  double t26364;
  double t26513;
  double t28481;
  double t28484;
  double t28590;
  double t28591;
  double t28592;
  double t29250;
  double t29254;
  double t28895;
  double t27953;
  double t28111;
  double t28217;
  double t29047;
  double t29048;
  double t29078;
  double t29106;
  double t29108;
  double t29109;
  double t29117;
  double t27764;
  double t27768;
  double t27771;
  double t27795;
  double t27807;
  double t27808;
  double t27811;
  double t27814;
  double t27828;
  double t27829;
  double t29289;
  double t29290;
  double t29293;
  double t29298;
  double t29303;
  double t29304;
  double t29306;
  double t29307;
  double t29308;
  double t29313;
  double t29318;
  double t29320;
  double t29183;
  double t29190;
  double t29195;
  double t29196;
  double t29205;
  double t29209;
  double t29210;
  double t29221;
  double t29232;
  double t29240;
  double t29245;
  double t29350;
  double t29351;
  double t29353;
  double t29354;
  double t29366;
  double t29367;
  double t29377;
  double t29381;
  double t29382;
  double t29399;
  double t29121;
  double t29172;
  double t29435;
  double t29450;
  double t29451;
  double t29456;
  double t29458;
  double t29472;
  double t29425;
  double t29426;
  double t29427;
  double t28997;
  double t28999;
  double t29032;
  double t29034;
  double t29037;
  double t29369;
  double t29404;
  double t29408;
  double t30025;
  double t30049;
  double t30029;
  double t30037;
  double t30038;
  double t30052;
  double t30053;
  double t30057;
  double t30085;
  double t30088;
  double t30100;
  double t30119;
  double t30121;
  double t30128;
  double t30153;
  double t30154;
  double t30167;
  double t30169;
  double t30171;
  double t30186;
  double t30218;
  double t30228;
  double t30241;
  double t30261;
  double t30269;
  double t30273;
  double t30566;
  double t30578;
  double t30582;
  double t29414;
  double t30492;
  double t30499;
  double t30507;
  double t30607;
  double t30611;
  double t30631;
  double t29590;
  double t30759;
  double t30764;
  double t30774;
  double t29452;
  double t29550;
  double t29559;
  double t30789;
  double t30793;
  double t30799;
  double t30813;
  double t30814;
  double t30822;
  double t29657;
  double t29669;
  double t29707;
  double t29729;
  double t29918;
  double t29943;
  double t30550;
  double t30634;
  double t30636;
  double t29972;
  double t29990;
  double t29995;
  double t30719;
  double t31487;
  double t31506;
  double t31512;
  double t31541;
  double t31559;
  double t31560;
  double t31518;
  double t31524;
  double t31529;
  double t30778;
  double t31677;
  double t31706;
  double t31724;
  double t30878;
  double t31052;
  double t31071;
  double t32136;
  double t32332;
  double t32340;
  double t32363;
  double t32364;
  double t32368;
  double t31097;
  double t31128;
  double t31145;
  double t31150;
  double t31244;
  double t31285;
  double t31515;
  double t31566;
  double t31574;
  double t31340;
  double t31355;
  double t31363;
  double t30350;
  double t30356;
  double t30365;
  double t30430;
  double t30452;
  double t30475;
  double t28323;
  double t28416;
  double t28899;
  double t28908;
  double t28945;
  double t28961;
  double t28985;
  double t28986;
  double t28987;
  double t29118;
  double t29120;
  double t29124;
  double t29178;
  double t29179;
  double t29181;
  double t30319;
  double t30320;
  double t30327;
  double t29261;
  double t29262;
  double t29263;
  double t29271;
  double t29273;
  double t29274;
  double t29279;
  double t29287;
  double t29288;
  double t30377;
  double t30384;
  double t30405;
  double t29329;
  double t29334;
  double t29336;
  double t30348;
  double t30376;
  double t30427;
  double t30479;
  double t30489;
  double t33648;
  double t33652;
  double t33676;
  double t29640;
  double t29662;
  double t29668;
  double t29670;
  double t29672;
  double t29694;
  double t29701;
  double t29725;
  double t29732;
  double t29796;
  double t29937;
  double t29953;
  double t29955;
  double t29959;
  double t29960;
  double t29428;
  double t29478;
  double t29521;
  double t29530;
  double t29537;
  double t29544;
  double t29547;
  double t29557;
  double t29563;
  double t29575;
  double t29577;
  double t29409;
  double t29411;
  double t29413;
  double t29415;
  double t29419;
  double t29422;
  double t29964;
  double t29973;
  double t29977;
  double t29981;
  double t29984;
  double t29986;
  double t29992;
  double t29997;
  double t30001;
  double t30007;
  double t30012;
  double t29581;
  double t29585;
  double t29592;
  double t29596;
  double t29606;
  double t29616;
  double t30168;
  double t30206;
  double t30207;
  double t30117;
  double t30145;
  double t30147;
  double t30253;
  double t30274;
  double t30299;
  double t30045;
  double t30058;
  double t30060;
  double t30688;
  double t30691;
  double t30725;
  double t30744;
  double t30746;
  double t30787;
  double t30810;
  double t30958;
  double t30973;
  double t31012;
  double t31067;
  double t31077;
  double t31079;
  double t31083;
  double t30775;
  double t30776;
  double t30780;
  double t30781;
  double t30782;
  double t31093;
  double t31115;
  double t31117;
  double t31119;
  double t31130;
  double t31134;
  double t31143;
  double t31147;
  double t31208;
  double t31210;
  double t31224;
  double t31279;
  double t31312;
  double t31316;
  double t31325;
  double t31334;
  double t31335;
  double t31350;
  double t31351;
  double t31353;
  double t31360;
  double t31366;
  double t31367;
  double t31372;
  double t31576;
  double t31609;
  double t31613;
  double t31627;
  double t31663;
  double t31666;
  double t31734;
  double t31785;
  double t31794;
  double t31805;
  double t31882;
  double t31894;
  double t31986;
  double t32353;
  double t32378;
  double t32380;
  double t32399;
  double t32418;
  double t32426;
  double t32432;
  double t32439;
  double t32474;
  double t32501;
  double t32517;
  double t32653;
  double t32656;
  double t32696;
  double t32712;
  double t32718;
  double t32752;
  double t32790;
  double t32851;
  double t32861;
  double t32891;
  double t32904;
  double t32910;
  double t32912;
  double t32913;
  double t32931;
  double t32935;
  double t32938;
  double t32940;
  double t32941;
  double t32955;
  double t32969;
  double t33027;
  double t33031;
  double t33035;
  double t33082;
  double t33121;
  double t33131;
  double t33199;
  double t33204;
  double t33214;
  double t33241;
  double t33267;
  double t33271;
  double t30065;
  double t30149;
  double t30213;
  double t30310;
  double t30316;
  double t38226;
  double t38227;
  double t38251;
  double t36758;
  double t36787;
  double t36871;
  double t36924;
  double t37001;
  double t40229;
  double t40230;
  double t40235;
  double t31676;
  double t31901;
  double t32518;
  double t32980;
  double t33339;
  double t33392;
  double t39113;
  double t39114;
  double t39144;
  double t39154;
  double t39157;
  double t39158;
  double t37685;
  double t37694;
  double t37717;
  double t37733;
  double t37766;
  double t37826;
  double t40517;
  double t40525;
  double t40691;
  double t40367;
  double t40381;
  double t40386;
  double t40387;
  double t40433;
  double t40434;
  double t40437;
  double t30757;
  double t30786;
  double t31092;
  double t31326;
  double t31394;
  double t31434;
  double t38939;
  double t38941;
  double t38943;
  double t38948;
  double t38990;
  double t39025;
  double t37577;
  double t37589;
  double t37599;
  double t37606;
  double t37609;
  double t37648;
  double t40453;
  double t40454;
  double t40457;
  double t40458;
  double t40465;
  double t40483;
  double t40494;
  double t40513;
  double t40692;
  double t40695;
  double t40703;
  double t29423;
  double t29580;
  double t29622;
  double t29962;
  double t30014;
  double t30016;
  double t38641;
  double t38649;
  double t38674;
  double t38679;
  double t38767;
  double t38819;
  double t35652;
  double t35912;
  double t36056;
  double t36350;
  double t36478;
  double t36479;
  double t41492;
  double t41493;
  double t41494;
  double t41496;
  double t41497;
  double t41498;
  double t41499;
  double t41500;
  double t41501;
  double t41502;
  double t41503;
  double t40412;
  double t40420;
  double t40425;
  double t40426;
  double t40427;
  double t40428;
  double t40431;
  double t40432;
  double t40438;
  double t40439;
  double t40447;
  double t29045;
  double t29247;
  double t29267;
  double t29323;
  double t29338;
  double t29339;
  double t41570;
  double t41571;
  double t41572;
  double t41573;
  double t41574;
  double t41575;
  double t41576;
  double t41577;
  double t41579;
  double t41580;
  double t41582;
  double t38262;
  double t38274;
  double t38277;
  double t38312;
  double t38444;
  double t38472;
  double t33691;
  double t33782;
  double t34105;
  double t34144;
  double t34152;
  double t34354;
  double t41464;
  double t41465;
  double t41466;
  double t41472;
  double t41473;
  double t41474;
  double t41476;
  double t41483;
  double t41486;
  double t41488;
  double t41489;
  double t39319;
  double t39332;
  double t39432;
  double t39448;
  double t39573;
  double t40218;
  double t40251;
  double t40293;
  double t40390;
  double t40391;
  double t40392;
  double t41618;
  double t41619;
  double t41620;
  double t41621;
  double t26599;
  double t27830;
  double t27841;
  double t41564;
  double t41565;
  double t41567;
  double t41568;
  double t38081;
  double t38135;
  double t38151;
  double t33574;
  double t33592;
  double t33598;
  double t41448;
  double t41449;
  double t41457;
  double t41459;
  double t39194;
  double t39199;
  double t39200;
  double t39311;
  t4214 = Cos(var1[9]);
  t5255 = Cos(var1[7]);
  t8853 = Sin(var1[9]);
  t12860 = Sin(var1[7]);
  t2358 = Sin(var1[4]);
  t22030 = Cos(var1[4]);
  t23090 = Sin(var1[5]);
  t23694 = Cos(var1[5]);
  t13206 = 1.000000000009*t8853*t12860;
  t27879 = -1.*t4214;
  t27903 = 1. + t27879;
  t27908 = -1.000000000009*t27903;
  t27909 = 1. + t27908;
  t28176 = -9.e-12*t27903;
  t28178 = 1. + t28176;
  t27928 = 0.2*t27909;
  t27929 = 0.2000000000048*t27903;
  t27946 = 0.0999997000009*t8853;
  t27948 = t27928 + t27929 + t27946;
  t27959 = 1.2e-12*var1[9];
  t27961 = 0.0999997000009*t27903;
  t27973 = -3.e-12*t8853;
  t28102 = t27959 + t27961 + t27973;
  t28161 = -4.e-7*var1[9];
  t28183 = 0.1*t28178;
  t28200 = 3.000000000027e-7*t27903;
  t28205 = -9.e-18*t8853;
  t28210 = t28161 + t28183 + t28200 + t28205;
  t28485 = 9.e-12*t27903;
  t28486 = t28485 + t27879;
  t28456 = -3.e-6*t28178;
  t28461 = 3.e-6*t27903;
  t28463 = t28456 + t28461;
  t28817 = 0.0999997000009*t4214;
  t28860 = 3.000000000027e-12*t8853;
  t28866 = t28817 + t28860;
  t28473 = -9.e-18*t4214;
  t28474 = 2.999991000027e-7*t8853;
  t28476 = -4.e-7 + t28473 + t28474;
  t28935 = -1.000000000009*t27948*t8853;
  t28488 = -3.e-12*t4214;
  t28578 = 1.2e-12 + t28488 + t27946;
  t28988 = 3.e-6*t4214;
  t28990 = t28461 + t28988;
  t28964 = t4214*t28102;
  t28965 = 3.e-6*t4214*t28210;
  t28978 = t27909*t28866;
  t28982 = 3.e-6*t28476*t8853;
  t28983 = t28578*t8853;
  t27355 = 1.000000000009*t5255*t8853;
  t28924 = -1.*t28486*t28102;
  t28932 = -1.*t28463*t28210;
  t5265 = t4214*t5255;
  t20158 = t5265 + t13206;
  t22002 = t2358*t20158;
  t23451 = -3.e-6*t4214*t23090;
  t23872 = -1.000000000009*t5255*t8853;
  t23877 = t4214*t12860;
  t23900 = t23872 + t23877;
  t23918 = t23694*t23900;
  t25348 = t23451 + t23918;
  t26364 = t22030*t25348;
  t26513 = t22002 + t26364;
  t28481 = -1.*t28463*t28476;
  t28484 = -1.000000000009*t4214*t27948;
  t28590 = -1.*t28486*t28578;
  t28591 = -1.000000000009*t28102*t8853;
  t28592 = -3.000000000027e-6*t28210*t8853;
  t29250 = -1.*t28990*t28102;
  t29254 = t28161 + t28183 + t28200 + t29250 + t28205;
  t28895 = -1.000000000009*t28866*t8853;
  t27953 = t27909*t27948;
  t28111 = t28102*t8853;
  t28217 = 3.e-6*t28210*t8853;
  t29047 = 4.e-7*var1[9];
  t29048 = -1. + t28485;
  t29078 = 0.1*t29048;
  t29106 = -3.000000000027e-7*t27903;
  t29108 = t28990*t28102;
  t29109 = 9.e-18*t8853;
  t29117 = t29047 + t29078 + t29106 + t29108 + t29109;
  t27764 = -1.000000000009*t4214*t12860;
  t27768 = t27355 + t27764;
  t27771 = t2358*t27768;
  t27795 = -3.000000000027e-6*t8853*t23090;
  t27807 = 1.000000000009*t4214*t5255;
  t27808 = t27807 + t13206;
  t27811 = t23694*t27808;
  t27814 = t27795 + t27811;
  t27828 = t22030*t27814;
  t27829 = t27771 + t27828;
  t29289 = t5255*t8853;
  t29290 = -1.*t27909*t12860;
  t29293 = t29289 + t29290;
  t29298 = t2358*t29293;
  t29303 = -3.e-6*t8853*t23090;
  t29304 = t27909*t5255;
  t29306 = t8853*t12860;
  t29307 = t29304 + t29306;
  t29308 = t23694*t29307;
  t29313 = t29303 + t29308;
  t29318 = t22030*t29313;
  t29320 = t29298 + t29318;
  t29183 = t28486*t5255;
  t29190 = -1.000000000009*t8853*t12860;
  t29195 = t29183 + t29190;
  t29196 = t2358*t29195;
  t29205 = -1.*t28463*t23090;
  t29209 = t28486*t12860;
  t29210 = t27355 + t29209;
  t29221 = t23694*t29210;
  t29232 = t29205 + t29221;
  t29240 = t22030*t29232;
  t29245 = t29196 + t29240;
  t29350 = -1.*t5255;
  t29351 = 1. + t29350;
  t29353 = 0.2*t29351;
  t29354 = t5255*t27948;
  t29366 = t28102*t12860;
  t29367 = t29353 + t29354 + t29366;
  t29377 = t5255*t28102;
  t29381 = 0.2*t12860;
  t29382 = -1.*t27948*t12860;
  t29399 = t29377 + t29381 + t29382;
  t29121 = 9.e-18*t4214;
  t29172 = -2.999991000027e-7*t8853;
  t29435 = t5255*t28578;
  t29450 = -1.*t28866*t12860;
  t29451 = t29435 + t29450;
  t29456 = t5255*t28866;
  t29458 = t28578*t12860;
  t29472 = t29456 + t29458;
  t29425 = t28990*t12860*t29367;
  t29426 = t28990*t5255*t29399;
  t29427 = t29047 + t29078 + t29106 + t29109 + t29425 + t29426;
  t28997 = t28990*t5255*t2358;
  t28999 = t28990*t23694*t12860;
  t29032 = t23090 + t28999;
  t29034 = t22030*t29032;
  t29037 = t28997 + t29034;
  t29369 = -1.*t28990*t12860*t29367;
  t29404 = -1.*t28990*t5255*t29399;
  t29408 = t28161 + t28183 + t28200 + t28205 + t29369 + t29404;
  t30025 = Sin(var1[3]);
  t30049 = Cos(var1[3]);
  t30029 = t28463*t23694;
  t30037 = t23090*t29210;
  t30038 = t30029 + t30037;
  t30052 = t22030*t29195;
  t30053 = -1.*t2358*t29232;
  t30057 = t30052 + t30053;
  t30085 = 3.e-6*t4214*t23694;
  t30088 = t23090*t23900;
  t30100 = t30085 + t30088;
  t30119 = t22030*t20158;
  t30121 = -1.*t2358*t25348;
  t30128 = t30119 + t30121;
  t30153 = 3.e-6*t23694*t8853;
  t30154 = t23090*t29307;
  t30167 = t30153 + t30154;
  t30169 = t22030*t29293;
  t30171 = -1.*t2358*t29313;
  t30186 = t30169 + t30171;
  t30218 = 3.000000000027e-6*t23694*t8853;
  t30228 = t23090*t27808;
  t30241 = t30218 + t30228;
  t30261 = t22030*t27768;
  t30269 = -1.*t2358*t27814;
  t30273 = t30261 + t30269;
  t30566 = -1.*t23694;
  t30578 = t28990*t23090*t12860;
  t30582 = t30566 + t30578;
  t29414 = t29399*t29195;
  t30492 = -1.*t28210*t23090;
  t30499 = t23694*t29367;
  t30507 = t30492 + t30499;
  t30607 = t23694*t28210;
  t30611 = t23090*t29367;
  t30631 = t30607 + t30611;
  t29590 = -1.*t29293*t29399;
  t30759 = t29032*t30507;
  t30764 = t30582*t30631;
  t30774 = t29426 + t30759 + t30764;
  t29452 = t28990*t5255*t29451;
  t29550 = -1.*t29293*t29451;
  t29559 = -1.*t29399*t20158;
  t30789 = -1.*t28476*t23090;
  t30793 = t23694*t29472;
  t30799 = t30789 + t30793;
  t30813 = t23694*t28476;
  t30814 = t23090*t29472;
  t30822 = t30813 + t30814;
  t29657 = -1.*t29399*t29195;
  t29669 = t29293*t29399;
  t29707 = t29293*t29451;
  t29729 = t29399*t20158;
  t29918 = -1.*t27768*t29399;
  t29943 = -1.*t29451*t29195;
  t30550 = -1.*t29032*t30507;
  t30634 = -1.*t30582*t30631;
  t30636 = t29404 + t30550 + t30634;
  t29972 = -1.*t28990*t5255*t29451;
  t29990 = t27768*t29399;
  t29995 = t29451*t29195;
  t30719 = t30038*t30631;
  t31487 = t2358*t29399;
  t31506 = t22030*t30507;
  t31512 = t31487 + t31506;
  t31541 = t22030*t29399;
  t31559 = -1.*t2358*t30507;
  t31560 = t31541 + t31559;
  t31518 = t28990*t22030*t5255;
  t31524 = -1.*t2358*t29032;
  t31529 = t31518 + t31524;
  t30778 = -1.*t30631*t30167;
  t31677 = t29037*t31512;
  t31706 = t31529*t31560;
  t31724 = t30764 + t31677 + t31706;
  t30878 = t30582*t30822;
  t31052 = -1.*t30100*t30631;
  t31071 = -1.*t30822*t30167;
  t32136 = t2358*t29451;
  t32332 = t22030*t30799;
  t32340 = t32136 + t32332;
  t32363 = t22030*t29451;
  t32364 = -1.*t2358*t30799;
  t32368 = t32363 + t32364;
  t31097 = -1.*t30038*t30631;
  t31128 = t30631*t30167;
  t31145 = t30100*t30631;
  t31150 = t30822*t30167;
  t31244 = -1.*t30038*t30822;
  t31285 = -1.*t30631*t30241;
  t31515 = -1.*t29037*t31512;
  t31566 = -1.*t31529*t31560;
  t31574 = t30634 + t31515 + t31566;
  t31340 = -1.*t30582*t30822;
  t31355 = t30038*t30822;
  t31363 = t30631*t30241;
  t30350 = t30049*t30100;
  t30356 = -1.*t30025*t30128;
  t30365 = t30350 + t30356;
  t30430 = t30049*t30241;
  t30452 = -1.*t30025*t30273;
  t30475 = t30430 + t30452;
  t28323 = t27953 + t28111 + t28217;
  t28416 = 3.000000000027e-6*t8853*t28323;
  t28899 = t28481 + t28484 + t28590 + t28591 + t28592 + t28895;
  t28908 = 3.e-6*t8853*t28899;
  t28945 = t28924 + t28932 + t28935;
  t28961 = 3.e-6*t4214*t28945;
  t28985 = t28964 + t28965 + t28978 + t28982 + t28935 + t28983;
  t28986 = t28463*t28985;
  t28987 = t28416 + t28908 + t28961 + t28986;
  t29118 = 3.e-6*t4214*t29117;
  t29120 = 0.2000000000018*t8853;
  t29124 = t28990*t28578;
  t29178 = 4.e-7 + t29121 + t29124 + t29172;
  t29179 = 3.e-6*t29178*t8853;
  t29181 = t28964 + t28965 + t29118 + t28978 + t29120 + t29179 + t28982 + t28935 + t28983;
  t30319 = t30049*t30038;
  t30320 = -1.*t30025*t30057;
  t30327 = t30319 + t30320;
  t29261 = t28463*t29254;
  t29262 = 0.2*t8853;
  t29263 = t28924 + t28932 + t29261 + t29262 + t28935;
  t29271 = 0.2*t4214;
  t29273 = -1.*t28990*t28578;
  t29274 = -4.e-7 + t28473 + t29273 + t28474;
  t29279 = t28463*t29274;
  t29287 = 3.000000000027e-6*t29254*t8853;
  t29288 = t29271 + t28481 + t29279 + t28484 + t28590 + t28591 + t28592 + t29287 + t28895;
  t30377 = t30049*t30167;
  t30384 = -1.*t30025*t30186;
  t30405 = t30377 + t30384;
  t29329 = 0.2*t28486;
  t29334 = 3.e-6*t29117*t8853;
  t29336 = t29329 + t27953 + t28111 + t28217 + t29334;
  t30348 = 0.043*t27829*t30327;
  t30376 = 0.043*t29320*t30365;
  t30427 = 0.043*t26513*t30405;
  t30479 = 0.043*t29245*t30475;
  t30489 = t30348 + t30376 + t30427 + t30479;
  t33648 = t30049*t30582;
  t33652 = -1.*t30025*t31529;
  t33676 = t33648 + t33652;
  t29640 = -1.*t29210*t29367;
  t29662 = t28932 + t29640 + t29657;
  t29668 = t20158*t29662;
  t29670 = t29367*t29307;
  t29672 = t28217 + t29669 + t29670;
  t29694 = t27768*t29672;
  t29701 = t23900*t29367;
  t29725 = t29472*t29307;
  t29732 = t28965 + t28982 + t29701 + t29707 + t29725 + t29729;
  t29796 = t29195*t29732;
  t29937 = -1.*t29210*t29472;
  t29953 = -1.*t29367*t27808;
  t29955 = t28481 + t28592 + t29918 + t29937 + t29943 + t29953;
  t29959 = t29293*t29955;
  t29960 = t29668 + t29694 + t29796 + t29959;
  t29428 = t20158*t29427;
  t29478 = t28990*t12860*t29472;
  t29521 = 4.e-7 + t29121 + t29172 + t29452 + t29478;
  t29530 = t29293*t29521;
  t29537 = -3.e-6*t4214*t28210;
  t29544 = -3.e-6*t28476*t8853;
  t29547 = -1.*t23900*t29367;
  t29557 = -1.*t29472*t29307;
  t29563 = t29537 + t29544 + t29547 + t29550 + t29557 + t29559;
  t29575 = t28990*t5255*t29563;
  t29577 = t29428 + t29530 + t29575;
  t29409 = t29195*t29408;
  t29411 = t28463*t28210;
  t29413 = t29210*t29367;
  t29415 = t29411 + t29413 + t29414;
  t29419 = t28990*t5255*t29415;
  t29422 = t29409 + t29419;
  t29964 = t27768*t29408;
  t29973 = -1.*t28990*t12860*t29472;
  t29977 = -4.e-7 + t28473 + t28474 + t29972 + t29973;
  t29981 = t29195*t29977;
  t29984 = t28463*t28476;
  t29986 = 3.000000000027e-6*t28210*t8853;
  t29992 = t29210*t29472;
  t29997 = t29367*t27808;
  t30001 = t29984 + t29986 + t29990 + t29992 + t29995 + t29997;
  t30007 = t28990*t5255*t30001;
  t30012 = t29964 + t29981 + t30007;
  t29581 = t29293*t29427;
  t29585 = -3.e-6*t28210*t8853;
  t29592 = -1.*t29367*t29307;
  t29596 = t29585 + t29590 + t29592;
  t29606 = t28990*t5255*t29596;
  t29616 = t29581 + t29606;
  t30168 = t30025*t30167;
  t30206 = t30049*t30186;
  t30207 = t30168 + t30206;
  t30117 = t30025*t30100;
  t30145 = t30049*t30128;
  t30147 = t30117 + t30145;
  t30253 = t30025*t30241;
  t30274 = t30049*t30273;
  t30299 = t30253 + t30274;
  t30045 = t30025*t30038;
  t30058 = t30049*t30057;
  t30060 = t30045 + t30058;
  t30688 = t30038*t30636;
  t30691 = t29232*t30507;
  t30725 = t29414 + t30691 + t30719;
  t30744 = t30582*t30725;
  t30746 = t30688 + t30744;
  t30787 = t30100*t30774;
  t30810 = t29032*t30799;
  t30958 = t29452 + t30810 + t30878;
  t30973 = t30167*t30958;
  t31012 = -1.*t25348*t30507;
  t31067 = -1.*t30799*t29313;
  t31077 = t29550 + t29559 + t31012 + t31052 + t31067 + t31071;
  t31079 = t30582*t31077;
  t31083 = t30787 + t30973 + t31079;
  t30775 = t30167*t30774;
  t30776 = -1.*t30507*t29313;
  t30780 = t29590 + t30776 + t30778;
  t30781 = t30582*t30780;
  t30782 = t30775 + t30781;
  t31093 = -1.*t29232*t30507;
  t31115 = t29657 + t31093 + t31097;
  t31117 = t30100*t31115;
  t31119 = t30507*t29313;
  t31130 = t29669 + t31119 + t31128;
  t31134 = t30241*t31130;
  t31143 = t25348*t30507;
  t31147 = t30799*t29313;
  t31208 = t29707 + t29729 + t31143 + t31145 + t31147 + t31150;
  t31210 = t30038*t31208;
  t31224 = -1.*t29232*t30799;
  t31279 = -1.*t30507*t27814;
  t31312 = t29918 + t29943 + t31224 + t31244 + t31279 + t31285;
  t31316 = t30167*t31312;
  t31325 = t31117 + t31134 + t31210 + t31316;
  t31334 = t30241*t30636;
  t31335 = -1.*t29032*t30799;
  t31350 = t29972 + t31335 + t31340;
  t31351 = t30038*t31350;
  t31353 = t29232*t30799;
  t31360 = t30507*t27814;
  t31366 = t29990 + t29995 + t31353 + t31355 + t31360 + t31363;
  t31367 = t30582*t31366;
  t31372 = t31334 + t31351 + t31367;
  t31576 = t29245*t31574;
  t31609 = t29245*t31512;
  t31613 = t30057*t31560;
  t31627 = t30719 + t31609 + t31613;
  t31663 = t29037*t31627;
  t31666 = t31576 + t31663;
  t31734 = t29320*t31724;
  t31785 = -1.*t31512*t29320;
  t31794 = -1.*t31560*t30186;
  t31805 = t30778 + t31785 + t31794;
  t31882 = t29037*t31805;
  t31894 = t31734 + t31882;
  t31986 = t26513*t31724;
  t32353 = t29037*t32340;
  t32378 = t31529*t32368;
  t32380 = t30878 + t32353 + t32378;
  t32399 = t29320*t32380;
  t32418 = -1.*t26513*t31512;
  t32426 = -1.*t30128*t31560;
  t32432 = -1.*t32340*t29320;
  t32439 = -1.*t32368*t30186;
  t32474 = t31052 + t31071 + t32418 + t32426 + t32432 + t32439;
  t32501 = t29037*t32474;
  t32517 = t31986 + t32399 + t32501;
  t32653 = -1.*t29245*t31512;
  t32656 = -1.*t30057*t31560;
  t32696 = t31097 + t32653 + t32656;
  t32712 = t26513*t32696;
  t32718 = t31512*t29320;
  t32752 = t31560*t30186;
  t32790 = t31128 + t32718 + t32752;
  t32851 = t27829*t32790;
  t32861 = t26513*t31512;
  t32891 = t30128*t31560;
  t32904 = t32340*t29320;
  t32910 = t32368*t30186;
  t32912 = t31145 + t31150 + t32861 + t32891 + t32904 + t32910;
  t32913 = t29245*t32912;
  t32931 = -1.*t29245*t32340;
  t32935 = -1.*t30057*t32368;
  t32938 = -1.*t31512*t27829;
  t32940 = -1.*t31560*t30273;
  t32941 = t31244 + t31285 + t32931 + t32935 + t32938 + t32940;
  t32955 = t29320*t32941;
  t32969 = t32712 + t32851 + t32913 + t32955;
  t33027 = t27829*t31574;
  t33031 = -1.*t29037*t32340;
  t33035 = -1.*t31529*t32368;
  t33082 = t31340 + t33031 + t33035;
  t33121 = t29245*t33082;
  t33131 = t29245*t32340;
  t33199 = t30057*t32368;
  t33204 = t31512*t27829;
  t33214 = t31560*t30273;
  t33241 = t31355 + t31363 + t33131 + t33199 + t33204 + t33214;
  t33267 = t29037*t33241;
  t33271 = t33027 + t33121 + t33267;
  t30065 = 0.043*t27829*t30060;
  t30149 = 0.043*t29320*t30147;
  t30213 = 0.043*t26513*t30207;
  t30310 = 0.043*t29245*t30299;
  t30316 = t30065 + t30149 + t30213 + t30310;
  t38226 = t30025*t30582;
  t38227 = t30049*t31529;
  t38251 = t38226 + t38227;
  t36758 = 0.043*t30365*t30207;
  t36787 = 0.043*t30147*t30405;
  t36871 = 0.043*t30327*t30299;
  t36924 = 0.043*t30060*t30475;
  t37001 = t36758 + t36787 + t36871 + t36924;
  t40229 = t29320*t32696;
  t40230 = t29245*t32790;
  t40235 = t40229 + t40230;
  t31676 = 0.043*t26513*t31666;
  t31901 = 0.043*t27829*t31894;
  t32518 = 0.043*t29245*t32517;
  t32980 = 0.043*t29037*t32969;
  t33339 = 0.043*t29320*t33271;
  t33392 = t31676 + t31901 + t32518 + t32980 + t33339;
  t39113 = 0.043*t30147*t31666;
  t39114 = 0.043*t30299*t31894;
  t39144 = 0.043*t30060*t32517;
  t39154 = 0.043*t38251*t32969;
  t39157 = 0.043*t30207*t33271;
  t39158 = t39113 + t39114 + t39144 + t39154 + t39157;
  t37685 = 0.043*t30365*t31666;
  t37694 = 0.043*t30475*t31894;
  t37717 = 0.043*t30327*t32517;
  t37733 = 0.043*t33676*t32969;
  t37766 = 0.043*t30405*t33271;
  t37826 = t37685 + t37694 + t37717 + t37733 + t37766;
  t40517 = t30167*t31115;
  t40525 = t30038*t31130;
  t40691 = t40517 + t40525;
  t40367 = 0.2*t28990;
  t40381 = t28463*t28323;
  t40386 = 3.e-6*t8853*t28945;
  t40387 = t40367 + t40381 + t40386;
  t40433 = t29293*t29662;
  t40434 = t29195*t29672;
  t40437 = t40433 + t40434;
  t30757 = 0.043*t26513*t30746;
  t30786 = 0.043*t27829*t30782;
  t31092 = 0.043*t29245*t31083;
  t31326 = 0.043*t29037*t31325;
  t31394 = 0.043*t29320*t31372;
  t31434 = t30757 + t30786 + t31092 + t31326 + t31394;
  t38939 = 0.043*t30147*t30746;
  t38941 = 0.043*t30060*t31083;
  t38943 = 0.043*t30782*t30299;
  t38948 = 0.043*t38251*t31325;
  t38990 = 0.043*t30207*t31372;
  t39025 = t38939 + t38941 + t38943 + t38948 + t38990;
  t37577 = 0.043*t30365*t30746;
  t37589 = 0.043*t30327*t31083;
  t37599 = 0.043*t30782*t30475;
  t37606 = 0.043*t33676*t31325;
  t37609 = 0.043*t30405*t31372;
  t37648 = t37577 + t37589 + t37599 + t37606 + t37609;
  t40453 = 0.000271*t30241*t29245;
  t40454 = 2.e-6*t30167*t26513;
  t40457 = 2.e-6*t30100*t29320;
  t40458 = 0.000271*t30038*t27829;
  t40465 = 0.043*t31372*t31666;
  t40483 = 0.043*t31083*t31894;
  t40494 = 0.043*t31325*t40235;
  t40513 = 0.043*t30782*t32517;
  t40692 = 0.043*t40691*t32969;
  t40695 = 0.043*t30746*t33271;
  t40703 = t40453 + t40454 + t40457 + t40458 + t40465 + t40483 + t40494 + t40513 + t40692 + t40695;
  t29423 = 0.043*t26513*t29422;
  t29580 = 0.043*t29245*t29577;
  t29622 = 0.043*t29616*t27829;
  t29962 = 0.043*t29037*t29960;
  t30014 = 0.043*t29320*t30012;
  t30016 = t29423 + t29580 + t29622 + t29962 + t30014;
  t38641 = 0.043*t38251*t29960;
  t38649 = 0.043*t29577*t30060;
  t38674 = 0.043*t29422*t30147;
  t38679 = 0.043*t30012*t30207;
  t38767 = 0.043*t29616*t30299;
  t38819 = t38641 + t38649 + t38674 + t38679 + t38767;
  t35652 = 0.043*t33676*t29960;
  t35912 = 0.043*t29577*t30327;
  t36056 = 0.043*t29422*t30365;
  t36350 = 0.043*t30012*t30405;
  t36478 = 0.043*t29616*t30475;
  t36479 = t35652 + t35912 + t36056 + t36350 + t36478;
  t41492 = 0.000271*t27768*t30038;
  t41493 = 2.e-6*t29293*t30100;
  t41494 = 2.e-6*t20158*t30167;
  t41496 = 0.000271*t29195*t30241;
  t41497 = 0.043*t30012*t30746;
  t41498 = 0.043*t29577*t30782;
  t41499 = 0.043*t29960*t40691;
  t41500 = 0.043*t29616*t31083;
  t41501 = 0.043*t40437*t31325;
  t41502 = 0.043*t29422*t31372;
  t41503 = t41492 + t41493 + t41494 + t41496 + t41497 + t41498 + t41499 + t41500 + t41501 + t41502;
  t40412 = 0.000271*t27768*t29245;
  t40420 = 2.e-6*t29293*t26513;
  t40425 = 2.e-6*t20158*t29320;
  t40426 = 0.000271*t29195*t27829;
  t40427 = 0.043*t30012*t31666;
  t40428 = 0.043*t29577*t31894;
  t40431 = 0.043*t29960*t40235;
  t40432 = 0.043*t29616*t32517;
  t40438 = 0.043*t40437*t32969;
  t40439 = 0.043*t29422*t33271;
  t40447 = t40412 + t40420 + t40425 + t40426 + t40427 + t40428 + t40431 + t40432 + t40438 + t40439;
  t29045 = 0.043*t28987*t29037;
  t29247 = 0.043*t29181*t29245;
  t29267 = 0.043*t29263*t26513;
  t29323 = 0.043*t29288*t29320;
  t29338 = 0.043*t29336*t27829;
  t29339 = t29045 + t29247 + t29267 + t29323 + t29338;
  t41570 = 6.e-12*t4214*t29293;
  t41571 = 0.000271*t28463*t27768;
  t41572 = 8.13000000007317e-10*t8853*t29195;
  t41573 = 6.e-12*t8853*t20158;
  t41574 = 0.043*t29288*t29422;
  t41575 = 0.043*t29181*t29616;
  t41576 = 0.043*t28987*t40437;
  t41577 = 0.043*t29336*t29577;
  t41579 = 0.043*t40387*t29960;
  t41580 = 0.043*t29263*t30012;
  t41582 = t41570 + t41571 + t41572 + t41573 + t41574 + t41575 + t41576 + t41577 + t41579 + t41580;
  t38262 = 0.043*t28987*t38251;
  t38274 = 0.043*t29181*t30060;
  t38277 = 0.043*t29263*t30147;
  t38312 = 0.043*t29288*t30207;
  t38444 = 0.043*t29336*t30299;
  t38472 = t38262 + t38274 + t38277 + t38312 + t38444;
  t33691 = 0.043*t28987*t33676;
  t33782 = 0.043*t29181*t30327;
  t34105 = 0.043*t29263*t30365;
  t34144 = 0.043*t29288*t30405;
  t34152 = 0.043*t29336*t30475;
  t34354 = t33691 + t33782 + t34105 + t34144 + t34152;
  t41464 = 8.13000000007317e-10*t8853*t30038;
  t41465 = 6.e-12*t8853*t30100;
  t41466 = 6.e-12*t4214*t30167;
  t41472 = 0.000271*t28463*t30241;
  t41473 = 0.043*t29288*t30746;
  t41474 = 0.043*t29181*t30782;
  t41476 = 0.043*t28987*t40691;
  t41483 = 0.043*t29336*t31083;
  t41486 = 0.043*t40387*t31325;
  t41488 = 0.043*t29263*t31372;
  t41489 = t41464 + t41465 + t41466 + t41472 + t41473 + t41474 + t41476 + t41483 + t41486 + t41488;
  t39319 = 8.13000000007317e-10*t8853*t29245;
  t39332 = 6.e-12*t8853*t26513;
  t39432 = 6.e-12*t4214*t29320;
  t39448 = 0.000271*t28463*t27829;
  t39573 = 0.043*t29288*t31666;
  t40218 = 0.043*t29181*t31894;
  t40251 = 0.043*t28987*t40235;
  t40293 = 0.043*t29336*t32517;
  t40390 = 0.043*t40387*t32969;
  t40391 = 0.043*t29263*t33271;
  t40392 = t39319 + t39332 + t39432 + t39448 + t39573 + t40218 + t40251 + t40293 + t40390 + t40391;
  t41618 = 0.0042999871*t29288;
  t41619 = 5.16e-14*t29181;
  t41620 = 1.72e-8*t28987;
  t41621 = t41618 + t41619 + t41620;
  t26599 = 0.0042999871*t26513;
  t27830 = 5.16e-14*t27829;
  t27841 = t26599 + t27830;
  t41564 = 5.16e-14*t29577;
  t41565 = 1.72e-8*t29960;
  t41567 = 0.0042999871*t30012;
  t41568 = t41564 + t41565 + t41567;
  t38081 = 0.0042999871*t30147;
  t38135 = 5.16e-14*t30299;
  t38151 = t38081 + t38135;
  t33574 = 0.0042999871*t30365;
  t33592 = 5.16e-14*t30475;
  t33598 = t33574 + t33592;
  t41448 = 5.16e-14*t31083;
  t41449 = 1.72e-8*t31325;
  t41457 = 0.0042999871*t31372;
  t41459 = t41448 + t41449 + t41457;
  t39194 = 5.16e-14*t32517;
  t39199 = 1.72e-8*t32969;
  t39200 = 0.0042999871*t33271;
  t39311 = t39194 + t39199 + t39200;
  p_output1[0]=var2[9]*(-0.5*(0.086*t27829*t29245 + 0.086*t26513*t29320)*var2[0] - 0.5*t30489*var2[1] - 0.5*t30316*var2[2] - 0.5*t33392*var2[3] - 0.5*t31434*var2[4] - 0.5*t30016*var2[5] - 0.5*t29339*var2[7] - 0.5*t27841*var2[9]);
  p_output1[1]=var2[9]*(-0.5*t30489*var2[0] - 0.5*(0.086*t30365*t30405 + 0.086*t30327*t30475)*var2[1] - 0.5*t37001*var2[2] - 0.5*t37826*var2[3] - 0.5*t37648*var2[4] - 0.5*t36479*var2[5] - 0.5*t34354*var2[7] - 0.5*t33598*var2[9]);
  p_output1[2]=var2[9]*(-0.5*t30316*var2[0] - 0.5*t37001*var2[1] - 0.5*(0.086*t30147*t30207 + 0.086*t30060*t30299)*var2[2] - 0.5*t39158*var2[3] - 0.5*t39025*var2[4] - 0.5*t38819*var2[5] - 0.5*t38472*var2[7] - 0.5*t38151*var2[9]);
  p_output1[3]=var2[9]*(-0.5*t33392*var2[0] - 0.5*t37826*var2[1] - 0.5*t39158*var2[2] - 0.5*(0.000542*t27829*t29245 + 4.e-6*t26513*t29320 + 0.086*t31894*t32517 + 0.086*t31666*t33271 + 0.086*t32969*t40235)*var2[3] - 0.5*t40703*var2[4] - 0.5*t40447*var2[5] - 0.5*t40392*var2[7] - 0.5*t39311*var2[9]);
  p_output1[4]=var2[9]*(-0.5*t31434*var2[0] - 0.5*t37648*var2[1] - 0.5*t39025*var2[2] - 0.5*t40703*var2[3] - 0.5*(4.e-6*t30100*t30167 + 0.000542*t30038*t30241 + 0.086*t30782*t31083 + 0.086*t30746*t31372 + 0.086*t31325*t40691)*var2[4] - 0.5*t41503*var2[5] - 0.5*t41489*var2[7] - 0.5*t41459*var2[9]);
  p_output1[5]=var2[9]*(-0.5*t30016*var2[0] - 0.5*t36479*var2[1] - 0.5*t38819*var2[2] - 0.5*t40447*var2[3] - 0.5*t41503*var2[4] - 0.5*(0.000542*t27768*t29195 + 4.e-6*t20158*t29293 + 0.086*t29577*t29616 + 0.086*t29422*t30012 + 0.086*t29960*t40437)*var2[5] - 0.5*t41582*var2[7] - 0.5*t41568*var2[9]);
  p_output1[6]=0;
  p_output1[7]=var2[9]*(-0.5*t29339*var2[0] - 0.5*t34354*var2[1] - 0.5*t38472*var2[2] - 0.5*t40392*var2[3] - 0.5*t41489*var2[4] - 0.5*t41582*var2[5] - 0.5*(0.086*t29263*t29288 + 0.086*t29181*t29336 + 0.086*t28987*t40387 + 1.62600000001463e-9*t28463*t8853 + 3.6e-17*t4214*t8853)*var2[7] - 0.5*t41621*var2[9]);
  p_output1[8]=0;
  p_output1[9]=(-0.5*t27841*var2[0] - 0.5*t33598*var2[1] - 0.5*t38151*var2[2] - 0.5*t39311*var2[3] - 0.5*t41459*var2[4] - 0.5*t41568*var2[5] - 0.5*t41621*var2[7])*var2[9];
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

#include "Ce2_vec10_minitaur.hh"

namespace FrontStance
{

void Ce2_vec10_minitaur_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
