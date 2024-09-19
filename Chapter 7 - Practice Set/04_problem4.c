#include <stdio.h>
/*
Repeat problem 3 for a general input provided by the user using scanf.
*/
int main()
{
    int n;
    printf("Enter the number to print tha table of:");

    scanf("%d", &n);
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1); // for table printing formula logic--i for index iteration +1 add to i value
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d X %d = %d \n", n, i + 1, arr[i]);
    }
    return 0;
}