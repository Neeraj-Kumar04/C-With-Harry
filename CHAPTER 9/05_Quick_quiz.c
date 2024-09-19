#include <stdio.h>
#include <string.h>
/*
Quick Quiz: Complete this show function to display the content of employee.
void show(struct employee e); // function prototype
*/
struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

void show(struct employee e); // Function Prototype

void show(struct employee e)
{
    printf("Code is %d\n Salary is %f\n Nmae is %s\n", e.code, e.salary, e.name);
}

int main()
{
    struct employee e1, e2;
    e1.code = 4511;
    strcpy(e1.name, "Neeraj");
    e1.salary = 50000;
    show(e1);

    return 0;
}