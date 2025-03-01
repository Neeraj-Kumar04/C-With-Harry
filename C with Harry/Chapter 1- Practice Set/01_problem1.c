/*
1.Write a C program to calculate area of a rectangle:
a.Using hard coded inputs.
b.Using inputs supplied by the user.
*/
#include <stdio.h>

int main()
{
    // int length = 3;
    // int breadth = 6;
    int length, breadth;
    printf("Enter length\n");
    scanf("%d", &length);
    printf("Enter breadth\n");
    scanf("%d", &breadth);
    printf("The area of rectangle is %d\n", length * breadth);
    printf("Thanks.congratulation");

    return 0;
}