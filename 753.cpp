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

        void DisplayEvenOdd()
        {
            for(int i = 0; i < this->iSize; i++)
            {
                if(this->Arr[i] % 2 == 0)
                    cout<<"Even is this:"<<this->Arr[i]<<"\n";

                else
                    cout<<"Odd is this:"<<this->Arr[i]<<"\n";
            }
        }
};

int main()
{
    int iSize = 0;
    //int iNo = 0;

    cout<<"Enter the elements:\n";
    cin>>iSize;

    Divisor *sobj = new Divisor(iSize);

    sobj->Accept();

    //cout<<"Enter the no:\n";
    //cin>>iNo;

    //sobj->DisplayDivisorofno(iNo);

    sobj->DisplayEvenOdd();



    return 0;
}