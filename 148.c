#include<stdio.h>

void Sun()
{
    int *sun = 6422296;

    *sun = 25;
}

int main()
{
    int iNo = 10;

    int *ptr = NULL;

    ptr = &iNo;

    Sun();

    printf("%d\n",ptr);
    printf("%d\n",&iNo);

    printf("%d\n",iNo);
    printf("%d\n",*ptr);



    return 0;
}