#include<iostream>
using namespace std;

bool checkEven(int iNo)
{
    //bool bRet = true;

    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
            {
                return false;
            }
        iNo = iNo / 10;
    }
    return true;
}

int main()
{
    int iNo = 0;
    //bool bRet = false;


    cout<<"Enter the number:";
    cin>> iNo;

    //bRet = checkEven(iNo);

    if(checkEven(iNo))
        cout<<"Even\n";
    else
        cout<<"Not Even\n";

    return 0;
}