#include<iostream>
using namespace std;

bool checkMaximum(int iNo1,int iNo2)
{
    int bRet = true;
    if(iNo2 > iNo1)
        bRet = false;

    return bRet;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    bool bRet = false;

    cout<<"Enter first no:\n";
    cin>>iNo1;

    cout<<"Enter second no:\n";
    cin>>iNo2;

    bRet = checkMaximum(iNo1,iNo2);

    if(bRet == true)
        cout<<iNo1<<"is greater\n";
    else
        cout<<iNo2<<"is greater\n";

    //cout<<bRet<<"\n";
}