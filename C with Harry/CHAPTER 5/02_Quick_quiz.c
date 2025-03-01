/*
Quick Quiz: Write a program with three functions
1. Good morning function which prints “good morning”.
2. Good afternoon function which prints “good afternoon”.
3. Good night function which prints “good night”.
main() should call all of these in order 1→2→3
*/

#include <stdio.h>
void good_morning(); // Function prototype-->Tells compiler  about a function that
                     // will be defined later in program

void good_afternoon(); // Function prototype
void good_evening();   // Function prototype

void good_morning() // Function definition
{
    printf("good_morning \n"); // function body
}

void good_afternoon() // Function definition
{
    printf("good_afternoon \n");
}

void good_evening() // Function definition
{
    printf("good_evening \n");
}

int main()
{
    good_morning();   // function call
    good_afternoon(); // function call
    good_evening();   // function call
    return 0;
}