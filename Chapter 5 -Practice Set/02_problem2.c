#include <stdio.h>
// Write a function to convert Celsius temperature into Fahrenheit.

float c2f(float); // function prototype

float c2f(float c) // function definition
{
    return ((9 * c) / 5) + 32;
}

int main()
{
    float c = 88;
    printf("Celcius to Farenheit for %f is %.2f", c, c2f(c)); // function call

    return 0;
}