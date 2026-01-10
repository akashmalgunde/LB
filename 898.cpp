#include<iostream>
using namespace std;

void Display(int);

int main()
{
    int iNo = 0;

    cout<<"Enter the no of rows:";
    cin>>iNo;

    Display(iNo);

    return 0;
}

void Display(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}