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


    //cout<<"Enter the number:\n";
    //cin>>iNo;
    //cout<<iNo;

    int Arr[] = {2,3,5,9,11,17};

    for(int i = 0; i < 6; i++)
    {
        bRet = checkPrime(Arr[i]);

        if(bRet == true)
            cout<<Arr[i]<<"is prime\n";
        else
            cout<<Arr[i]<<"is not prime\n";
    }

    //cout<<

    return 0;
}