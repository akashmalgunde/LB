#include<iostream>
using namespace std;

int main()
{
    int Arr[] = {2, 4, 6, 8};
    int iSize = 4;
    int iSum = 0;

    for(int i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    iSum = iSum / iSize;

    cout<<iSum;

    return 0;
}