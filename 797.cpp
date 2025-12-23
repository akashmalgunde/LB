#include<iostream>
using namespace std;

void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = iRows; j >= 1; j--)
        {
            if(j <= i)
                cout<<j<<" ";
            else
                cout<<"  ";
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