#include <stdio.h>

int main()
{
    char i = 'A';
    char *j = &i; // j is a pointer pointing to i(j is an character pointer )

    float k = 5.236;
    float *k1 = &k; // k1 is a pointer pointing to k(k1 is an character pointer )
    printf("The address of i is %p", &i);
    printf("\nThe address of i is %p", j);
    printf("\nThe address of i is %p", &k);

    printf("\nThe value at address j is %d", *(&i));
    return 0;
}