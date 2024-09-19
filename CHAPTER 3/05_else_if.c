#include <stdio.h>

int main()
{
    int age = 45;

    if (age > 60)
    {
        printf("You can drive and you are a Senior citizen");
    }
    else if (age > 40)
    {
        printf("You can drive and you are elder");
    }
    else if (age > 18)
    {
        printf("You can drive ");
    }
    else // This else is optional and this runs if all condition fails
    {
        printf("You cannot drive");
    }
    return 0;
}