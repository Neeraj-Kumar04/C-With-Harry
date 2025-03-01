//PROGRAM OF FACTORIAL NUMBER
//--->5!=5*4*3*2*1=120

#include<stdio.h>

int main() {
int n,fact=1,i;

printf("Enter a number:");
scanf("%d",&n);

for ( i = 1; i <=n; i++)
{
    fact=fact*i;
}
printf("Factorial of given %d is %d \n",n,fact);
return 0;
}