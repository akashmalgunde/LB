#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    bool bRet = true;

    for(int i = 2; i <= iNo / 2; i++)
    {
        if(iNo % i == 0)
        {
            bRet = false;
            break;
        }
    }

    return bRet;
}

int main()
{
    int iNo;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    bRet = CheckPrime(iNo);

    if(bRet == true)
    {
        printf("%d is prime number\n",iNo);
    }
    else
    {
        printf("%d is not prime\n",iNo);
    }

    return 0;
}