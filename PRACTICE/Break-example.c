
//Break keyword example
#include<stdio.h>

int main()
 {
    int i=1;
while (i<=5)
{
   printf("outerloop statement 1 \n");
   printf("outerloop statement 2 \n");

while (i<=4)
{
   printf("innerloop statement 1 \n");
   if (i==3)
   break;
   printf("innerloop statement 2 \n");
}
 printf("outerloop statement 3 \n");
   printf("outerloop statement 4 \n");
}
return 0;
}