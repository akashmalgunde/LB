#include<stdio.h>

int main()
{
    int iNo = 10;

    register iNo1 = 25;

    printf("%u",&iNo);

    printf("%u",&iNo1);

    return 0;
}