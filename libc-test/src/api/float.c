#include <float.h>
#define I(t,e) {t x[sizeof(t)==sizeof(e)] = {e};}
#define C(n) switch(n){case n:;}
#define D(n) {long double d = n;}
static void f()
{
I(int,FLT_ROUNDS)
C(FLT_EVAL_METHOD)
C(FLT_RADIX)
C(FLT_MANT_DIG)
C(DBL_MANT_DIG)
C(LDBL_MANT_DIG)
C(DECIMAL_DIG)
C(FLT_DIG)
C(DBL_DIG)
C(LDBL_DIG)
C(FLT_MIN_EXP)
C(DBL_MIN_EXP)
C(LDBL_MIN_EXP)
C(FLT_MIN_10_EXP)
C(DBL_MIN_10_EXP)
C(LDBL_MIN_10_EXP)
C(FLT_MAX_EXP)
C(DBL_MAX_EXP)
C(LDBL_MAX_EXP)
C(FLT_MAX_10_EXP)
C(DBL_MAX_10_EXP)
C(LDBL_MAX_10_EXP)
D(FLT_MAX)
D(DBL_MAX)
D(LDBL_MAX)
D(FLT_EPSILON)
D(DBL_EPSILON)
D(LDBL_EPSILON)
D(FLT_MIN)
D(DBL_MIN)
D(LDBL_MIN)
}
