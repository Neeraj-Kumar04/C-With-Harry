//Program shows calculation with array element like,sum & percentage

#include <stdio.h>

int main()
{
    int sub[5];       // subject marks
    int i, total = 0; // total stores sum of element
    float p;

    printf("**Enter marks for 5 subjects**\n");

    for (i = 0; i < 5; i++) // loop for index iteration
    {
        printf("Enter marks for subject[%d]:", i + 1);
        scanf("%d", &sub[i]);
    }
    for (i = 0; i < 5; i++) // loop for index iteration
    {
        total+=sub[i]; //total=total +sub[i]// adding all element at different index
    }
    printf("Total is %d\n", total);
    p = (float)total / 5;//formula for %//typecasting in int to float

    printf("Percentage is %0.2f", p);//.2f for float data type

    return 0;
}