#include <stdio.h>
/*
Solve problem 9 for time using ‘typedef’ keyword
*/
typedef struct Date
{
    int mm;
    int dd;
    int yyyy;
} DT;

int compare(DT d1, DT d2)
{
    // if d1 is in the future,return 1
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }

    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }

    else if (d1.mm < d2.mm)
    {
        return -1;
    }

    else if (d1.dd > d2.dd)
    {
        return 1;
    }

    else if (d1.dd < d2.dd)
    {
        return -1;
    }
}

int main()
{
    DT d1 = {16, 9, 2004};
    DT d2 = {15, 9, 2022};
    printf("%d", compare(d1, d2));
    return 0;
}