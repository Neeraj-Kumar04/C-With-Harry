 //IN this example we are checking independent statemnt,
 //which is not defined with curly braces
 
 #include<stdio.h>
 
 int main() {
 int x;
 printf("enter a number:");
 scanf("%d",&x);
 if (x==1)
 {
    printf("HELLO \n");//statemnt 1
    printf("Programmers \n");//statement 2

 }
 else
 
    printf("Good Bye\n");//statemnt 3
    printf("Friends.\n");//statemnt 4>>independent statemnt
 
 
 return 0;
 }