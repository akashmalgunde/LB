#include<stdio.h>
#include<stdlib.h>


int CalculateAvg(int *pre,int iSize)
{
    int iSum = 0;
    for(int i = 0; i < iSize; i++)
        iSum = iSum + pre[i];
    
    return iSum / iSize;
}

int main()
{
    int iSize = 0;
    int iRet = 0;

    printf("Enter the size:\n");
    scanf("%d",&iSize);

    int *ptr = (int *)malloc(sizeof(int)*iSize);

    printf("Enter the no:\n");
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Entered  no are:\n");
    for(int i = 0; i < iSize; i++)
    {
        printf("%d",ptr[i]);
    }

    printf("\n");

    iRet = CalculateAvg(ptr,iSize);

    printf("%d\n",iRet);

    return 0;
}