#include<stdio.h>
#include<stdbool.h>

bool checkPerfect(int iNo)
{
    int iSum = 0;
    bool bRet = false;
    for(int i = 1; i <= iNo / 2; i++)
    {
        if(iNo % i == 0)
            iSum = iSum + i;
    }

    if(iSum == iNo)
        bRet = true;

    return bRet;
}



int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter the number:");
    scanf("%d",&iNo);

    bRet = checkPerfect(iNo);

    if(bRet == true)
        printf("%d is perfect\n",iNo);
    else
        printf("%d is not perfect\n",iNo);


    return 0;
}