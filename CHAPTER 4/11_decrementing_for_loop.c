#include <stdio.h>

int main()
{
    int i;
    for (i = 5; i; i--) // here i checks condition as "i" is nonzero or not
    {

        printf("%d\n", i);
    }
    return 0;
}