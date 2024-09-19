#include <stdio.h>

int main()
{
    int arr[3][2];
    for (int i = 0; i < 3; i++) // this loop is for rows
    {
        for (int j = 0; j < 2; j++) // this loop is for columns
        {
            printf("Enter the value of arr[%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // for (int i = 0; i < 3; i++) // this loop is for rows
    // {
    //     for (int j = 0; j < 2; j++) // this loop is for columns
    //     {
    //         printf("\nThe value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
    //     }
    // }

    for (int i = 0; i < 3; i++) // this loop is for rows
    {
        for (int j = 0; j < 2; j++) // this loop is for columns
        {
            printf(" %d", arr[i][j]);
        }
        printf(" \n");
    }
    return 0;
}