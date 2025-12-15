#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    bRet = CheckEven(iNo);

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