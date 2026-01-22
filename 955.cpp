#include<iostream>
using namespace std;

class Number
{
    int iNo;

    public:
    Number(int i)
    {
        this->iNo = i;
    }

    bool checkDivisibleBy7()
    {
        bool bRet = false;

        if(this->iNo % 7 == 0)
            bRet = true;
        
        return bRet;
    }

    bool checkNumberContains7()
    {
        bool bRet = false;

        int iTemp = 0;
        iTemp = this->iNo;

        if(iTemp % 10 == 7)
            bRet = true;

        return bRet;
    }

    bool checkBuzz()
    {
        bool bRet = false;

        if(checkDivisibleBy7() || checkNumberContains7())
            bRet = true;
        return bRet;
    }
};


int main()
{

    Number n(25);

    if(n.checkBuzz())
        cout<<"buzz number\n";
    else
        cout<<"Not buzz\n";
    return 0;
}