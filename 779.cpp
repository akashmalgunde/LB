#include<iostream>
using namespace std;

class Array
{
    private:
        int iSize;
        int *Arr;
    
    public:
        Array(int iSize)
        {
            this->iSize = iSize;

            Arr = new int[iSize];
        }

        void Accept()
        {
            cout<<"Enter the array elements:\n";
            for(int i = 0; i < this->iSize; i++)
            {
                cin>>this->Arr[i];
            }

            cout<<"\n";
        }

        void Display()
        {
            cout<<"Entered elements of array are:\n";
            for(int i = 0; i < this->iSize; i++)
            {
                cout<<this->Arr[i]<<"  ";
            }

            cout<<"\n";
        }

        ~Array()
        {
            cout<<"Inside the destructor of Arr\n";
            cout<<Arr<<"\n";
            delete []Arr;
            cout<<Arr<<"\n";
        }

};

int main()
{

    int iSize = 5;

    Array aobj(iSize);

    Array *aobj1 = new Array(5);

    aobj.Display();

    aobj.Accept();

    aobj.Display();

    aobj1->Accept();

    aobj1->Display();

    cout<<"End of main\n";

    //~Array();

    return 0;
}