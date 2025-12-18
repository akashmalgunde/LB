#include<stdio.h>
#include<stdlib.h>

void CallFun()
{
    int *ptr;

    ptr= (int *)malloc(sizeof(int)*5);

    printf("%u\n",ptr);

    ptr = realloc(ptr,sizeof(int)*500000);

    printf("%u\n",ptr);

    free(ptr);
}

int main()
{
    for(int i = 0; i <= 5000000; i++)
    {
        CallFun();
    }


    return 0;
}