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

    void accept()
    {
        cout<<"Enter the array elements:\n";
        for(int i = 0; i < this->iSize; i++)
        {
            cin>>this->iArr[i];
        }
    }

    void display()
    {
        for(int i = 0; i < iSize; i++)
        {
            cout<<this->iArr[i]<<" ";
        }
        cout<<"\n";
    }

    int addEven()
    {
        int iSum = 0;
        for(int i = 0; i < this->iSize; i++)
        {
            if(this->iArr[i] % 2 == 0)
                iSum = iSum + this->iArr[i];
        }

        return iSum;
    }

    int addOdd()
    {
        int iSum = 0;
        for(int i = 0; i < this->iSize; i++)
        {
            if(this->iArr[i] % 2 != 0)
                iSum = iSum + this->iArr[i];
        }

        return iSum;
    }

    int calEvenOddDiff()
    {
        int iDiff = 0;

        iDiff = addEven() - addOdd();

        return iDiff;

    }


    ~MyArray()
    {
        delete this->iArr;
    }
};


int main()
{
    MyArray m(5);

    m.accept();

    m.display();

    cout<<m.calEvenOddDiff()<<"\n";

    return 0;
}