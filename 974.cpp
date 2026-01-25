#include<iostream>
using namespace std;

class Number
{
    int iNo;

    public:
    Number(int iNo)
    {
        this->iNo = iNo;
    }

    int binaryOneCnt()
    {
        int iCnt = 0;
        int iTemp = 0;
        int iBinaryRep = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iBinaryRep = iTemp % 2;
            if(iBinaryRep == 1)
            {
                iCnt++;
            }
            iTemp = iTemp / 2;
        }

        return iCnt;
    }

    bool checkEvil()
    {
        bool bRet = false;

        if(binaryOneCnt() % 2 == 0)
            bRet = true;
        
        return bRet;
    }
};

int main()
{
    Number n(2);

    if(n.checkEvil())
        cout<<"Evil number\n";
    else
        cout<<"Not Evil\n";

    return 0;
}