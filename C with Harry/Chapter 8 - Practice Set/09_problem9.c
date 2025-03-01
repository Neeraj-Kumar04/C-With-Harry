#include <stdio.h>
#include <string.h>
/*
Write a program to check whether a given character is present in a string or not.
*/
int main()
{
    char c = 'e';
    int contains = 0;
    char str[] = "Neeraj";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            contains = 1;
            break;
        }
    }
    if (contains)
    {
        printf("Yes it contains\n");
    }
    else
    {
        printf("Does not contains\n");
    }

    return 0;
}