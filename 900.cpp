#include<iostream>
using namespace std;

void Display(int iNo)
{
    char c = '\0';
    for(int i = 1; i <= iNo; i++)
    {
        c = 'A';
        for(int j = 1; j <= i; j++)
        {
            cout<<c++<<" ";
        }
        cout<<"\n";
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

