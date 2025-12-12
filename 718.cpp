#include<iostream>
using namespace std;

int main()
{
    int iSize = 0;
    cout<<"Enter size:";
    cin>>iSize;

    int *Arr = new int[iSize];

    cout<<"Enter elemens:\n";
    for(int i = 0; i < iSize; i++)
        cin>>Arr[i];

    for(int i= 0; i < iSize; i++)
        cout<<Arr[i]<<"  ";

    return 0;
}