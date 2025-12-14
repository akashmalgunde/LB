#include<iostream>
using namespace std;

class Divisor
{
    int iSize;
    int *Arr;

    public:
        Divisor(int i)
        {
            iSize = i;
            Arr = new int[iSize];
        }

        void Accept()
        {
            cout<<"Enter the elements:\n";
            for(int i = 0; i < iSize; i++)
                cin>>this->Arr[i];
        }

        void Display()
        {
            cout<<"Entered elemets of the array are:\n";
            for(int i = 0; i < iSize; i++)
                cout<<Arr[i]<<" ";
            
            cout<<"\n";
        }

        void DisplayDivisorof5()
        {
            for(int i = 0; i < this->iSize; i++)
            {
            if((this->Arr[i] + 5) % 5 == 0)
                cout<<this->Arr[i]<<"  ";
            }
        }
};

int main()
{
    int iSize = 0;

    cout<<"Enter the elements:\n";
    cin>>iSize;

    Divisor *sobj = new Divisor(iSize);

    sobj->Accept();

    sobj->DisplayDivisorof5();

    return 0;
}