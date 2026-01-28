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
        cout<<"enter the array elements:\n";
        for(int i = 0; i < iSize; i++)
        {
            cin>>this->iArr[i];
        }
    }

    void display()
    {
        cout<<"entered elements are:\n";
        for(int i = 0; i < iSize; i++)
        {
            cout<<this->iArr[i]<<" ";
        }
        cout<<"\n";
    }

    int findMajority()
    {
        int iMajor = -1;
        int iCnt = 0;

        for(int i = 0; i < this->iSize; i++)
        {
            iCnt = 0;
            for(int j = i + 1; j < this->iSize; j++)
            {
                if(this->iArr[i] == this->iArr[j])
                {
                    iCnt++;
                }
            }

            if(iCnt >= this->iSize / 2)
            {
                iMajor = this->iArr[i];
                break;
            }
        }

        return iMajor;
    }
};

int main()
{

    MyArray *mobj = new MyArray(7);

    mobj->accept();
    mobj->display();

    if(mobj->findMajority() != -1)
        cout<<mobj->findMajority()<<"\n";
    else
        cout<<"no element is there in majority\n";
    return 0;
}