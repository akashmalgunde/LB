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

    int swap()
    {
        int iLast = 0;
        int iFirst = 0;
        int iNewNum = 0;

        iLast = this->iNo % 10;
        iFirst = this->iNo % 4;

        int iMiddle = 0;

        iMiddle = this->iNo / 10;
        iMiddle = iMiddle % 1000;

        cout<<"Middle part:"<<iMiddle<<"\n";

        iNewNum = iLast * 1000;
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