#include <stdio.h>
/*
Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2

*/
float force(float); // function prototype

float force(float mass) // function definition with body
{
    return mass * 9.8;
}
int main()
{
    float m = 45;
    printf("The value of force is %.2f\n", force(m)); // function call
    return 0;
}