#include<stdio.h>

int Display(int a, int b)
{
    return 0;
}

int main()
{
    int iNo = 10;

    char ch = 'c';

    //int *ptr = &ch;

    //printf("%u\n",ptr);

    //printf("%u\n",ptr+0);

    //printf("%c\n",*ptr);

    printf("%u\n",Display);

    int (*ptr)(int,int);

    ptr = Display;

    printf("%d\n",ptr(2,3));



    return 0;
}