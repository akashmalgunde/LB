#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo1;
        int iNo2;
    public:

    /*Number()
    {
        this->iNo1 = iNo1;
        this->iNo2 = iNo2;
    }*/

    void Accept()
    {
        cout<<"Enter the num1:\n";
        cin>>this->iNo1;

        cout<<"Enter the num2:\n";
        cin>>this->iNo2;
    }

    int CheckNum()
    {
        if(iNo1 > iNo2)
        {
            return iNo1;
        }

        return iNo2;
    }  
};


int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iAns = 0;

    Number *nobj = new Number();

    nobj->Accept();

    iAns = nobj->CheckNum();

    cout<<"Bigger from two is :"<<iAns;


    return 0;
}