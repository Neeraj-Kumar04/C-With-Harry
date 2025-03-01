//This example shows the grades of students on the basis of marks.

#include <stdio.h>

int main()
{
    int marks;

    printf("ENTER MARKS TO KNOW YOUR GRADE:");
    scanf("%d",&marks);

    if (marks >= 90)
    {
        printf("Grade A+");
    }
    else if (marks >= 80)
    {
        printf("Grade A");
    }
    else if (marks >= 70)
    {
        printf("Grade B+");
    }
    else if (marks >= 60)
    {
        printf("Grade B");
    }
    else if (marks >= 50)
    {
        printf("Grade C");
    }
    else if (marks >= 40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F(FAIL)-->DO HARDWORK");
    }
    return 0;
}