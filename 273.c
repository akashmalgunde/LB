#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    bool bValue = false;

    if(iNo % 2 == 0)
    {
        bValue = true;
    }
    
    return bValue;
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