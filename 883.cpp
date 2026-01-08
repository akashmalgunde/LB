#include<iostream>
using namespace std;

void Display(int iRows)
{
    int iCnt = 1;
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<iCnt++<<" ";
        }

        cout<<"\n";
    }
}

int main()
{
    int iRows = 0;

    cout<<"Enter the number of rows:";
    cin>>iRows;

    Display(iRows);


    return 0;
}