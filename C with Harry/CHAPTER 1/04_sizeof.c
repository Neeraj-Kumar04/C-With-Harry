#include <stdio.h>

int main()
{
    int i;
    float f;
    char c;

    printf("Size of int: %lu bytes\n", sizeof(i));
    printf("Size of float: %lu bytes\n", sizeof(f));
    printf("Size of char: %lu byte\n", sizeof(c));

    return 0;
}
// 1bit-0,1
// 1 byte=8bit