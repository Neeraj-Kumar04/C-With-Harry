#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "NEERAJ";
    // printf("%d", strlen(str)); // Prints the string & places the cursor on the next line

    char target[30];
    strcpy(target, str); // target now contains "Neeraj"
    printf("%s %s", str, target);
    return 0;
}