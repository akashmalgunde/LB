#include<iostream>
using namespace std;

class Digits
{
    int iNo;

    public:
    Digits(int i)
    {
        this->iNo = i;
    }

    int calculateProduct()
    {
        int iProduct = 1;
        int iTemp = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iProduct = iProduct * (iTemp % 10); 
            iTemp = iTemp / 10;
        }

        return iProduct;
    }
};

int main()
{

    int iRet = 0;

    Digits d(234);

    iRet = d.calculateProduct();

    cout<<iRet<<" is the product\n";

    return 0;
}