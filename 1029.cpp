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

    bool checkPresence()
    {
        bool bRet = false;

        if(this->iNo % 10 == 7)
            bRet = true;
        
        return bRet;
    }

    bool checkDivisibility()
    {
        bool bRet = false;

        if(this->iNo % 7 == 0)
            bRet = true;

        return bRet;
    }

    bool checkBuzz()
    {
        bool bRet = false;
        if(checkDivisibility() || checkPresence())
            bRet = true;

        return bRet;
    }
};

int main()
{

    Number n(17);

    if(n.checkBuzz())
        cout<<"Buzz\n";
    else
        cout<<"Not Buzz\n";

    Number *n1 = new Number(21);

    if(n1->checkBuzz())
        cout<<"Buzz\n";
    else
        cout<<"Not Buzz\n";
    return 0;
}