#include <stdio.h>
/*
Write a program to print the address of a variable. Use this address to get the
value of the variable.
*/
int main()
{
    int i = 5;
    int *ptr = &i; //*ptr gives the value or points the integer i
    printf("The address of i is %u\n", &i);
    printf("The value at address of i is %d", *ptr);
    return 0;
}