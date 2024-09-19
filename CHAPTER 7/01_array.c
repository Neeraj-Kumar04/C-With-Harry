#include <stdio.h>

int main()
{
    int marks[90]; // Reserve space to store 90 integer
    marks[0] = 45;
    marks[1] = 55;
    // We can go all the way till marks[89]
    printf("Marks 0 and marks 1 is %d %d", marks[0], marks[1]);
    return 0;
}