//menu printing through do-while loop of calculation

#include<stdio.h>

int main() {
int n1,n2;
int ch;
printf("Enter two numbers:");
scanf("%d %d",&n1,&n2);
do
{
   printf(" \nCalculation:\n");
   printf("ADD:[1]\n");
   printf("SUB:[2]\n");
   printf("PRO:[3]\n");
   printf("EXIT:[4]\n");
   printf("Enter your choice:");
   scanf("%d",&ch);

   switch (ch)
   {
   case 1: printf("Addition is %d \n",(n1+n2));
    break;
   
   case 2: printf("Substraction is %d \n",(n1-n2));
    break;
   case 3: printf("Product is %d \n",(n1*n2));
    break;
   case 4: printf("Thanks. GOOD BYE\n");
    break;
   default:printf("Invalid choice.Try Again \n");
    
   }
} while (ch!=4);

return 0;
}