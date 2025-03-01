#include<stdio.h>

int main() {
int num,temp,sum=0;//--->temp to store digit 

printf("Enter a Number:");
scanf("%d",&num);

while (sum!=1&&sum!=4)
{
    sum=0;
    while (num>0)
    {
        temp=num%10;//used for taking digit singly
        sum+=(temp*temp);//multiply single single digit of number
        num=num/10;
    }
    num=sum;    
}
if(sum==1){
printf("Happy Number");

}else
{
    printf("unhappy Number");
}
return 0;
}