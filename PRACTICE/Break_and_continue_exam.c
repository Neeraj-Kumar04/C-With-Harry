#include <stdio.h>

int main()
{
    int num;
    while (1) // always true
    {
        printf("\n\nEnter a number(<=100) to find its square:");
        printf("\nPress 0 to EXIT:");
        scanf("%d",&num);
        if (num == 0)
        {
            printf("\n Program End.Thank You");
            break;
        }
        else if (num >100)
        {
            printf("\nYou Enter number greater than 100:TRY AGAIN");
            continue;
        }
        printf("\nSquare of %d is %d", num, (num * num));
    } // end of while

    return 0;
}