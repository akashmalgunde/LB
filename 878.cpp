#include<iostream>
using namespace std;

int calSum(int iNo)
{
    int iSum = 0;
    while(iNo != 0)
    {
        iSum = iSum + iNo % 10;
        iNo = iNo / 10;
    }

    return iSum;
}

bool checkHarshad(int iNo)
{
    bool bRet = false;
    int iSum = 0;
    
    iSum = calSum(iNo);

    if(iNo % iSum == 0)
        bRet = true;
    
    return bRet;
}

int main()
{
    int iNo = 0;
    bool bRet = false;

    cout<<"Enter the number:";
    cin>>iNo;

    bRet = checkHarshad(iNo);

    if(bRet == true)
        cout<<iNo<<"is a harshad number\n";
    else
        cout<<iNo<<"is not a harshad number\n";

    return 0;
}