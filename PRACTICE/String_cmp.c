//program of string compare
#include<stdio.h>
#include<string.h>

int main() {
char s1[30];
char s2[30];
int n;
printf("Enter string s1:");
fgets(s1,29,stdin);

printf("Enter string s2:");
fgets(s2,29,stdin);

//n=strcmp(s1,s2);

if(stricmp (s1,s2)==0)//compare string ASCII value
{
    printf("strings are equal");
}else
printf("strings are different");
return 0;
}
//username@gmail.com-->stricmp()
//password-->strcmp()--case sensitive