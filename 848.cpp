#include<iostream>
using namespace std;

int calSum(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iDigit + iSum;
        iNo = iNo / 10;
    }

    return iSum;
}

int main()
{
    int iNo = 0;

    cout<<"Enter the no:";
    cin>>iNo;

    cout<<calSum(iNo);

    return 0;
}