//program of string add,join
#include<stdio.h>
#include<string.h>

int main() {
char s1[30]="Coding";
char s2[30]="Dots";

printf("strings are:\n\n");
printf("s1:%s\n",s1);
printf("s2:%s\n",s2);

//strcat(s1,s2);
strncat(s1,s2,2);//add onlt 2 char in s1 from s2.
printf("\nstrings (after strcat)are:\n\n");
printf("s1:%s\n",s1);
printf("s2:%s\n",s2);

return 0;
}