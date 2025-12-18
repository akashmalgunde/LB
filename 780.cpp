#include<iostream>
using namespace std;

class Digit
{
    int iNo;

    public:
        Digit()
        {
            this->iNo = 25;
        }

        Digit(int iNo)
        {
            this->iNo = iNo;
        }

        void Display()
        {
            cout<<this->iNo<<" : ";
            while(this->iNo != 0)
            {
                cout<<this->iNo % 10<<"  ";
                this->iNo = this->iNo / 10;

            }

            cout<<"\n";
        }
};

int main()
{

    Digit *dobj = new Digit();

    dobj->Display();


    Digit dobj1(25000);

    dobj1.Display();

    return 0;
}