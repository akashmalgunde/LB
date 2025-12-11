#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iSize = 5;

    int *ptr = (int*)malloc(sizeof(int)*iSize);

    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",ptr[i]);
    }
    
    return 0;
}