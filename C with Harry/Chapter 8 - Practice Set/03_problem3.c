#include <stdio.h>
#include <string.h>
/*
Write your own version of strlen function from <string.h>
*/

// Custom strlen function
int my_strlen(char str[])
{
    int i = 0;
    // Loop through the string until the null character is found
    while (str[i] != '\0')
    {
        i++;
    }
    return i; // Return the length of the string
}

int main()
{
    char str[] = "Neeraj bhai";
    printf("%d", my_strlen(str)); // Calling the custom strlen function
    return 0;
}
