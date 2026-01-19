#include<iostream>
using namespace std;

class Numbers
{
    int iNo;

    public:
    Numbers(int iNo)
    {
        this->iNo = iNo;
    }

    int calculateSum()
    {
        //cout<<"in calculateSum\n";
        int iTemp = 0;
        int iDigit = 0;
        int iSum = 0;

        iTemp = this->iNo;
        
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp / 10;
        }

        return iSum;
    }

    bool checkHarshad()
    {
        //cout<<"in cheeckHarshad\n";
        int iSum = 0;
        bool bRet = false;

        iSum = calculateSum();

        if(this->iNo % iSum == 0)
            bRet = true;
        
        return bRet;
    }
};

int main()
{
    int iNo = 0;

    cout<<"Enter the number:";
    cin>>iNo;

    Numbers nobj(iNo);

    if(nobj.checkHarshad())
        cout<<"Number is Harshad\n";
    else
        cout<<"Number is not Harshad\n";
}