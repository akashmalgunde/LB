#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            iCount = iCount + 1;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iNo = 0;
    int iCount = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iCount = CountOdd(iNo);

    printf("%d is the Count of odd digit in %d\n",iCount,iNo);

    return 0;
}