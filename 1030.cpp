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
        this->iArr = new int[this->iSize];
    }

    void accept()
    {
        cout<<"Enter the elements:\n";
        for(int i = 0; i < this->iSize; i++)
        {
            cin>>this->iArr[i];
        }
    }

    void display()
    {
        cout<<"Entered array elements are:\n";
        for(int i = 0; i < this->iSize; i++)
            cout<<this->iArr[i]<<" ";
        
        cout<<"\n";
    }

    bool checkSorted()
    {
        bool bRet = true;

        for(int i = 1; i < this->iSize; i = i + 2)
        {
            if(!(this->iArr[i] >= this->iArr[i - 1] && this->iArr[i] <= this->iArr[i+1]))
            {
                 bRet = false;
                 break;
            }

        }

        return bRet;
    }
};

int main()
{
    MyArray m1(5);
    m1.accept();
    m1.display();

    if(m1.checkSorted())
        cout<<"Array is sorted\n";
    else
        cout<<"Array is not sorted\n";

    return 0;
}