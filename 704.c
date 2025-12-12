#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOrOdd(int iNo)
{
    bool bRet = false;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 == 0)
        bRet = true;

    return bRet;
}

int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter the no:\n");
    scanf("%d",&iNo);

    bRet = CheckEvenOrOdd(iNo);

    if(bRet == true)
    {
        printf("%d is Even\n",iNo);
    }
    else
    {
        printf("%d is Odd\n",iNo);
    }


    return 0;
}