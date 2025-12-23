#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iSize = 0;

    printf("enter the size of array:\n");
    scanf("%d",&iSize);
    
    int *ptr = (int*)malloc(sizeof(int) *iSize);

    printf("%u\n",ptr);

    ptr = (int*)realloc(ptr,sizeof(int)*5);

    printf("%u\n",ptr);


    return 0;
}