#include<iostream>
using namespace std;

void Display(int iNo)
{
    char c = 'A';
    for(int i = 1; i <= iNo; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<c<<" ";
        }
        cout<<"\n";
        c++;
    }
}

int main()
{
    int iNo = 0;

    cout<<"Enter the no of rows:";
    cin>>iNo;

    Display(iNo);

    return 0;
}

