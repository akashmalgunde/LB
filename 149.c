#include<stdio.h>

int main()
{
    int iNo = 10;

    char ch = 'a';

    char *cptr = &ch;
    int *ptr = &iNo;

    printf("%d\n",*ptr);
    printf("%d\n",*cptr);
}
