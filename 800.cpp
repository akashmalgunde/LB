#include<iostream>
using namespace std;

void Display(int iRows)
{
    
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(i == 1 || j == 1 || i == iRows || j == iRows || i == j || i + j == iRows + 1)
                cout<<"* ";
            else
                cout<<"  ";
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