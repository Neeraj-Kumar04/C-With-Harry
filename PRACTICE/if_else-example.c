//Program to check even or odd
//1 3 5 7 9...--->ODD
//2 4 6 8.....---->EVEN
#include<stdio.h>

int main() {
int num;
printf("ENTER A NUMBER:");
scanf("%d",&num);

if (num%2==0)
{
    printf("ENTERED NUMBER IS EVEN");
}
else
{
    printf("Entered Number is ODD");
}

return 0;
}