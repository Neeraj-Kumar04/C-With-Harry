#include <stdio.h>

int sum(int *, int *);  // function prototype
int sum(int *a, int *b) // function definition//
{
    *a = 6;
    return *a + *b; // function returntype
}

int main()
{
    int x = 4; // value of x will be changed with 6
    int y = 5;
    // value of x is changed with the help of  their address by *a =6;
    printf("The sum  of 4 and 5 is %d\n", sum(&x, &y)); // call by refernce
    printf("The value of x is %d", x);
    return 0;
}