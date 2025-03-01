#include <stdio.h>

int main()
{
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n'; // represents a new line
    printf("Hey i am good\n nice");
    printf("Hey i am good \" nice"); // escape double quote
    printf("Hey i am good \' nice"); // escape sigle quote
    printf("Hey i am good\\n nice"); // \\n used to literally write \\n
    return 0;
}