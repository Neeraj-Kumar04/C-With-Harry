/*
Quick Quiz: Write a program to create a dynamic array of 5 floats using malloc().
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 5;
    float *ptr;

    ptr = (float *)malloc(n * sizeof(float)); // malloc returns null pointer ,here we cast into integer

    // int arr[n];//Not allowed in c
    ptr[0] = 3.325;
    ptr[1] = 60.325;
    ptr[2] = 65.325;
    ptr[3] = 26.325;
    ptr[4] = 336.325;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);
    return 0;
}