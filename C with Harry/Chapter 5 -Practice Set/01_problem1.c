#include <stdio.h>
// Write a program using function to find average of three numbers.
/*
Note:-Every function has three steps:- 1)function prototype 2)function definition with body
3)function call

*/
float average(int a, int b, int c);

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
int main()
{
    int a = 6, b = 5, c = 15;
    printf("The average of a,b & c is %f", average(a, b, c));
    return 0;
}