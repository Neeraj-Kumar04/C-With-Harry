#include <stdio.h>

int main()
{
    int cgpa[3] = {9, 8, 8}; // arrays can be initialized while declaration
    // float marks[] = {33, 40};
    for (int i = 0; i < 3; i++)
    {
        printf("The value of marks at index  [%d] is %d\n", i, cgpa[i]);
    }
    return 0;
}