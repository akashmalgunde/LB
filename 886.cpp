#include<iostream>
using namespace std;

bool checkEven(int iNo)
{
    bool bRet = true;

    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
            {
                bRet = false;
                break;
            }
        iNo = iNo / 10;
    }
    return bRet;
}

int main()
{
    int iNo = 0;
    bool bRet = false;


    cout<<"Enter the number:";
    cin>> iNo;

    bRet = checkEven(iNo);

    if(bRet == true)
        cout<<"Even\n";
    else
        cout<<"Not Even\n";

    return 0;
}