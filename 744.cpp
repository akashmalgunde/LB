#include<iostream>
using namespace std;

class Number
{
    public:
    int iNo1;
    int iNo2;

    void Accept()
    {
        cout<<"Enter first no:\n";
        cin>>this->iNo1;

        cout<<"Enter second no:\n";
        cin>>this->iNo2;
    }

    bool checkMaximum()
    {
        int bRet = true;
        if(this->iNo2 > this->iNo1)
            bRet = false;

        return bRet;
}
};

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    bool bRet = false;

    Number *nobj = new Number();

    nobj->Accept();

    bRet = nobj->checkMaximum();

    if(bRet == true)
        cout<<nobj->iNo1<<"is greater\n";
    else
        cout<<nobj->iNo2<<"is greater\n";

    //cout<<bRet<<"\n";
}