#include<iostream>
using namespace std;

bool checkPresence(int iNo)
{
    bool bRet = false;
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 9)
        {
            bRet = true;
            break;
        }
        iNo = iNo / 10;
    }

    return bRet;
}

void iterateArray(int *iArr,int iSize)
{
    bool bRet = false;
    for(int i = 0; i < iSize; i++)
    {
        bRet = checkPresence(iArr[i]);
        if(bRet == true)
            cout<<iArr[i]<<"\n";
    }
}

int main()
{
    int iArr[] = {5151,51,5658,898,81515,5959,5988};

    iterateArray(iArr,7);

    return 0;
}