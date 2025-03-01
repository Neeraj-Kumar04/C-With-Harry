#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Gnerate random number between 1 to 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    // Print the random number
    // printf("Random Number:%d\n", randomNumber);
    printf("WELCOME TO THE WORLD OF GUESSING NUMBER GAME!!\n");
    printf("This Game is Developed By:- NEERAJ KUMAR\n\n");

    do
    {
        printf("Guess the number:");
        scanf("%d", &guessed_number);
        if (guessed_number > randomNumber)
        {
            printf("Lower Number Please!\n");
        }
        else if (guessed_number < randomNumber)
        {
            printf("Higher Number Please!\n");
        }
        else
        {
            printf("Congrats!!\n");
        }
        no_of_guesses++;
    } while (guessed_number != randomNumber);
    printf("You Guessed the Number in %d guesses", no_of_guesses);
    
    getch();
    return 0;
}