#include <stdio.h>

int main()
{
    /*
    Quick Quiz: Write a program to print ‘n’ natural numbers in reverse order.
    */
    int n = 12;
    for (int i = n; i; i--) // here i checks condition as "i" is nonzero or not
    {
        printf("%d\n", i);
    }
    return 0;
}