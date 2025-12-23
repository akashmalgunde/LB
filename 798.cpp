#include<iostream>
using namespace std;

void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i % 2 != 0)
                if(j % 2 == 0)
                    cout<<"0 ";
                else
                    cout<<"1 ";
            else
                if(j % 2 == 0)
                    cout<<"1 ";
                else
                    cout<<"0 ";
        }
        cout<<"\n";
    }
}

int main()
{
    int iRows = 0;

    cout<<"Enter the no of rows:";
    cin>>iRows;

    Display(iRows);

    return 0;
}