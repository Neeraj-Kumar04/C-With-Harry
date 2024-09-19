#include <stdio.h>

int main()
{
    /*
    Quick Quiz: Write a program to print first ‘n’ natural number using do-while loop
    */
    int n;
    int i = 1;
    printf("Enter the num\n");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}