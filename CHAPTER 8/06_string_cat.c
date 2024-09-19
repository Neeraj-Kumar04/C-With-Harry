#include <stdio.h>
#include <string.h>

int main()
{
    char s1[12] = "hello";
    char s2[] = "neeraj";
    strcat(s1, s2); // s1 now contains "helloneeraj" <no space in between>
    // printf("%s %s", s1, s2);
    printf(" %s", s1); // helloneeraj
    return 0;
}