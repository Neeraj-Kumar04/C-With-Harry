#include <stdio.h>
/*
Try problem 3 using call by value and verify that it does not change the value of
the said variable.
*/
void change_to_ten_times(int); // function prototype

void change_to_ten_times(int a) // function definition
{
    a = a * 10;
}

int main()
{
    int x = 45;
    printf("The value of x is %d\n", x);
    change_to_ten_times(x);
    printf("The value of x is %d\n", x);
    return 0;
}