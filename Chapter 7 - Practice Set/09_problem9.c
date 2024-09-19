#include <stdio.h>
/*
Create a three–dimensional array and print the address of its elements in
increasing order.
*/
int main()
{
    int arr[2][3][4];
    for (int i = 0; i < 2; i++) // for [2]
    {
        for (int j = 0; j < 3; j++) // for [3]
        {
            for (int k = 0; k < 4; k++) // for [4]
            {
                printf("%u ", &arr[i][j][k]);
            }
        }
    }

    return 0;
}