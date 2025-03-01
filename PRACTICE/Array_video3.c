#include<stdio.h>

int main() {
int arr[5]={5,10,20,30,40};
//print array element at different index
printf("%d",arr[0]);//5
//changes the value at index
arr[2]=30;
printf("\n%d ",arr[2]);//30

//sum of array element at different index
int n=arr[3]+arr[1];
printf("\n%d\n",n);//40

printf("Enter an elemnt:");
scanf("%d",&arr[0]);//taken user input
printf("%d",arr[0]);//print stored input by user

return 0;
}

