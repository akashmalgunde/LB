#include<iostream>
using namespace std;

int calculateProduct(int iNo)
{
    int iDigit = 0;
    int iFact = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iFact *= iDigit;
        iNo = iNo / 10;
    }

    return iFact;
}

int main()
{

    int iNo = 0;
    //bool bRet = false;
    int iRet = 0;

    cout<<"Enter the number:";
    cin>>iNo;

    iRet = calculateProduct(iNo);

    cout<<"product of digit of"<<iNo<<"is :"<<iRet;

    return 0;
}