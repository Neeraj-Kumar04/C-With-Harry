#include<stdio.h>

int main()
{
    int num,i;
    printf("ENTER THE NUMBER to print the table for: ");
    scanf("%d",&num);

    for(i=1;i<=10;i++)
    {
        printf( "%d \n",num*i);
    }
        return 0;
}
