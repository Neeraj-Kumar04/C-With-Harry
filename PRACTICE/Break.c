//where to use break 
/*Search a number in an array*/
/*To terminate an infinite loop*/
#include<stdio.h>

int main() {

for (size_t i=1; i <=5; i++)
{
    if(i==3)
    break;
    printf("%d \n",i);
}

return 0;
}