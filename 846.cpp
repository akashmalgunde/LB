#include<iostream>
using namespace std;

bool checkPrime(int iNo)
{
    bool bRet = true;

    for(int i = 2; i <= iNo / 2; i++)
    {
        if(iNo % i == 0)
        {
            bRet = false;
            break;
        }
    }

    return bRet;
}

int main()
{
    int iNo = 0;
    bool bRet = false;


    cout<<"Enter the number:\n";
    cin>>iNo;
    //cout<<iNo;

    bRet = checkPrime(iNo);

    if(bRet == true)
        cout<<iNo<<"is prime\n";
    else
        cout<<iNo<<"is not prime\n";

    //cout<<

    return 0;
}