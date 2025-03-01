//do-while:-post-condition(exit level)test loop
// do-while loop-->will execute run at least once.
// syntax:
// do
// {
//     /* code */
// } while (/* condition */);

#include<stdio.h>

int main() {
    int x=0;
do
{
    printf("Hello do-while loop");
} while (x!=0);
printf("\n Good Bye");
return 0;
}