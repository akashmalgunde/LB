#include<iostream>
using namespace std;

class MyArray
{
    int iSize;
    int *iArr;

    public:
    MyArray(int i)
    {
        this->iSize = i;
        this->iArr = new int[iSize];
    }

    void acceptArray()
    {
        cout<<"Enter the array elements:\n";
        for(int i = 0; i < iSize; i++)
            cin>>this->iArr[i];

    }

    void displayArray()
    {
        cout<<"Entered array elements are:\n";
        for(int i = 0; i < iSize; i++)
            cout<<this->iArr[i]<<" ";
        
        cout<<"\n";
    }

    void displayEvenOddCount()
    {
        int iOddC = 0;
        int iEvenC = 0;

        for(int i = 0; i < this->iSize; i++)
        {
            if(this->iArr[i] % 2 == 0)
                iEvenC++;
            else
                iOddC++;
        }

        cout<<"count of even number in array is:"<<iEvenC;
        cout<<"count of odd number in an array is:"<<iOddC;
    }
};

int main()
{

    MyArray *mobj = new MyArray(5);

    mobj->acceptArray();

    mobj->displayArray();

    mobj->displayEvenOddCount();

    return 0;
}