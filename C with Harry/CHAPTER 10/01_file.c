#include <stdio.h>
/*Following modes are primarily used in C File I/O.
"r" -> open for reading
"rb" -> open for reading in binary
"w" -> open for writing // If the file exists, the contents will be
overwritten
"wb" -> open for writing in binary
"a" -> open for append // If the file does not exist, it will be created
*/
int main()
{
    FILE *ptr;
    ptr = fopen("neeraj.txt", "r");
    int num;
    fscanf(ptr, "%d", &num); // read from file-->neeraj.txt
    printf("The value of num is %d \n", num);

    fscanf(ptr, "%d", &num); // read from file-->neeraj.txt and prints the value
    printf("The value of num is %d \n", num);
    fclose(ptr);
    return 0;
}