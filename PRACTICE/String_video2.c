//program of string copy
#include<stdio.h>
#include<string.h>

int main() {
char s1[30]="CodingDots";
char s2[30]="SoftEthics";

printf("strings are:\n\n");
printf("s1:%s\n",s1);
printf("s2:%s\n",s2);

//strcpy(s1,s2);//copy s2 value in s1
strncpy(s1,s2,4);//4--only 4 character--
//s2 is source character &s1--where char will be copied
printf("\nstrings (after strcpy)are:\n\n");
printf("s1:%s\n",s1);
printf("s2:%s\n",s2);


return 0;
}