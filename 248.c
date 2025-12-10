#include<stdio.h>
#include<stdlib.h>

void allocateheapmemory()
{
    printf("Start\t");
    int *ptr = (int*)malloc(sizeof(int)*13512131);
    ptr[0] = 10;

    printf("%d\t",ptr[0]);

    printf("%u\t",ptr);

    free(ptr);

    printf("End\n");

}

int main()
{
    for(int i = 1; i <= 6; i++)
    {
        printf("%d",i);
        allocateheapmemory();
    }

    return 0;
}