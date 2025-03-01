//Program of merging array elements  
//from 1st array--all element and 2nd array --all element

#include<stdio.h>

int main() {
int a[5]={1,3,5,7,9};//array a
int b[5]={2,4,6,8,10};//array b
int c[10];//array c

int i;//loop variable

for ( i = 0; i <5; i++)
{
    c[i]=a[i];//c[0]=a[0]
    c[i+5]=b[i];//c[5]=b[0]
}
printf("Merged Array:\n");
for ( i = 0; i <10; i++)
{
    printf("%d",c[i]);
}

return 0;
}
