//Example for printing array element
#include <stdio.h>

int main()
{

    int arr[5]; // array
    int i;      // loop variable

    printf("Enter the array element:\n");
    for (size_t i = 0; i < 5; i++) // loop for iteration from (0-4)th index
    {
        scanf("%d",&arr[i]); // store all element at diffrent index given by user
    }
    printf("Content of the array:\n");
    for (size_t i = 0; i < 5; i++) // loop for iteration from (0-4)th index
    {
        printf("%d\n",arr[i]); // display all stored element to o/p screen
    }

    return 0;
}