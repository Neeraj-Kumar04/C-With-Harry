//Program of sorting of array in ascending & descending order

#include<stdio.h>

int main() {

int num[5];//array of size 5
int i,j,temp;//temp used for swapping

printf("Enter elements for the array:\n");
for ( i = 0; i <5; i++)
{
    scanf("%d",&num[i]);
}
printf("Unsorted Array:\n");
for ( i = 0; i <5; i++)
{
    printf("%d\t",num[i]);
}

//sorting procedure

for ( i = 0; i <4; i++)
{
    for(j=i+1;j<5;j++)
    {
        if (num[i]>num[j])//increasing order sorting num[i]<num[j]-->or descending order
        {
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
        }
        
    }
}
printf("\nSorted Array:\n");
for ( i = 0; i <5; i++)
{
    printf("%d\t",num[i]);
}


return 0;
}