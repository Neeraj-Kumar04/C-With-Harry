#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("neeraj.txt", "r");
    while (1)
    {
        ch = fgetc(ptr); // when all the content of a file has been read break
        // the loop !
        printf("%c", ch);
        // does char is == EOF
        if (ch == EOF) // EOF-->END OF FILE
        {
            break;
        }
    }
    return 0;
}