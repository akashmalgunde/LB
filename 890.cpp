#include<iostream>
using namespace std;

int checkSecondMax(int *iArr,int iSize)
{
    int iMax1 = 0;
    int iMax2 = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(iArr[i] > iMax1)
        {
            iMax2 = iMax1;
            iMax1 = iArr[i];
        }
    }

    return iMax2;
}

int main()
{
    int iArr[] = {10,5,20,8,12};
    int iRet = 0;

    iRet = checkSecondMax(iArr,5);

    cout<<iRet<<"\n";

    return 0;
}