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

    int checkCount()
    {
        int iDigit = 0;
        int iTemp = 0;
        int iCnt = 0;

        iTemp = this->iNo;
        
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(checkPrime(iDigit))
            {
                iCnt++;
            }
            iTemp = iTemp / 10;
        }

        return iCnt;
    }
};

int main()
{


    Digit d(23448);

    cout<<d.checkCount()<<"\n";

    return 0;
}