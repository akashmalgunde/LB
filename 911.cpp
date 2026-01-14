#include<iostream>
using namespace std;

int calculatefactorial(int iNo)
{
    int iFact = 1;
    for(int i = 1; i <= iNo; i++)
    {
        iFact *= i;
    }

    return iFact;
}

bool checkStrong(int iNo)
{
    int iTemp = 0;
    int iDigit = 0;
    int iSum = 0;
    bool bRet = false;

    iTemp = iNo;

    while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        iSum = iSum + calculatefactorial(iDigit);
        iTemp = iTemp / 10;
    }

    if(iSum == iNo)
        bRet = true;

    return bRet;

}

int main()
{

    int iNo = 0;
    bool bRet = false;

    cout<<"Enter the number:";
    cin>>iNo;

    bRet = checkStrong(iNo);

    if(bRet == true)
        cout<<iNo<<" number is strong number\n";
    else
        cout<<iNo<<" number is not strong number\n";

    return 0;
}