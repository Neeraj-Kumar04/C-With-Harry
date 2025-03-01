/*For loop ---> example */
// Valid format -for loop

// for(i=1;i<=5;i++)
// for(i=1,j=5;i<=j;i++,j--)
// for(;i<=5;i++)-->here var should be initialized in top of loop
// for(i=1;i<=5;)
// for(;i<=5;)
// for(i=1;;i++)-->Run infinite loop
// for(;;)-->infinite loop
#include<stdio.h>

int main()
{
    int i;
    printf("Print the no .from 1 to 10:\n");

    for(i=1;i<=10;i++)
    {
        printf( "%d \n",i);
    }
        return 0;
}