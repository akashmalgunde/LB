#include<iostream>
using namespace std;

void Display(int iRows)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    for(i = 1; i <= iRows; i++)
    {
        ch = 'A';
        for(j = 1; j <= i; j++)
        {
            cout<<ch++<<" ";
        }

        cout<<"\n";
    }
}

int main()
{

    int iRows = 0;

    cout<<"Enter the number of Rows:";
    cin>>iRows;

    Display(iRows);

    return 0;
}