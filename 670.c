#include<stdio.h>

int CalculateSum(int iNo)
{
    int iDigit = 0;
    int iMax = 0;

    while(iNo != 0)
    {

        printf("Coming inside\n");
        iDigit = iNo % 10;

        if(iMax < iDigit)
            iMax = iDigit;
        
        if(iMax == 9)
            break;
        iNo = iNo / 10;
    }

    return iMax;


}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the no:\n");
    scanf("%d",&iNo);

    iRet = CalculateSum(iNo);

    printf("%d\n",iRet);

    return 0;
}