#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = (int*)malloc(sizeof(int)*5);

    for(int i = 0; i < 5; i++)
    {
        scanf("%d\t",&ptr[i]);
    }
    printf("%u\n",ptr);
    printf("\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d\t",ptr[i]);
    }
    printf("\n");

    ptr = (int*)realloc(ptr,sizeof(int)*10);
    printf("%u\n",ptr);

    return 0;
}