#include <stdio.h>
// fact=fact*(n-1)--->logic for factorial!
int factorial(int); // function prototype
// Factorial(5)=1 x 2 x 3 x 4 x 5
// Factorial(4)=1 x 2 x 3 x 4
// Factorial(3)=1 x 2 x 3
// Factorial(n)=1 x 2 x 3 x 4 x 5.....n-1 x n
// Factorial(n-1)=1 x 2 x 3 x 4 x 5.....n-1

int factorial(int n)
{
    if (n == 1 || n == 0) // Base condition
    {
        return 1;
    }
    // Factorial(n)=Factorial(n-1) x n
    return factorial(n - 1) * n;
}

int main()
{
    int a = 6;
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}