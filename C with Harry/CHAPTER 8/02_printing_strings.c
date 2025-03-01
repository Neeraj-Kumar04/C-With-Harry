#include <stdio.h>

int main()
{
    // char str[] = {'a', 'b', 'c', '\0'};
    char str[] = "abc"; // same as doing above
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%c", str[i]);
    // }
    printf("%s", str);
    return 0;
}