#include<iostream>
using namespace std;


class Pattern
{
    public:
    int iRows;

    Pattern(int i)
    {
        iRows = i;
    }
    void Display()
{
    for(int i = 1; i <= this->iRows; i++)
    {
        for(int j = 1; j <= this->iRows; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }

    cout<<"\n";
}
};

int main()
{

    int iRows = 0;

    cout<<"Enter the no of rows:\n";
    cin>>iRows;

    Pattern pobj(iRows);

    Pattern pobj1(6);

    pobj.Display();

    pobj1.Display();

    return 0;
}