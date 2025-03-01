#include <stdio.h>
/*
Write a program with a structure representing a complex number.
*/
typedef struct c
{
    int real;
    int imaginary;
} complex; // this is defined as a data type

int main()
{
    complex c = {1, 2};
    printf("The value of complex no. is %d + %di", c.real, c.imaginary);
    return 0;
}
