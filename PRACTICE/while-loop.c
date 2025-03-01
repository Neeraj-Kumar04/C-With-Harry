// SYNTAX OF WHILE LOOP

// while (/* condition */)
// {
//     /* code */
// }

// EXAMPLE OF WHILE LOOP()


#include <stdio.h>

int main()
{
    int i=1;//loop variable
    while (i!=0)
    {
        printf("YOU ARE INSIDE WHILE LOOP \n");
        printf("PRESS 0 TO EXIT FROM LOOP:");
        scanf("%d",&i);
    }
    printf("Now you are outside of while loop");
    return 0;
}