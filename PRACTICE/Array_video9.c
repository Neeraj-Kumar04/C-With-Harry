//Program of merging array elements one bye one 
//from 1st array--1st element and 2nd array --1st element

#include<stdio.h>

int main() {
int a[5]={1,3,5,7,9};//array a
int b[5]={2,4,6,8,10};//array b
int c[10];//array c

int i,j;//loop variable

for ( i = 0,j=0; i <10;i+=2, j++)//i handles index of array c and j handles index of array a & b
{
    c[i]=a[j];//c[0]=a[0]
    c[i+1]=b[j];//c[1]=b[0]
}
printf("Merged Array:\n");
for ( i = 0; i <10; i++)
{
    printf("%d",c[i]);
}

return 0;
}
