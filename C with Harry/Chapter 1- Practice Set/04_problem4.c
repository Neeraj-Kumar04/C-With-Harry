/*
4.Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest.
*/
#include <stdio.h>

int main()
{
    float p = 500.50; // p is initial amount
    int r = 5;        // r is rate
    int t = 3;        // t is time duration
    printf("The value of simple interest is %.2f", (p * r * t) / 100);
    return 0;
}