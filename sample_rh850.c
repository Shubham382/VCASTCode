/* File: sample_rh850.c */
#include "sample_rh850.h"

/* Function 1: simple add */
int add(int a, int b)
{
    return a + b;
}

/* Function 2: check if a number is even */
int is_even(int x)
{
    if (x % 2 == 0)
        return 1;
    else
        return 0;
}

/* Function 3: max of two numbers */
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

/* Function 4: complex condition example */
int check_conditions(int a, int b, int c)
{
    if ((a > b && b > c) || (c > a))
        return 1;
    else
        return 0;
}
