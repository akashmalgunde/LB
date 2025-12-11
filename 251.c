#include<stdio.h>

int main()
{
    int iNo = 252;

    char *ptr = &iNo;

    printf("%d\n",*ptr);

    return 0;
}