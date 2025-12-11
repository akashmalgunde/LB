#include<stdio.h>


void mystrcpy(char *dest,char * src)
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

struct Date
{
    int iDay;
    int iMonth;
    int iYear;
    char cDOW[20];
};

int main()
{
  
    struct Date d;

    d.iDay = 20;
    d.iMonth = 12;
    d.iYear = 2025;
    mystrcpy(d.cDOW,"thursday");

    printf("%s\n",d.cDOW);

    return 0;
}