#include<stdio.h>

void Check()
{
    int n = 1000;

    for(int i = 1; i <= n; i++)
    {
        int iTemp = i;
        int iOrig = i;
        int iDigit = 0;
        int iCnt = 0;
        int iArmstrong = 0;

        while(iTemp != 0)
        {
            iCnt++;
            iTemp = iTemp / 10;
        }
        while( iOrig != 0)
        {
            int iSquare = 1;
            iDigit = iOrig % 10;
            for(int j = 1; j <= iCnt; j++)
            {
                iSquare = iSquare * iDigit;
            }
            iArmstrong = iArmstrong + iSquare;
            iOrig = iOrig / 10;
        }

        if(iArmstrong == i)
        {
            printf("%d\n",i);
        }
}
}

int main()
{
    
    Check();

    return 0;
}