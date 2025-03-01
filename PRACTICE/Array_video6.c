//Program ---Search a number in an Array---linear search
//searching is 0f two types--->Linear & Binary Searching

#include<stdio.h>

int main() {

int arr[10]={4,5,6,8,12,45,96,20,66,10};
int i,found=0,n;//found for number which want to search,n--for taking no for search,i --loop variable

printf("Enter a number you want to search:");
scanf("%d",&n);

for ( i =0; i<10; i++)
{
    if (n==arr[i])//checks n to all element at indexes-->n=arr[0];n=arr[1];n=arr[2];.....so on
    {
     found=1;//number found
     break;//for exiting from loop
    }
    
}
if(found==1)
printf("YES,Number is present in the array at [%d]th position",i);
else
printf("NO,Number is not present in the array at any position");

return 0;
}