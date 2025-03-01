#include <stdio.h>
#include <string.h>

// This function is used to compare two strings. It returns 0 if the strings are equal

int main()
{
    int a = strcmp("far", "joke"); // Negative value
    printf("%d\n", a);

    int b = strcmp("joke", "far"); // Positive value
    printf("%d", b);
    return 0;
}