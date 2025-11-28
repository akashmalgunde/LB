#include<stdio.h>

void main()
{
    int iYear = 0;

    printf("Enter the year : \n");
    scanf("%d",&iYear);

    if(iYear % 4 == 0)
    {
        printf("%d is a leap year\n",iYear);
    }
    else
    {
        printf("%d is not a leap year\n",iYear);
    }
}