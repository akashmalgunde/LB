#include<stdio.h>

void CalculateSum(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    while(iNo != 0)
    {

        printf("Coming inside\n");
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
            iEvenSum = iEvenSum + iDigit;
        
        else
            iOddSum = iOddSum + iDigit;
         
        iNo = iNo / 10;
    }

    printf("%d is even sum\n",iEvenSum);
    printf("%d is oddsum \n",iOddSum);


}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the no:\n");
    scanf("%d",&iNo);

    CalculateSum(iNo);

    //printf("%d\n",iRet);

    return 0;
}