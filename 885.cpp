#include<iostream>
using namespace std;

int checkMin(int *iArr,int iSize)
{
    int iMin = iArr[0];
    for(int i = 1; i < iSize; i++)
    {
        if(iArr[i] < iMin)
            iMin = iArr[i];
    }
    return iMin;
}

int checkMax(int *iArr,int iSize)
{
    int iMax = 0;
    iMax = iArr[0];
    for(int i = 1; i < iSize; i++)
    {
        if(iMax < iArr[i])
            iMax = iArr[i];
    }

    return iMax;
}

int calDiff(int *iArr,int iSize)
{
    int iMin = 0;
    int iMax = 0;
    int iDiff = 0;

    iMin = checkMin(iArr,iSize);
    iMax = checkMax(iArr,iSize);

    iDiff = iMax - iMin;

    return iDiff;

}

int main()
{

    int iArr[] = {10,3,25,7};
    
    int iDiff = calDiff(iArr,4);

    cout<<"Difference is :"<<iDiff;

    return 0;
}