
#include <stdio.h>
/*
Write a program to calculate the factorial of a given number using a for loop
*/
int main()
{
    // 8!= 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
    // 5! = 1 X 2 X 3 X 4 X 5
    // n! = 1 X 2 X 3 X 4 X 5.......X n
    // 0! =1
    int product = 1;
    // int n = 0;
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The factorial is %d", product);
    return 0;
}
