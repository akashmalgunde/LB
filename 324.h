#include<stdio.h>

extern int No;

void Fun1()
{
    printf("%d\n",No);
    printf("Inside the Fun1\n");
}

void Fun2()
{
    printf("Inside the Fun2\n");
}

void Fun3()
{
    printf("Inside the Fun3\n");
}