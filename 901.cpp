#include<iostream>
using namespace std;

void Display(int iRows)
{
    int iCnt = 0;
    for(int i = iRows; i >= 1; i--)
    {
        iCnt = iRows;
        for(int j = 1; j <= i; j++)
        {
            cout<<iCnt--<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    int iRows = 0;

    cout<<"Enter the no of rows:\n";
    cin>>iRows;

    Display(iRows);

    return 0;
}