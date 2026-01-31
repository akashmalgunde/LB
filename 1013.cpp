#include<iostream>
using namespace std;

class MyArray
{
    private:
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
        cout<<"Enter elements:\n";
        for(int i = 0; i < this->iSize; i++)
        {
            cin>>this->iArr[i];
        }
    }

    void display()
    {
        cout<<"entered array elements are:\n";
        for(int i = 0; i < this->iSize; i++)
        {
            cout<<this->iArr[i]<<" ";
        }
        cout<<"\n";
    }

    int checkIndex(int iEle)
    {
        for(int i = 0; i < this->iSize; i++)
        {
            if(this->iArr[i] == iEle)
                return i;
        }

        return -1;
    }
};


int main()
{

    MyArray m(5);
    int iRet = 0;

    m.accept();
    m.display();

    iRet = m.checkIndex(3);

    if(iRet != -1)
        cout<<iRet<<"\n";
    else
        cout<<"No element is there in array";

    return 0;
}