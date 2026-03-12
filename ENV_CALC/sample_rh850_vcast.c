# 2 __FILE__ 3
/* File: sample_rh850.c */
/*vcast_header_expansion_start:D:\\PYTHON-MCP-SERVER\\VCASTAGENT\\PROJECT\\INCLUDE/sample_rh850.h*/
/* File: sample_rh850.h */
int add(int a, int b);
int is_even(int x);
int max(int a, int b);
int check_conditions(int a, int b, int c);
/*vcast_header_expansion_end*/
/* Function 1: simple add */
int add(int a, int b)
{ /*vcast_internal_start*/
extern int P_9_1_1;
extern int P_9_1_2;
extern int R_9_1;
extern unsigned char SBF_9_1;
if(SBF_9_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_4246369255
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_4246369255
  if ( vcast_is_in_driver ) {
    P_9_1_1 = a;
    P_9_1_2 = b;
    vCAST_COMMON_STUB_PROC_9( 9, 1, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_4246369255
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_4246369255
  vCAST_USER_CODE_TIMER_START();
  return R_9_1;
}
{ /*vcast_internal_end*/
    return a + b;
} /*vcast_internal_start*/}/*vcast_internal_end*/
/* Function 2: check if a number is even */
int is_even(int x)
{ /*vcast_internal_start*/
extern int P_9_2_1;
extern int R_9_2;
extern unsigned char SBF_9_2;
if(SBF_9_2) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_1521693011
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_1521693011
  if ( vcast_is_in_driver ) {
    P_9_2_1 = x;
    vCAST_COMMON_STUB_PROC_9( 9, 2, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_1521693011
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_1521693011
  vCAST_USER_CODE_TIMER_START();
  return R_9_2;
}
{ /*vcast_internal_end*/
    if (x % 2 == 0)
        return 1;
    else
        return 0;
} /*vcast_internal_start*/}/*vcast_internal_end*/
/* Function 3: max of two numbers */
int max(int a, int b)
{ /*vcast_internal_start*/
extern int P_9_3_1;
extern int P_9_3_2;
extern int R_9_3;
extern unsigned char SBF_9_3;
if(SBF_9_3) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_2641765001
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_2641765001
  if ( vcast_is_in_driver ) {
    P_9_3_1 = a;
    P_9_3_2 = b;
    vCAST_COMMON_STUB_PROC_9( 9, 3, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_2641765001
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_2641765001
  vCAST_USER_CODE_TIMER_START();
  return R_9_3;
}
{ /*vcast_internal_end*/
    if (a > b)
        return a;
    else
        return b;
} /*vcast_internal_start*/}/*vcast_internal_end*/
/* Function 4: complex condition example */
int check_conditions(int a, int b, int c)
{ /*vcast_internal_start*/
extern int P_9_4_1;
extern int P_9_4_2;
extern int P_9_4_3;
extern int R_9_4;
extern unsigned char SBF_9_4;
if(SBF_9_4) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_1873292459
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_1873292459
  if ( vcast_is_in_driver ) {
    P_9_4_1 = a;
    P_9_4_2 = b;
    P_9_4_3 = c;
    vCAST_COMMON_STUB_PROC_9( 9, 4, 4, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_1873292459
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_1873292459
  vCAST_USER_CODE_TIMER_START();
  return R_9_4;
}
{ /*vcast_internal_end*/
    if ((a > b && b > c) || (c > a))
        return 1;
    else
        return 0;
} /*vcast_internal_start*/}/*vcast_internal_end*/
 /*vcast_internal_start*//*vcast_internal_end*/
 /*vcast_internal_start*//*vcast_internal_end*/
 /*vcast_internal_start*//*vcast_internal_end*/
 /*vcast_internal_start*//*vcast_internal_end*/
