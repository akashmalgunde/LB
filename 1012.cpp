#include<iostream>
using namespace std;

class Numbers
{
    int iNo;

    public:
    Numbers(int i)
    {
        this->iNo = i;
    }

    int calculateSum()
    {
        int iTemp = 0;
        int iSum = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iSum = iSum + iTemp % 10;
            iTemp = iTemp / 10;
        }

        return iSum;
    }

    bool checkNiven()
    {
        bool bRet = false;

        if(this->iNo % calculateSum() == 0)
            bRet = true;
        
        return bRet;
    }
};

int main()
{
    Numbers n(19);

    if(n.checkNiven())
        cout<<"Niven";
    else
        cout<<"Not niven";

    return 0;
}