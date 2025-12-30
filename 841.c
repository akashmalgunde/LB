#include<stdio.h>

int checkMax(int iNo)
{
    int iMax = 0;
    while(iNo != 0)
    {
        if(iMax < iNo % 10)
        {
            iMax = iNo % 10;
            if(iMax == 9)
                break;
        }
        iNo = iNo / 10;
    }
    return iMax;
}

int main()
{
    int iNo = 0;
    printf("Enter the no:");
    scanf("%d",&iNo);

    int iRet = checkMax(iNo);

    printf("%d\n",iRet);

    return 0;
}