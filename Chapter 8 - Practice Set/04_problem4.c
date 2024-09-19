#include <stdio.h>
/*
Write a function slice() to slice a string. It should change the original string such
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
for slice.

*/
// Function to slice a string in place
void slice(char str[], int m, int n)
{
    int i = 0;

    // Shift characters from position m to the beginning of the array
    while (m + i <= n && str[m + i] != '\0') // Ensure we stay within bounds
    {
        str[i] = str[m + i];
        i++;
    }

    // Terminate the sliced string
    str[i] = '\0';
}

int main()
{
    char str[] = "Hello, World!";
    int m = 7;  // Start position for the slice
    int n = 11; // End position for the slice

    // Call the slice function
    slice(str, m, n);

    // Print the modified string
    printf("Sliced string: %s\n", str); // Expected output: "World"

    return 0;
}
