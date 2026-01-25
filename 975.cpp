#include<iostream>
using namespace std;

int calculateSum(int *iArr,int iSize)
{
    int iSum = 0;
    for(int i = 0; i < iSize; i++)
    {
        iSum = iArr[i] + iSum;
    }

    return iSum;
}

int main()
{
    int iArr[] = {2, 4, 6, 8};

    int iRet = 0;

    iRet = calculateSum(iArr,4);

    cout<<iRet<<"\n";

    return 0;
}