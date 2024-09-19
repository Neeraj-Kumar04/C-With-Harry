#include <stdio.h>
/*
Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().
*/

int *sum(int a, int b) // function defintion with body
{
    int s = a + b;
    int *ptr = &s; // stores the address of avg in ptr
    printf("The sum is %d\n", s);
    return ptr;
}

float *average(int a, int b)
{
    float avg = (a + b) / 2.0;
    float *ptr = &avg; // stores the address of avg in ptr
    printf("The sum average is %f\n", avg);
    return ptr;
}

int main()
{
    int x = 4;
    int y = 45;
    int *ptr1;
    float *ptr2;
    ptr1 = sum(x, y);     // function call,catching the value of ptr
    ptr2 = average(x, y); // function call

    printf("The address of sum is %u and of average is %u", ptr1, ptr2);

    return 0;
}