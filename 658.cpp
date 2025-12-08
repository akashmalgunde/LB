#include<iostream>
using namespace std;

class Addition
{
    public:
    static int CalculateAddition(int iNo1,int iNo2)
{
    int iRet = 0;

    iRet = iNo1 + iNo2;

    return iRet;
}   

};


int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    cout<<"Enter no:\n";
    cin>>iNo1;

    cout<<"Enter no:\n";
    cin>>iNo2;

    int iRet = 0;

    iRet = Addition::CalculateAddition(iNo1,iNo2);

    cout<<iRet<<"\n";

    return 0;
}




