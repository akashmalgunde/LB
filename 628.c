#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = (int*)malloc(4);

    printf("%u\n",ptr);

    return 0;
}