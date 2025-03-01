#include <stdio.h>
/*
Write a program to print multiplication table of 10 in reversed order.
*/
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    for (int i = 10; i; i--) // here i checks condition of non zero.
    {
        printf("Print the table of %d X %d = %d \n", n, i, n * i);
    }

    return 0;
}