#include<stdio.h>

int checkSmall(int iNo)
{
    int iMax = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
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
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = checkSmall(iNo);

    printf("%d ",iRet);



    return 0;
}