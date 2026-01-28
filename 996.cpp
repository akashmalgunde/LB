#include<iostream>
using namespace std;

class Number
{
    int iNo;

    public:
    Number(int n)
    {
        this->iNo = n;
    }

    int calculateFactorial(int i)
    {
        int iFact = 1;
        for(int j = 2; j <= i; j++)
            iFact = iFact * j;

        return iFact;
    }

    bool checkPeterson()
    {
        int iTemp = 0;
        int iDigit = 0;
        int iSum = 0;
        bool bRet = false;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            iSum = iSum + calculateFactorial(iDigit);

            iTemp = iTemp / 10;
        }

        if(iSum == this->iNo)
            bRet = true;

        return bRet;
    }
};


int main()
{

    Number nobj(145);

    if(nobj.checkPeterson())
        cout<<"Peterson\n";
    else
        cout<<"Not Peterson\n";

    return 0;
}