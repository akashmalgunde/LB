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

int Count(int *Arr,int iSize)
{
    int iCnt = 0;
    bool bRet = false;
    for(int i = 0; i < iSize; i++)
    {
        bRet = CheckPresence(Arr[i]);

        //printf("%d for %d\n",bRet,Arr[i]);

        if(bRet == true)
        {
            iCnt++;
        }
    }

    return iCnt;
}

int main()
{

    int Arr[] = {10,28,88,98};
    int iRet = 0;

    iRet = Count(Arr,4);
 
    printf("%d are the count of number in which 8 is present\n",iRet);

    return 0;
}