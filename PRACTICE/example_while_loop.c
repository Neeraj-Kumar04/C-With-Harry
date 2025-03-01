// Valid format of while loop()

// while(i!=0)
// while(i<=10||j>=10)
// while(1)--->Infinite loop
//while(true)-->Infinite loop
// <--left hand side symbol---less than
// >--right hand side symbol---greater than

#include<stdio.h>

int main()
 {
    int n=1;//loop variable

    while (n!=0)
    {
        printf("\n Enter any number(press 0 to exit):");
        scanf("%d",&n);
        printf("\n Square of the given number is %d",n*n);
    }
    printf("End of program");
    
return 0;
}