#include <stdio.h>

int main()
{
    char st[30];
    gets(st); // The entered string is stored in st!

    // printf("%s", st);//SAME AS DOING BELOW LINE
    puts(st); // Prints the string & places the cursor on the next line
    printf("HELLO!");
    return 0;
}