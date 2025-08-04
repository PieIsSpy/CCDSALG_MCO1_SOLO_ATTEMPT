#include <stdio.h>
#include <stdlib.h>

#define MAX 256

#define TRUE 1
#define FALSE 2

typedef int Boolean;

union dataUnionTag {
    int number;
    char operation[3];
};
typedef union dataUnionTag Data;
