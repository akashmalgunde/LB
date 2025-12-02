#include<stdio.h>

int main()
{
    int iNo = 10;

    char ch = 'c';

    double dNo = 2.25;

    void *ptr = NULL;

    ptr = &iNo;

    printf("%d\n",*(int *)ptr);
}