#include <stdio.h>
/*
Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
*/
int main()
{
    // Using do while loop
    // int i = 1;
    // int sum = 0;

    // do
    // {
    //     sum += i; // sum=sum+i;
    //     i++;
    // } while (i <= 10);

    // Using for loop
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += i; // sum=sum+i;
    }
    printf("The sum of first Ten natural number is %d", sum);

    return 0;
}