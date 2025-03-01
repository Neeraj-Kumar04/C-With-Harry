#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("neeraj_Kumar.txt", "r");

    if (ptr == NULL)
    {
        printf("The file does not exist,SORRY! \n");
    }

    int num;
    fscanf(ptr, "%d", &num); // read from file-->neeraj.txt
    printf("The value of num is %d \n", num);

    fscanf(ptr, "%d", &num); // read from file-->neeraj.txt and prints the value
    printf("The value of num is %d \n", num);
    return 0;
}