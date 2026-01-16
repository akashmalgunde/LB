#include<stdio.h>

int checkSmall(int iNo)
{
    int iMin = 9;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
            //printf("%d  ",iMin);
            if(iMin == 0)
                break;
        }
        iNo = iNo / 10;
    }

    return iMin;
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