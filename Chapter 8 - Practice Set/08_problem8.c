#include <stdio.h>
#include <string.h>
/*
Write a program to count the occurrence of a given character in a string.
*/
int main()
{
    char c = 'e';
    int count = 0;
    char str[] = "Neeraj";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}