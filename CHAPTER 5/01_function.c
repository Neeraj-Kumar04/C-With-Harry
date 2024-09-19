#include <stdio.h>
// Function prototype
int sum(int, int);

// Function declaration
int sum(int x, int y)
{
    // printf("The sum is %d\n", x + y);
    return x + y;
}

int main()
{
    int a = 1;
    int b = 6;

    // int c = a + b;
    // printf("The sum is %d\n", c);
    int c = sum(a, b); // Function call

    int a1 = 11;
    int b1 = 62;

    // int c1 = a1 + b1;
    // printf("The sum is %d\n", c1);
    int c1 = sum(a1, b1); // Function call
    printf("The sum is %d\n", c1);

    int a2 = 21;
    int b2 = 56;

    // int c2 = a2 + b2;
    // printf("The sum is %d\n", c2);
    int c2 = sum(a2, b2); // Function call
    printf("The sum is %d\n", c2);

    int a3 = 21;
    int b3 = 36;

    // int c3 = a3 + b3;
    // printf("The sum is %d\n", c3);
    int c3 = sum(a3, b3); // Function call
    printf("The sum is %d\n", c2);
    return 0;
}