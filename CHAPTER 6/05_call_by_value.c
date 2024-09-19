#include <stdio.h>

int sum(int, int);    // function prototype
int sum(int a, int b) // function definition//-->here 5 and 6 will be copied
{
    return a + b; // function returntype--->5 and 6 will be returned as 5+6
}

int main()
{
    printf("The value of 5 and 6 is %d", sum(5, 6)); // call by value
    return 0;
}