#include<iostream>
using namespace std;

class Digits
{
    int iNo;

    public:
    Digits(int i)
    {
        this->iNo = i;
    }

    int countZero()
    {
        int iTemp = 0;
        int iDigit = 0;
        int iCnt = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit == 0)
                iCnt++;
            iTemp = iTemp / 10;
        }

        return iCnt;
    }
};

int main()
{

    Digits d(100200);

    cout<<d.countZero()<<"\n";


    return 0;
}