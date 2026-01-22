#include<iostream>
using namespace std;

class Digit
{

    public:
    int iNo;

    public:
    Digit(int i)
    {
        this->iNo = i;
    }

    bool checkDigits()
    {
        int iTemp = 0;

        iTemp = this->iNo;

        bool bRet = true;

        int iDigit = 0;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit % 2 != 0)
            {
                bRet = false;
                break;
            }
            iTemp = iTemp / 10;
        }

        return bRet;
    }
};


int main()
{
    Digit d(25);

    //cout<<d.iNo<<"\n";

    if(d.checkDigits())
        cout<<"even";
    else
        cout<<"not even";


    return 0;


}