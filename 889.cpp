#include<iostream>
using namespace std;

class Number
{
    int iNo;

    public:
     Number(int iNo)
    {
        this->iNo = iNo;
    }

    int calculateFactorial(int iNo)
    {
        int iFact = 1;
        for(int i = iNo; i >= 1; i--)
        {
            iFact = iFact * i;
        }
        return iFact;
    }

    bool checkKrishnamurthy()
    {
        bool bRet = false;
        int iTemp = 0;
        int iDigit = 0;
        int iFactSum = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iFactSum = iFactSum + calculateFactorial(iDigit);
            iTemp = iTemp / 10;
        }

        if(iFactSum == this->iNo)
            bRet = true;
        
        return bRet;
    }
};

int main()
{

    int iNo = 0;
    bool bRet = false;

    cout<<"Enter the number:";
    cin>>iNo;

    Number nobj(iNo);

    bRet = nobj.checkKrishnamurthy();

    if(bRet == true)
        cout<<"Entered number is a krishnamurthy number\n";
    else
        cout<<"Entered number is not a krishnamurthy number\n";
    

    return 0;
}