//String-->A string is a collection of characters.
//example-->"Neeraj","India",etc.
// c does not support string as a data type.
//we use character array to represent string.
//char str[5]="GOOD";-->Creates array str from (0-4)index
//The null character-->(\0) acts as the "end of the string" marker.
//The compiler automatically adds a null character at the end of the string
//used to detect the end of valid string data in the character array.

/*PRE-DEFINED FUNCTION IN String*/ 
//string.h-->header file for string.
//strlen()>>Determines the length of string
//strrev()>>Reverse the string.
//strlwr()>>Convert string to lowercase
//strupr()>>Convert string to uppercase
//strcpy()>>Copy one string to another.
//strcmp(s1,s2)>>Compare two string .return 0 if equal
//stricmp()>>Compare two strings(case insensitive).ex-"good","GOOD"
//strcat()>>Concatenate(add,join)two strings.
//strstr()>>Extract the substring from the string.

#include<stdio.h>
#include<string.h>

int main() {
char userString[30];
//int n;

printf("Enter any string:");
gets(userString);//input for string
//n=strlen(userString);//find length of string


printf("Length of userstring is %d\n",strlen(userString));
printf(" userstring in uppercase is %s\n",strupr(userString));//%s--for string 
printf(" userstring in lowercase is %s\n",strlwr(userString));
printf(" userstring in reverse is %s\n",strrev(userString));

return 0;
}
