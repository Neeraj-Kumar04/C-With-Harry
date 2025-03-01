//Array is a collection of variables having a similar data types.
//stntax:---->> datatype arrayname[size];
//example:--> int num[5];>>integer array of 5 element
//char vowels[5]; >> character array of 5 elements
//int student[50];
//array index starts from--0
//Base address of array is--address of 1st element  of array

#include<stdio.h>

int main() {
//valid format for array intialization
int  arr[5]={10,20,30,40,50};
int arr1[]={10,20,30,40,50};
int arr2[5];//--->intializes garbage value,update on intialization by user
int arr3[5]={10,20};//--->REST of memory block assign by zero

return 0;
}