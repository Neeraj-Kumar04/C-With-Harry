#include <stdio.h>
void swap(int *, int *);
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 3;
    int b = 4; // a is 3 and b is 4
    swap(&a, &b);
    printf("The value of a is %d and b is %d", a, b); // now a is 4 and b is 3
    return 0;
}