#include<stdio.h>
#include<stdlib.h>

int main()
{

    int *ptr = (int*)calloc(sizeof(int),5);

    printf("%u\n",ptr);

    ptr = realloc(ptr,1000000);

    printf("%u\n",ptr);

    return 0;
}