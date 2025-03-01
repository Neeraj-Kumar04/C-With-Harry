#include<stdio.h>

int main() {
int i,j;

for (i=1;i<=3;i++)
{
    printf("Outer loop statement :1\n");
    printf("Outer loop statement :2\n");
   for ( j=1;j<=3; j++)
   {
     printf("Inner loop statement:1\n");
      printf("Inter loop statement:2\n");
       printf("Inner loop statement:3\n");
   }
    printf("Outer loop statement :3\n");
    printf("Outer loop statement :4\n");
}

return 0;
}