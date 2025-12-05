#include<stdio.h>

typedef struct Date Date;

struct Date
{
    int iDay;
    int iMonth;
    int iYear;
};


void Accept(Date *d)
{
    d->iDay = 5;
    d->iMonth = 12;
    d->iYear = 2025;
}

void Display(Date *d)
{
    printf("%d / %d / %d \n",d->iDay,d->iMonth,d->iYear);
}

int main()
{
    Date d;

    Accept(&d);

    Display(&d);

    return 0;
}