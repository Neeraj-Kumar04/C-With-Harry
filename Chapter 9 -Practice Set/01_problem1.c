#include <stdio.h>
/*
. Create a two-dimensional vector using structures in C.

*/
struct vector
{
    int i, j;
};

int main()
{
    struct vector v = {1, 2};
    printf("The value of vector is %di + %dj", v.i, v.j);

    return 0;
}