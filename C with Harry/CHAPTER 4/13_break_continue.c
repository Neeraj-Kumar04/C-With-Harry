#include <stdio.h>

int main()
{
    for (int i = 0; i < 15; i++)
    {
        if (i == 5)
        {
            // break; // exit the loop now!
            continue; // skip the iteration now!--->value will be skip as here 5 skipped
        }

        printf("i is %d\n", i);
    }
    printf("For Loop is Done!");
    return 0;
}