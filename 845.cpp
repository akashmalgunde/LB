#include<iostream>
using namespace std;

int minElement(int *iArr,int iSize)
{
    int iMin = 0;
    iMin = iArr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(iMin > iArr[i])
            iMin = iArr[i];
    }

    return iMin;
}

void Accept(int *Arr,int iSize)
{
    cout<<"Enter the elements:\n";
    for(int i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

void display(int *Arr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int *Arr = 0;

    int iSize = 0;

    cout<<"Enter the size of array:";
    cin>>iSize;

    Arr = new int[iSize];

    Accept(Arr,iSize);

    display(Arr,iSize);

    cout<<minElement(Arr,iSize)<<"\n";

    return 0;
}