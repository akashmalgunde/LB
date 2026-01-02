#include<iostream>
using namespace std;

void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<"* ";
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