#include<iostream>
using namespace std;

class Number
{
    public:
    static int CheckNum(int iNo1,int iNo2)
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

    iAns = Number::CheckNum(iNo1,iNo2);

    cout<<"Bigger from two is :"<<iAns;


    return 0;
}