#include<iostream>
using namespace std;

class Digit
{
    int iNo;

    public:
    Digit(int n)
    {
        this->iNo = n;
    }

    int countDigit()
    {
        int iTemp = 0;
        int iCnt = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iTemp = iTemp / 10;
            iCnt++;
        }

        return iCnt;
    }

    int calculatePower(int iCnt)
    {
        int iPower = 1;
        for(int i = 1; i <= iCnt; i++)
        {
            iPower = iPower * 10;
        }

        return iPower;
    }

    int swap()
    {
        int iLast = 0;
        int iFirst = 0;
        int iNewNum = 0;

        cout<<calculatePower(4)<<"\n";
        cout<<countDigit();

        iLast = this->iNo % 10;
        iFirst = this->iNo % (countDigit() - 2);

        int iMiddle = 0;

        iMiddle = this->iNo / 10;
        //iMiddle = iMiddle % calculatePower(countDigit() - 2);

        cout<<"Middle part:"<<iMiddle<<"\n";

        iNewNum = iLast * calculatePower(countDigit()-2);
        iNewNum = iNewNum + iMiddle;
        iNewNum = iNewNum * 10;
        iNewNum = iNewNum + iFirst;

        return iNewNum;
    }
};

int main()
{

    int iNo = 0;
    cout<<"Enter the number:";
    cin>>iNo;

    Digit dobj(iNo);

    cout<<dobj.swap()<<"\n";
    return 0;
}