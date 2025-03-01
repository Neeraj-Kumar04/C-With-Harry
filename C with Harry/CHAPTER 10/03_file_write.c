#include <stdio.h>

int main()
{
    FILE *fptr;
    // fptr = fopen("neeraj.txt", "w"); // write mode firstly empty the file and then write into the file
    fptr = fopen("neeraj.txt", "a"); // a--append mode ,add the value at the end of line
    int num = 555;
    fprintf(fptr, "%d", num); // write into file-->neeraj.txt
    fclose(fptr);
    return 0;
}