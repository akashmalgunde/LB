#include<stdio.h>

void findMinMax(int *iArr,int iSize,int *iMin,int *iMax)
{
    *iMin = iArr[0];
    *iMax = iArr[0];
    for(int i = 1; i < iSize; i++)
    {
        if(*iMin > iArr[i])
            *iMin = iArr[i];
        else if(*iMax < iArr[i])
            *iMax = iArr[i];
    }
}

int main()
{

    int iArr[] = {7, 2, 9, 4};
    int iMin = 0;
    int iMax = 0;

    //printf("Enter the number:\n");
    //scanf("%d",&iNo);

    findMinMax(iArr,4,&iMin,&iMax);

    printf("%d is minimum\n",iMin);

    printf("%d is maximum\n",iMax);

    return 0;
}