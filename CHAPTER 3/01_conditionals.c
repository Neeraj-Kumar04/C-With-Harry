#include <stdio.h>

int main()
{
    int age = 15;
    if (age > 10)
    {
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
        printf("Program ENDS");
    }
    if (age % 5 == 0)
    {
        printf("we are inside another if\n");
        printf("Your age is divisible by 5\n");
    }
    return 0;
}