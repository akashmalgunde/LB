#include<iostream>
using namespace std;


class Array
{
    public:
    int iSize;
    int *Arr;
    
    Array(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }

    void Accept()
    {
        cout<<"Enter the array elements:\n";

        for(int i = 0; i < this->iSize; i++)
        {
            cin>>this->Arr[i];
        }
    }

    void Display()
    {
        cout<<"Entered array elements are:\n";

        for(int i = 0; i < this->iSize; i++)
        {
            cout<<this->Arr[i];
        }
        cout<<"\n";
    }
};


int main()
{
    int i = 0;
    cout<<"Enter size:";
    cin>>i;

    Array aobj = new Array(i);
    aobj.Accept();
    aobj.Display();


    return 0;
}