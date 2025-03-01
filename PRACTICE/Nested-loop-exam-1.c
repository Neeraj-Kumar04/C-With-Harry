//where to used nested loop
//multi-dimensional array manipulation-->sum,multiplication
//program which required multiple calculation several any times
//example-->Find prime numbers from 1 to n.
           /*Sorting array elements*/
//Pattern printing programs
           
#include <stdio.h>

int main() {
int i,j;//loop variable

for (i=1;i<=10;i++)
{
   for (j=1;j<=10;j++)
   {
     printf("%d \t",i*j);//inner loop
   }
   printf("\n");//outer loop
}

return 0;
}