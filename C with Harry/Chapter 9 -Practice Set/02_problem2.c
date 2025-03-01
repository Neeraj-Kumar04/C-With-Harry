#include <stdio.h>
/*
. Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
The vectors must be two–dimensional.


*/

struct vector
{
    int i, j;
};

struct vector sumvector(struct vector v1, struct vector v2)
{
    struct vector v3 = {(v1.i + v2.i), (v2.j + v2.j)};
    return v3;
}

int main()
{
    struct vector v1 = {1, 2};
    struct vector v2 = {1, 2};
    struct vector v3 = sumvector(v1, v2);
    printf("The value of vector v3 is %di + %dj", v3.i, v3.j);

    return 0;
}