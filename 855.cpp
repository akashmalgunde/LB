#include<iostream>
using namespace std;

bool checkPositive(int iNo)
{
    bool bRet = true;

    if(iNo < 0)
    {
        bRet = true;
    }

    return bRet;
}

int main()
{
    int iNo = 0;
    bool bRet = false;

    cout<<"Enter the number:";
    cin>>iNo;

    bRet = checkPositive(iNo);

    if(bRet == true)
        cout<<"Entered number is positive"<<iNo;
    else
        cout<<"Entred number is not positive"<<iNo;

    return 0;
}