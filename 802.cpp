#include<iostream>
using namespace std;

bool LinearSearch(int *Arr,int iSize,int iElement)
{
    bool bRet = false;
    int iCnt = 0;

    for(int i = 0; i < iSize; i++)
    {
        iCnt++;
        if(Arr[i] == iElement)
        {
            bRet = true;
            break;
        }

    }

    cout<<"Total iterations are : "<<iCnt<<"\n";

    return bRet;
}

int main()
{
    int Arr[] = {12,28,35,40,45,60};

    bool bRet = LinearSearch(Arr,6,60);

    if(bRet == false)
        cout<<"Not there in array\n";
    else
        cout<<"Present in array\n";
    return 0;
}