#include<iostream>
using namespace std;

int calSum(int *Arr,int iSize)
{
    int iSum = 0;
    for(int i = 0; i < iSize; i++)
        iSum = iSum + Arr[i];

    return iSum;
}

int main()
{
    int Arr[] = {2, 4, 6, 8};
    int iRet = calSum(Arr,4);
    cout<<iRet;
    return 0;
}