#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5; // 10
    printf("The value of i is %d\n", i);
    //++i;
    // i++; // 11 // i=i+1; same ...
    // printf("The value of i is %d\n", i);

    printf("The value of i is %d\n", i++); // 10
    printf("The value of i is %d\n", i);   // 11

    // i++ prints i first then increments i(Post increment operator)
    // ++i increments first and  then prints i(Pre increment operator)
    return 0;
}