#include <stdio.h>
/*
Create an array of 5 complex numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from
the user.
*/
typedef struct c
{
    int real;
    int imaginary;
} complex; // this is defined as a data type

void display(complex c)
{
    printf("The value of complex no. is %d + %di \n1", c.real, c.imaginary);
}

int main()
{
    complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part \n");
        scanf("%d", &carr[i].real);
        printf("Enter the imaginary part \n");
        scanf("%d", &carr[i].imaginary);
        display(carr[i]);
    }

    return 0;
}
