#include <stdio.h>
/*
If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
(i) True.
(ii) False.
(iii) Depends.
*/

// answer-ii)(False)Points the forth element
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *s = arr; // ptr points the arr of first index
    printf("The value at address %u is %d", s + 3, *(s + 3));
    return 0;
}