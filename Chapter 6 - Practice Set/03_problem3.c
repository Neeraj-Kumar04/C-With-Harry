#include <stdio.h>
/*
Write a program to change the value of a variable to ten times of its current
value.
*/
void change_to_ten_times(int *); // function prototype

void change_to_ten_times(int *a) // function definition
{
    *a = *a * 10;
}

int main()
{
    int x = 45;
    printf("The value of x is %d\n", x);
    change_to_ten_times(&x); // addresss of x will be accessed by *a and changes their value ten times
    printf("The value of x is %d\n", x);

    return 0;
}