#include<iostream>
using namespace std;

class Digits
{
    int iNo;

    public:

    Digits(int iNo)
    {
        this->iNo = iNo;
    }

    bool checkArmStrong()
    {
        cout<<"Came inside\n";
        int iTemp = 0;
        int iCnt = 0;
        int iSum = 0;
        bool bRet = false;
        int iPower = 1;
        int iDigit = 0;

        iTemp = this->iNo;
        while(iTemp != 0)
        {
            iCnt++;
            iTemp = iTemp / 10;
        }
        cout<<"Coming after first while\n";
        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iPower = 1;
            iDigit = iTemp % 10;
            for(int i = 1; i <= iCnt; i++)
            {
                iPower = iPower * iDigit;
            }
            iSum = iSum + iPower;
            iTemp = iTemp / 10;
        }

        if(iSum == iNo)
        {
            bRet = true;
        }

        return bRet;
    }


};

int main()
{
    int iNo = 0;

    cout<<"Enter the number:";
    cin>>iNo;

    Digits *dobj = new Digits(iNo);

    bool bRet = dobj->checkArmStrong();

    if(bRet == true)
        cout<<"is armstrong";
    else
        cout<<"Not armstrong";


    return 0;
}