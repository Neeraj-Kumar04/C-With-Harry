#include <stdio.h>
/*
Write a program to find greatest of four numbers entered by the user.
*/
int main()
{
    int a = 5, b = 38, c = 10, d = 22;
    if (a > b && a > c && a > d)
    {
        printf("The greatest of all is %d\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest of all is %d\n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("The greatest of all is %d\n", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("The greatest of all is %d\n", d);
    }

    return 0;
}