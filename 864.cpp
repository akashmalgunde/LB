#include<iostream>
using namespace std;

int calSquare(int iNo)
{
    int iSquare = 0;
    iSquare = iNo * iNo;
    return iSquare;
}

int calSumDigit(int iNo)
{
     int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iDigit + iSum;
        iNo = iNo / 10;
    }

    return iSum;
}

bool checkNeon(int iNo)
{
    int iSquare = 0;
    bool bRet = false;
    int iSum = 0;

    iSquare = calSquare(iNo);

    iSum = calSumDigit(iNo);

    if(iSum == iNo)
        bRet = true;

    return bRet;
}

int main()
{
    int iNo = 0;
    bool bRet = false;

    cout<<"Enter the no:";
    cin>>iNo;

    bRet = checkNeon(iNo);

    if(bRet == true)
        cout<<iNo<<"is a neon number\n";
    else
        cout<<iNo<<"is not a neon number\n";

    return 0;
}