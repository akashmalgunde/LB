#include<stdio.h>
#include<stdlib.h>


int main()
{
    int *ptr = (int*)malloc(sizeof(int)*5);

    printf("%u\n",ptr);

    ptr = (int*)realloc(ptr,sizeof(int)*2);

    for(int i = 0; i < 7; i++)
    {
        ptr[i] = 10;
    }

    for(int i = 0; i < 7; i++)
    {
        printf("%d\t",ptr[i]);
    }

    printf("%d\n",ptr);
}