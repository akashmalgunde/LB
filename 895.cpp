#include<iostream>
using namespace std;

bool checkPerfect(int iNo)
{
    int i = 0;
    bool bRet = false;
    int iSquare = 0;

    while(iSquare < iNo)
    {
        iSquare = i * i;
        i++;
    }

    if(iSquare == iNo)
    {
        bRet = true;
    }

    return bRet;
}

int main()
{
    int iNo = 0;
    bool bRet = false;

    cout<<"Enter the number:\n";
    cin>>iNo;

    bRet = checkPerfect(iNo);

    if(bRet == true)
        cout<<iNo<<"is perfect square\n";
    else
        cout<<iNo<<"is not perfect square"<<"\n";

    return 0;
}