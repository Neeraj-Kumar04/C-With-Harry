#include <stdio.h>

int main()
{
    // Any if statemnt contains non-zero num will be exceuted
    if (1)
    {
        printf("This if is also executed!\n");
    }
    if (2345)
    {
        printf("This if is also executed!\n");
    }
    if (23.45)
    {
        printf("This if is also executed!\n");
    }
    if ('c')
    {
        printf("This character inside if is also executed!\n");
    }
    if (-2345)
    {
        printf("I contain negative no - This if is also executed!\n");
    }
    if (0)
    {
        printf("I am zero - I am not  executed!\n");
    }
    return 0;
}