#include<stdio.h>

int main() {
int upiPin = 1234;
int balance = 50000;
int enteredPin,transAmt;

printf("Enter your UPI PIN:");
scanf("%d",&enteredPin);

if(enteredPin==upiPin)
{
printf("Enter transaction amount:");
scanf("%d",&transAmt);

if (transAmt<=balance)
{
    printf("Transaction Successful.");
}
else
{
    printf("Transaction Failed(Insufficient Balance).");
}

}
else
{
    printf("Transaction Failed(Incorrect PIN).--->TRY AGAIN");
}

return 0;
}