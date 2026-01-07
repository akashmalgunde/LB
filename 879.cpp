#include<iostream>
using namespace std;

int checkIndex(int *iArr,int iSize,int iElement)
{
    int iIndex = -1;

    for(int i = 0; i < iSize; i++)
        if(iArr[i] == iElement)
        {
            iIndex = i;
            break;
        }
    return iIndex;
}

int main()
{
    int iArr[] = {5,3,7,3,9};

    int iRet = 0;

    iRet = checkIndex(iArr,5,30);

    if(iRet != -1)
        cout<<"Element found at "<<iRet<<"index\n";
    else
        cout<<"Elemets is not found in an array\n";

    return 0;
}