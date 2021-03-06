/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) f110_kinematic_model_expl_ode_hess_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_s5 CASADI_PREFIX(s5)
#define casadi_s6 CASADI_PREFIX(s6)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[11] = {7, 1, 0, 7, 0, 1, 2, 3, 4, 5, 6};
static const casadi_int casadi_s1[59] = {7, 7, 0, 7, 14, 21, 28, 35, 42, 49, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6};
static const casadi_int casadi_s2[27] = {7, 3, 0, 7, 14, 21, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6};
static const casadi_int casadi_s3[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s4[16] = {12, 1, 0, 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
static const casadi_int casadi_s5[14] = {10, 1, 0, 10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
static const casadi_int casadi_s6[59] = {55, 1, 0, 55, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54};

/* f110_kinematic_model_expl_ode_hess:(i0[7],i1[7x7],i2[7x3],i3[7],i4[3],i5[12])->(o0[10],o1[55]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a5, a6, a7, a8, a9;
  a0=0.;
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a0;
  a1=arg[0]? arg[0][2] : 0;
  a2=cos(a1);
  a3=arg[0]? arg[0][3] : 0;
  a4=arg[3]? arg[3][1] : 0;
  a5=(a3*a4);
  a6=(a2*a5);
  a7=sin(a1);
  a8=arg[3]? arg[3][0] : 0;
  a9=(a3*a8);
  a10=(a7*a9);
  a6=(a6-a10);
  if (res[0]!=0) res[0][2]=a6;
  a6=1.5873015873015873e+01;
  a10=arg[0]? arg[0][6] : 0;
  a11=tan(a10);
  a12=arg[3]? arg[3][2] : 0;
  a11=(a11*a12);
  a11=(a6*a11);
  a13=sin(a1);
  a13=(a13*a4);
  a11=(a11+a13);
  a13=cos(a1);
  a13=(a13*a8);
  a11=(a11+a13);
  if (res[0]!=0) res[0][3]=a11;
  if (res[0]!=0) res[0][4]=a0;
  a0=arg[3]? arg[3][3] : 0;
  if (res[0]!=0) res[0][5]=a0;
  a0=6.3000000000000000e-02;
  a3=(a3/a0);
  a3=(a3*a12);
  a0=cos(a10);
  a11=casadi_sq(a0);
  a3=(a3/a11);
  if (res[0]!=0) res[0][6]=a3;
  a13=arg[3]? arg[3][5] : 0;
  if (res[0]!=0) res[0][7]=a13;
  a13=arg[3]? arg[3][6] : 0;
  if (res[0]!=0) res[0][8]=a13;
  a13=arg[3]? arg[3][4] : 0;
  if (res[0]!=0) res[0][9]=a13;
  a13=arg[1]? arg[1][2] : 0;
  a14=arg[1]? arg[1][3] : 0;
  a15=(a4*a14);
  a15=(a2*a15);
  a16=sin(a1);
  a17=(a16*a13);
  a17=(a5*a17);
  a15=(a15-a17);
  a17=cos(a1);
  a18=(a17*a13);
  a18=(a9*a18);
  a19=(a8*a14);
  a19=(a7*a19);
  a18=(a18+a19);
  a15=(a15-a18);
  a18=(a13*a15);
  a19=arg[1]? arg[1][6] : 0;
  a20=cos(a10);
  a20=casadi_sq(a20);
  a21=(a19/a20);
  a21=(a12*a21);
  a21=(a6*a21);
  a22=cos(a1);
  a23=(a22*a13);
  a23=(a4*a23);
  a21=(a21+a23);
  a1=sin(a1);
  a13=(a1*a13);
  a13=(a8*a13);
  a21=(a21-a13);
  a13=(a14*a21);
  a18=(a18+a13);
  a14=(a6*a14);
  a14=(a12*a14);
  a14=(a14/a11);
  a3=(a3/a11);
  a0=(a0+a0);
  a10=sin(a10);
  a13=(a10*a19);
  a13=(a0*a13);
  a13=(a3*a13);
  a14=(a14+a13);
  a19=(a19*a14);
  a18=(a18+a19);
  if (res[1]!=0) res[1][0]=a18;
  a18=arg[1]? arg[1][9] : 0;
  a19=(a18*a15);
  a13=arg[1]? arg[1][10] : 0;
  a23=(a13*a21);
  a19=(a19+a23);
  a23=arg[1]? arg[1][13] : 0;
  a24=(a23*a14);
  a19=(a19+a24);
  if (res[1]!=0) res[1][1]=a19;
  a19=arg[1]? arg[1][16] : 0;
  a24=(a19*a15);
  a25=arg[1]? arg[1][17] : 0;
  a26=(a25*a21);
  a24=(a24+a26);
  a26=arg[1]? arg[1][20] : 0;
  a27=(a26*a14);
  a24=(a24+a27);
  if (res[1]!=0) res[1][2]=a24;
  a24=arg[1]? arg[1][23] : 0;
  a27=(a24*a15);
  a28=arg[1]? arg[1][24] : 0;
  a29=(a28*a21);
  a27=(a27+a29);
  a29=arg[1]? arg[1][27] : 0;
  a30=(a29*a14);
  a27=(a27+a30);
  if (res[1]!=0) res[1][3]=a27;
  a27=arg[1]? arg[1][30] : 0;
  a30=(a27*a15);
  a31=arg[1]? arg[1][31] : 0;
  a32=(a31*a21);
  a30=(a30+a32);
  a32=arg[1]? arg[1][34] : 0;
  a33=(a32*a14);
  a30=(a30+a33);
  if (res[1]!=0) res[1][4]=a30;
  a30=arg[1]? arg[1][37] : 0;
  a33=(a30*a15);
  a34=arg[1]? arg[1][38] : 0;
  a35=(a34*a21);
  a33=(a33+a35);
  a35=arg[1]? arg[1][41] : 0;
  a36=(a35*a14);
  a33=(a33+a36);
  if (res[1]!=0) res[1][5]=a33;
  a33=arg[1]? arg[1][44] : 0;
  a36=(a33*a15);
  a37=arg[1]? arg[1][45] : 0;
  a38=(a37*a21);
  a36=(a36+a38);
  a38=arg[1]? arg[1][48] : 0;
  a39=(a38*a14);
  a36=(a36+a39);
  if (res[1]!=0) res[1][6]=a36;
  a36=arg[2]? arg[2][2] : 0;
  a39=(a36*a15);
  a40=arg[2]? arg[2][3] : 0;
  a41=(a40*a21);
  a39=(a39+a41);
  a41=arg[2]? arg[2][6] : 0;
  a42=(a41*a14);
  a39=(a39+a42);
  if (res[1]!=0) res[1][7]=a39;
  a39=arg[2]? arg[2][9] : 0;
  a42=(a39*a15);
  a43=arg[2]? arg[2][10] : 0;
  a44=(a43*a21);
  a42=(a42+a44);
  a44=arg[2]? arg[2][13] : 0;
  a45=(a44*a14);
  a42=(a42+a45);
  if (res[1]!=0) res[1][8]=a42;
  a42=arg[2]? arg[2][16] : 0;
  a15=(a42*a15);
  a45=arg[2]? arg[2][17] : 0;
  a21=(a45*a21);
  a15=(a15+a21);
  a21=arg[2]? arg[2][20] : 0;
  a14=(a21*a14);
  a15=(a15+a14);
  if (res[1]!=0) res[1][9]=a15;
  a15=(a4*a13);
  a15=(a2*a15);
  a14=(a16*a18);
  a14=(a5*a14);
  a15=(a15-a14);
  a14=(a17*a18);
  a14=(a9*a14);
  a46=(a8*a13);
  a46=(a7*a46);
  a14=(a14+a46);
  a15=(a15-a14);
  a14=(a18*a15);
  a46=(a23/a20);
  a46=(a12*a46);
  a46=(a6*a46);
  a47=(a22*a18);
  a47=(a4*a47);
  a46=(a46+a47);
  a18=(a1*a18);
  a18=(a8*a18);
  a46=(a46-a18);
  a18=(a13*a46);
  a14=(a14+a18);
  a13=(a6*a13);
  a13=(a12*a13);
  a13=(a13/a11);
  a18=(a10*a23);
  a18=(a0*a18);
  a18=(a3*a18);
  a13=(a13+a18);
  a23=(a23*a13);
  a14=(a14+a23);
  if (res[1]!=0) res[1][10]=a14;
  a14=(a19*a15);
  a23=(a25*a46);
  a14=(a14+a23);
  a23=(a26*a13);
  a14=(a14+a23);
  if (res[1]!=0) res[1][11]=a14;
  a14=(a24*a15);
  a23=(a28*a46);
  a14=(a14+a23);
  a23=(a29*a13);
  a14=(a14+a23);
  if (res[1]!=0) res[1][12]=a14;
  a14=(a27*a15);
  a23=(a31*a46);
  a14=(a14+a23);
  a23=(a32*a13);
  a14=(a14+a23);
  if (res[1]!=0) res[1][13]=a14;
  a14=(a30*a15);
  a23=(a34*a46);
  a14=(a14+a23);
  a23=(a35*a13);
  a14=(a14+a23);
  if (res[1]!=0) res[1][14]=a14;
  a14=(a33*a15);
  a23=(a37*a46);
  a14=(a14+a23);
  a23=(a38*a13);
  a14=(a14+a23);
  if (res[1]!=0) res[1][15]=a14;
  a14=(a36*a15);
  a23=(a40*a46);
  a14=(a14+a23);
  a23=(a41*a13);
  a14=(a14+a23);
  if (res[1]!=0) res[1][16]=a14;
  a14=(a39*a15);
  a23=(a43*a46);
  a14=(a14+a23);
  a23=(a44*a13);
  a14=(a14+a23);
  if (res[1]!=0) res[1][17]=a14;
  a15=(a42*a15);
  a46=(a45*a46);
  a15=(a15+a46);
  a13=(a21*a13);
  a15=(a15+a13);
  if (res[1]!=0) res[1][18]=a15;
  a15=(a4*a25);
  a15=(a2*a15);
  a13=(a16*a19);
  a13=(a5*a13);
  a15=(a15-a13);
  a13=(a17*a19);
  a13=(a9*a13);
  a46=(a8*a25);
  a46=(a7*a46);
  a13=(a13+a46);
  a15=(a15-a13);
  a13=(a19*a15);
  a46=(a26/a20);
  a46=(a12*a46);
  a46=(a6*a46);
  a14=(a22*a19);
  a14=(a4*a14);
  a46=(a46+a14);
  a19=(a1*a19);
  a19=(a8*a19);
  a46=(a46-a19);
  a19=(a25*a46);
  a13=(a13+a19);
  a25=(a6*a25);
  a25=(a12*a25);
  a25=(a25/a11);
  a19=(a10*a26);
  a19=(a0*a19);
  a19=(a3*a19);
  a25=(a25+a19);
  a26=(a26*a25);
  a13=(a13+a26);
  if (res[1]!=0) res[1][19]=a13;
  a13=(a24*a15);
  a26=(a28*a46);
  a13=(a13+a26);
  a26=(a29*a25);
  a13=(a13+a26);
  if (res[1]!=0) res[1][20]=a13;
  a13=(a27*a15);
  a26=(a31*a46);
  a13=(a13+a26);
  a26=(a32*a25);
  a13=(a13+a26);
  if (res[1]!=0) res[1][21]=a13;
  a13=(a30*a15);
  a26=(a34*a46);
  a13=(a13+a26);
  a26=(a35*a25);
  a13=(a13+a26);
  if (res[1]!=0) res[1][22]=a13;
  a13=(a33*a15);
  a26=(a37*a46);
  a13=(a13+a26);
  a26=(a38*a25);
  a13=(a13+a26);
  if (res[1]!=0) res[1][23]=a13;
  a13=(a36*a15);
  a26=(a40*a46);
  a13=(a13+a26);
  a26=(a41*a25);
  a13=(a13+a26);
  if (res[1]!=0) res[1][24]=a13;
  a13=(a39*a15);
  a26=(a43*a46);
  a13=(a13+a26);
  a26=(a44*a25);
  a13=(a13+a26);
  if (res[1]!=0) res[1][25]=a13;
  a15=(a42*a15);
  a46=(a45*a46);
  a15=(a15+a46);
  a25=(a21*a25);
  a15=(a15+a25);
  if (res[1]!=0) res[1][26]=a15;
  a15=(a4*a28);
  a15=(a2*a15);
  a25=(a16*a24);
  a25=(a5*a25);
  a15=(a15-a25);
  a25=(a17*a24);
  a25=(a9*a25);
  a46=(a8*a28);
  a46=(a7*a46);
  a25=(a25+a46);
  a15=(a15-a25);
  a25=(a24*a15);
  a46=(a29/a20);
  a46=(a12*a46);
  a46=(a6*a46);
  a13=(a22*a24);
  a13=(a4*a13);
  a46=(a46+a13);
  a24=(a1*a24);
  a24=(a8*a24);
  a46=(a46-a24);
  a24=(a28*a46);
  a25=(a25+a24);
  a28=(a6*a28);
  a28=(a12*a28);
  a28=(a28/a11);
  a24=(a10*a29);
  a24=(a0*a24);
  a24=(a3*a24);
  a28=(a28+a24);
  a29=(a29*a28);
  a25=(a25+a29);
  if (res[1]!=0) res[1][27]=a25;
  a25=(a27*a15);
  a29=(a31*a46);
  a25=(a25+a29);
  a29=(a32*a28);
  a25=(a25+a29);
  if (res[1]!=0) res[1][28]=a25;
  a25=(a30*a15);
  a29=(a34*a46);
  a25=(a25+a29);
  a29=(a35*a28);
  a25=(a25+a29);
  if (res[1]!=0) res[1][29]=a25;
  a25=(a33*a15);
  a29=(a37*a46);
  a25=(a25+a29);
  a29=(a38*a28);
  a25=(a25+a29);
  if (res[1]!=0) res[1][30]=a25;
  a25=(a36*a15);
  a29=(a40*a46);
  a25=(a25+a29);
  a29=(a41*a28);
  a25=(a25+a29);
  if (res[1]!=0) res[1][31]=a25;
  a25=(a39*a15);
  a29=(a43*a46);
  a25=(a25+a29);
  a29=(a44*a28);
  a25=(a25+a29);
  if (res[1]!=0) res[1][32]=a25;
  a15=(a42*a15);
  a46=(a45*a46);
  a15=(a15+a46);
  a28=(a21*a28);
  a15=(a15+a28);
  if (res[1]!=0) res[1][33]=a15;
  a15=(a4*a31);
  a15=(a2*a15);
  a28=(a16*a27);
  a28=(a5*a28);
  a15=(a15-a28);
  a28=(a17*a27);
  a28=(a9*a28);
  a46=(a8*a31);
  a46=(a7*a46);
  a28=(a28+a46);
  a15=(a15-a28);
  a28=(a27*a15);
  a46=(a32/a20);
  a46=(a12*a46);
  a46=(a6*a46);
  a25=(a22*a27);
  a25=(a4*a25);
  a46=(a46+a25);
  a27=(a1*a27);
  a27=(a8*a27);
  a46=(a46-a27);
  a27=(a31*a46);
  a28=(a28+a27);
  a31=(a6*a31);
  a31=(a12*a31);
  a31=(a31/a11);
  a27=(a10*a32);
  a27=(a0*a27);
  a27=(a3*a27);
  a31=(a31+a27);
  a32=(a32*a31);
  a28=(a28+a32);
  if (res[1]!=0) res[1][34]=a28;
  a28=(a30*a15);
  a32=(a34*a46);
  a28=(a28+a32);
  a32=(a35*a31);
  a28=(a28+a32);
  if (res[1]!=0) res[1][35]=a28;
  a28=(a33*a15);
  a32=(a37*a46);
  a28=(a28+a32);
  a32=(a38*a31);
  a28=(a28+a32);
  if (res[1]!=0) res[1][36]=a28;
  a28=(a36*a15);
  a32=(a40*a46);
  a28=(a28+a32);
  a32=(a41*a31);
  a28=(a28+a32);
  if (res[1]!=0) res[1][37]=a28;
  a28=(a39*a15);
  a32=(a43*a46);
  a28=(a28+a32);
  a32=(a44*a31);
  a28=(a28+a32);
  if (res[1]!=0) res[1][38]=a28;
  a15=(a42*a15);
  a46=(a45*a46);
  a15=(a15+a46);
  a31=(a21*a31);
  a15=(a15+a31);
  if (res[1]!=0) res[1][39]=a15;
  a15=(a4*a34);
  a15=(a2*a15);
  a31=(a16*a30);
  a31=(a5*a31);
  a15=(a15-a31);
  a31=(a17*a30);
  a31=(a9*a31);
  a46=(a8*a34);
  a46=(a7*a46);
  a31=(a31+a46);
  a15=(a15-a31);
  a31=(a30*a15);
  a46=(a35/a20);
  a46=(a12*a46);
  a46=(a6*a46);
  a28=(a22*a30);
  a28=(a4*a28);
  a46=(a46+a28);
  a30=(a1*a30);
  a30=(a8*a30);
  a46=(a46-a30);
  a30=(a34*a46);
  a31=(a31+a30);
  a34=(a6*a34);
  a34=(a12*a34);
  a34=(a34/a11);
  a30=(a10*a35);
  a30=(a0*a30);
  a30=(a3*a30);
  a34=(a34+a30);
  a35=(a35*a34);
  a31=(a31+a35);
  if (res[1]!=0) res[1][40]=a31;
  a31=(a33*a15);
  a35=(a37*a46);
  a31=(a31+a35);
  a35=(a38*a34);
  a31=(a31+a35);
  if (res[1]!=0) res[1][41]=a31;
  a31=(a36*a15);
  a35=(a40*a46);
  a31=(a31+a35);
  a35=(a41*a34);
  a31=(a31+a35);
  if (res[1]!=0) res[1][42]=a31;
  a31=(a39*a15);
  a35=(a43*a46);
  a31=(a31+a35);
  a35=(a44*a34);
  a31=(a31+a35);
  if (res[1]!=0) res[1][43]=a31;
  a15=(a42*a15);
  a46=(a45*a46);
  a15=(a15+a46);
  a34=(a21*a34);
  a15=(a15+a34);
  if (res[1]!=0) res[1][44]=a15;
  a15=(a4*a37);
  a15=(a2*a15);
  a34=(a16*a33);
  a34=(a5*a34);
  a15=(a15-a34);
  a34=(a17*a33);
  a34=(a9*a34);
  a46=(a8*a37);
  a46=(a7*a46);
  a34=(a34+a46);
  a15=(a15-a34);
  a34=(a33*a15);
  a46=(a38/a20);
  a46=(a12*a46);
  a46=(a6*a46);
  a31=(a22*a33);
  a31=(a4*a31);
  a46=(a46+a31);
  a33=(a1*a33);
  a33=(a8*a33);
  a46=(a46-a33);
  a33=(a37*a46);
  a34=(a34+a33);
  a37=(a6*a37);
  a37=(a12*a37);
  a37=(a37/a11);
  a33=(a10*a38);
  a33=(a0*a33);
  a33=(a3*a33);
  a37=(a37+a33);
  a38=(a38*a37);
  a34=(a34+a38);
  if (res[1]!=0) res[1][45]=a34;
  a34=(a36*a15);
  a38=(a40*a46);
  a34=(a34+a38);
  a38=(a41*a37);
  a34=(a34+a38);
  if (res[1]!=0) res[1][46]=a34;
  a34=(a39*a15);
  a38=(a43*a46);
  a34=(a34+a38);
  a38=(a44*a37);
  a34=(a34+a38);
  if (res[1]!=0) res[1][47]=a34;
  a15=(a42*a15);
  a46=(a45*a46);
  a15=(a15+a46);
  a37=(a21*a37);
  a15=(a15+a37);
  if (res[1]!=0) res[1][48]=a15;
  a15=(a4*a40);
  a15=(a2*a15);
  a37=(a16*a36);
  a37=(a5*a37);
  a15=(a15-a37);
  a37=(a17*a36);
  a37=(a9*a37);
  a46=(a8*a40);
  a46=(a7*a46);
  a37=(a37+a46);
  a15=(a15-a37);
  a37=(a36*a15);
  a46=(a41/a20);
  a46=(a12*a46);
  a46=(a6*a46);
  a34=(a22*a36);
  a34=(a4*a34);
  a46=(a46+a34);
  a36=(a1*a36);
  a36=(a8*a36);
  a46=(a46-a36);
  a36=(a40*a46);
  a37=(a37+a36);
  a40=(a6*a40);
  a40=(a12*a40);
  a40=(a40/a11);
  a36=(a10*a41);
  a36=(a0*a36);
  a36=(a3*a36);
  a40=(a40+a36);
  a41=(a41*a40);
  a37=(a37+a41);
  if (res[1]!=0) res[1][49]=a37;
  a37=(a39*a15);
  a41=(a43*a46);
  a37=(a37+a41);
  a41=(a44*a40);
  a37=(a37+a41);
  if (res[1]!=0) res[1][50]=a37;
  a15=(a42*a15);
  a46=(a45*a46);
  a15=(a15+a46);
  a40=(a21*a40);
  a15=(a15+a40);
  if (res[1]!=0) res[1][51]=a15;
  a15=(a4*a43);
  a15=(a2*a15);
  a40=(a16*a39);
  a40=(a5*a40);
  a15=(a15-a40);
  a40=(a17*a39);
  a40=(a9*a40);
  a46=(a8*a43);
  a46=(a7*a46);
  a40=(a40+a46);
  a15=(a15-a40);
  a40=(a39*a15);
  a46=(a44/a20);
  a46=(a12*a46);
  a46=(a6*a46);
  a37=(a22*a39);
  a37=(a4*a37);
  a46=(a46+a37);
  a39=(a1*a39);
  a39=(a8*a39);
  a46=(a46-a39);
  a39=(a43*a46);
  a40=(a40+a39);
  a43=(a6*a43);
  a43=(a12*a43);
  a43=(a43/a11);
  a39=(a10*a44);
  a39=(a0*a39);
  a39=(a3*a39);
  a43=(a43+a39);
  a44=(a44*a43);
  a40=(a40+a44);
  if (res[1]!=0) res[1][52]=a40;
  a15=(a42*a15);
  a46=(a45*a46);
  a15=(a15+a46);
  a43=(a21*a43);
  a15=(a15+a43);
  if (res[1]!=0) res[1][53]=a15;
  a15=(a4*a45);
  a2=(a2*a15);
  a16=(a16*a42);
  a5=(a5*a16);
  a2=(a2-a5);
  a17=(a17*a42);
  a9=(a9*a17);
  a17=(a8*a45);
  a7=(a7*a17);
  a9=(a9+a7);
  a2=(a2-a9);
  a2=(a42*a2);
  a20=(a21/a20);
  a20=(a12*a20);
  a20=(a6*a20);
  a22=(a22*a42);
  a4=(a4*a22);
  a20=(a20+a4);
  a1=(a1*a42);
  a8=(a8*a1);
  a20=(a20-a8);
  a20=(a45*a20);
  a2=(a2+a20);
  a6=(a6*a45);
  a12=(a12*a6);
  a12=(a12/a11);
  a10=(a10*a21);
  a0=(a0*a10);
  a3=(a3*a0);
  a12=(a12+a3);
  a21=(a21*a12);
  a2=(a2+a21);
  if (res[1]!=0) res[1][54]=a2;
  return 0;
}

CASADI_SYMBOL_EXPORT int f110_kinematic_model_expl_ode_hess(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int f110_kinematic_model_expl_ode_hess_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int f110_kinematic_model_expl_ode_hess_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void f110_kinematic_model_expl_ode_hess_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int f110_kinematic_model_expl_ode_hess_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void f110_kinematic_model_expl_ode_hess_release(int mem) {
}

CASADI_SYMBOL_EXPORT void f110_kinematic_model_expl_ode_hess_incref(void) {
}

CASADI_SYMBOL_EXPORT void f110_kinematic_model_expl_ode_hess_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int f110_kinematic_model_expl_ode_hess_n_in(void) { return 6;}

CASADI_SYMBOL_EXPORT casadi_int f110_kinematic_model_expl_ode_hess_n_out(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_real f110_kinematic_model_expl_ode_hess_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* f110_kinematic_model_expl_ode_hess_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    case 4: return "i4";
    case 5: return "i5";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* f110_kinematic_model_expl_ode_hess_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* f110_kinematic_model_expl_ode_hess_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    case 3: return casadi_s0;
    case 4: return casadi_s3;
    case 5: return casadi_s4;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* f110_kinematic_model_expl_ode_hess_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s5;
    case 1: return casadi_s6;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int f110_kinematic_model_expl_ode_hess_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 6;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
