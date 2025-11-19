#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo)
{
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
        {
            return true;
            break;
        }
        iNo = iNo / 10;
    }

    return false;

}

int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    bRet = CheckDigit(iNo);

    if(bRet == true)
    {
        printf("8 is present in number\n");
    }
    else
    {
        printf("8 is not present in number\n");
    }

    return 0;
}