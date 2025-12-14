#include<iostream>
using namespace std;


class Numbers
{
    private:
        int iNo1;
        int iNo2;

    public:
        Numbers(int iValue1,int iValue2)
        {
            this->iNo1 = iValue1;
            this->iNo2 = iValue2;
        }

        
        int Addition()
        {
            return this->iNo1 + this->iNo2;
        } 

        bool checkEvenOdd()
        {
            bool bRet = false;

            if(iNo1 % 2 == 0)
                bRet = true;

            return bRet;
            
        }
    };

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    cout<<"Enter the num1:";
    cin>>iNo1;

    cout<<"Enter the num2:";
    cin>>iNo2;

    Numbers nobj(iNo1,iNo2);

    int iRet = nobj.Addition();

    cout<<iRet<<"\n";

    bool bRet = nobj.checkEvenOdd();

    if(bRet == true)
        cout<<"no is even\n";
    else
        cout<<"no is odd\n";
        
    return 0;
}