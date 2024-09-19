#include <stdio.h>
#include <stdlib.h>
/*
Use the array in problem 1 to store 6 integers entered by the user.
*/
int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the values:\n");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}