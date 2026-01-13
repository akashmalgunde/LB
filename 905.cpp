#include<iostream>
using namespace std;

int getSingleDigit(int iNo)
{
    int iTemp = 0;
    int iDigit = 0;
    int iRet = 0;
    int iNewNum = 0;


    iTemp = iNo;
    while(iTemp > 9)
    {
        while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        iNewNum = iDigit + iNewNum;
        iTemp = iTemp / 10;
    }

    iTemp = iNewNum;
    iNewNum = 0;
    }

    return iTemp;
}

int main()
{
    int iNo = 0;

    cout<<"Enter the number:";
    cin>>iNo;

    int iRet = 0;

    iRet = getSingleDigit(iNo);

    cout<<iRet<<"\n";

    return 0;
}