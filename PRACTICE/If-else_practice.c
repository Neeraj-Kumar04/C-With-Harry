//Necessary key points for if-else statement
//we can use only if from if-else
//if there is only one printf() statement ,then we can escape { },-->this symbol shows scope.
 /*
 Demonstration of if statemnt*/
#include<stdio.h>

int main() {
int n;
printf("Enter a number:");
scanf("%d",&n);

if(n<0)
{
    printf("You entered a negative number.\n");
}
printf("Number is :%d",n);

return 0;
}