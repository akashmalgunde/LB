#include<stdio.h>
#include<stdbool.h>

bool CheckPresence(int iNo)
{
    bool bRet = false;
    while(iNo != 0)
    {
        if(iNo % 10 == 8)
        {
            bRet = true;
            break;
        }

        iNo = iNo / 10;
    }
    
    return bRet;
}

int main()
{

    int iNo = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    bRet = CheckPresence(iNo);

    if(bRet == true)
    {
        printf("8 is present in %d\n",iNo);
    }
    else
    {
        printf("8 is not present in %d\n",iNo);
    }
    return 0;
}