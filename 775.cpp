#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo1;
        int iNo2;
    public:

    Number(int iNo1,int iNo2)
    {
        this->iNo1 = iNo1;
        this->iNo2 = iNo2;
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

    cout<<"Enter the num1:\n";
    cin>>iNo1;

    cout<<"Enter the num2:\n";
    cin>>iNo2;

    Number *nobj = new Number(iNo1,iNo2);

    iAns = nobj->CheckNum();

    cout<<"Bigger from two is :"<<iAns;


    return 0;
}