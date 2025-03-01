#include <stdio.h>
#include <string.h>
/*
 Write a program to encrypt a string by adding 1 to the ascii value of its
characters.
*/
int main()
{
    char str[] = "Neeraj";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }
    printf("%s", str);
    return 0;
}