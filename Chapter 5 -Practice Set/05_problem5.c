#include <stdio.h>
/*
What will the following line produce in a C program:
int a = 4;
printf("%d %d %d \n", a, ++a, a++);

*/
int main()
{
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // o/p-->6 6 4
    // o/p--> 4 5 5
    return 0;
}