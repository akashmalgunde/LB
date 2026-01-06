#include<iostream>
using namespace std;

int calculateProduct(int iNo)
{
    int iProduct = 1;
    while(iNo != 0)
    {
        //cout<<"Coming inside\n";
        iProduct = iProduct * (iNo % 10);
        iNo = iNo / 10;
    }
    return iProduct;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number:";
    cin>>iNo;

    iRet = calculateProduct(iNo);

    cout<<iRet;

    return 0;
}