#include<iostream>
using namespace std;

class Numbers
{
    int iNo;

    public:
    Numbers(int n)
    {
        this->iNo = n;
    }

    int calculateSquare()
    {
        return this->iNo * this->iNo;
    }

    int sumDigit(int iNo)
    {
        int iSum = 0;
        while(iNo != 0)
        {
            iSum = iSum + iNo % 10;
            iNo = iNo / 10;
        }

        return iSum;
    }

    bool checkKarpekar()
    {
        bool bRet = false;
        if(this->iNo == sumDigit(calculateSquare()))
            bRet = true;
        
        return bRet;
    }
};

int main()
{
    Numbers *nobj = new Numbers(4);

    if(nobj->checkKarpekar())
        cout<<"Karpekar\n";
    else
        cout<<"Not Karpekar\n";

    return 0;
}
