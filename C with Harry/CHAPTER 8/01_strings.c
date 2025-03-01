#include <stdio.h>

int main()
{
    // char str[] = {'a', 'b', 'c', '\0'};
    char str[] = "abc"; // same as doing above
    for (int i = 0; i < 3; i++)
    {
        printf(" character is %c \n", str[i]);
    }

    // printf("First character is %c \n", str[0]);
    // printf("Second character is %c \n", str[1]);
    // printf("Third character is %c \n", str[2]);

    return 0;
}