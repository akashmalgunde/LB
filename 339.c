#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iSize = 0;
    int iCnt = 250000000;

    printf("enter the size of array:\n");
    scanf("%d",&iSize);

    printf("Start\n");
    for(int i = 0; i <= iCnt; i++)
    {
    
        int *ptr = (int*)malloc(sizeof(int) *iSize);
        printf("\n------------------------\n");
        printf("%u\n",ptr);

        ptr = (int*)realloc(ptr,sizeof(int)*500);

        printf("%u\n",ptr);
        printf("\n------------------------\n");

        free(ptr);

    }

    printf("End\n");

    return 0;
}