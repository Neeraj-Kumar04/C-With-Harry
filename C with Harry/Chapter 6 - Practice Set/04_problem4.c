#include <stdio.h>
/*
Write a function and pass the value by reference.
*/

int sum(int *, int *); // function protoype

int sum(int *x, int *y) // function definition
{
    return *x + *y; // returntype
}
int main()
{
    int a = 45;
    int b = 65;
    printf("The sum  of a and b is %d\n", sum(&a, &b));

    return 0;
}