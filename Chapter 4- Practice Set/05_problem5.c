#include <stdio.h>
/*
Write a program to sum first ten natural numbers using while loop.
*/
int main()
{
    int i = 1;
    int sum = 0;
    while (i <= 10)
    {
        sum += i; // sum=sum+i;
        i++;
    }
    printf("The sum of first Ten natural number is %d", sum);
    return 0;
}