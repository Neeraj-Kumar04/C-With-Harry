#include <stdio.h>
/*
Write a program to generate multiplication table of a given number in text
format. Make sure that the file is readable and well formatted.

*/
int main()
{
    FILE *fptr;
    int num = 5;
    fptr = fopen("table.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(fptr, "%d", num * (i + 1));
        fprintf(fptr, "%c", '\n');
    }

    return 0;
}