#line 3 "vcast_preprocess.8488.1010.c"                                                                                                                             
# 1 "vcast_preprocess.8488.1008.c" 1

typedef int VECTORCAST_MARKER__UNIT_PREFIX_START;

typedef int VECTORCAST_MARKER__UNIT_PREFIX_END;
# 1 "D:/python-mcp-server/vcastagent/project/src/sample_rh850.c" 1
/* File: sample_rh850.c */
# 1 "D:\\PYTHON-MCP-SERVER\\VCASTAGENT\\PROJECT\\INCLUDE/sample_rh850.h" 1
/* File: sample_rh850.h */



int add(int a, int b);
int is_even(int x);
int max(int a, int b);
int check_conditions(int a, int b, int c);
# 3 "D:/python-mcp-server/vcastagent/project/src/sample_rh850.c" 2

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
# 6 "vcast_preprocess.8488.1008.c" 2

typedef int VECTORCAST_MARKER__UNIT_APPENDIX_START;

typedef int VECTORCAST_MARKER__UNIT_APPENDIX_END;
# 4 "vcast_preprocess.8488.1010.c" 2

                                               
