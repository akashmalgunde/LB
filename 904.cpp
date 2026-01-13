#include<iostream>
using namespace std;

class Digit
{
    public:
    int iNo;
    Digit(int iNo)
    {
        this->iNo = iNo;
    }

    bool checkPerfect()
    {
        bool bRet = false;
        int iSum = 0;
       
        for(int i = 1; i <= this->iNo / 2; i++)
        {

            if(this->iNo % i == 0)
            {
                //cout<<"Inside the if\n";
                iSum = iSum + i;
                //cout<<iSum<<"\n";
            }
        }

        //cout<<iSum<<"is";

        if(iSum == this->iNo)
            bRet = true;

        return bRet;
        
    }
};

int main()
{
    int iNo = 0;

    cout<<"Enter the number:";
    cin>>iNo;

    Digit *dobj = new Digit(iNo);

    if(dobj->checkPerfect())
        cout<<dobj->iNo<<"is perfect number\n";
    else 
        cout<<dobj->iNo<<"is not perfect number\n";

    return 0;
}