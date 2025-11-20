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
    int Arr[5] = {2,3,5,7,25};
    bool bRet = false;

    for(int i = 0; i < 5; i++)
    {
        bRet = CheckPrime(Arr[i]);

        if(bRet == true)
        {
            printf("%d is prime\n",Arr[i]);
        }
    }

    return 0;
}