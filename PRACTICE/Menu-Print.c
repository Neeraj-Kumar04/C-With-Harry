//menu printing through do-while loop of country & capital
#include<stdio.h>

int main() {
int ch;
do
{
   printf(" \nCountry & Capital\n");
   printf("India:[1]\n");
   printf("USA:[2]\n");
   printf("UAE:[3]\n");
   printf("EXIT:[4]\n");
   printf("Enter your choice:\n");
   scanf("%d",&ch);

   switch (ch)
   {
   case 1: printf("Capital:New Delhi |Currency: Rupee\n");
    break;
   
   case 2: printf("Capital:Washington DC |Currency: Dollar\n");
    break;
   case 3: printf("Capital:Abu Dhabi |Currency: Dirham\n");
    break;
   case 4: printf("Thank you for using this program.\n");
    break;
   default:printf("Invalid choice.Try Again \n");
    
   }
} while (ch!=4);

return 0;
}