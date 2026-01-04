#include<iostream>
using namespace std;

class Pattern
{
    private:
    int iRows;

    public:
    Pattern(int iRows)
    {
        this->iRows = iRows;
    }

    void Display()
    {
        for(int i = 1; i <= this->iRows; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                cout<<"* ";
            }
            cout<<"\n";
        }
    }
};

int main()
{
    int iRows = 0;

    cout<<"Enter the number of rows:";
    cin>>iRows;

    Pattern *ptr = new Pattern(iRows);

    ptr->Display();

    return 0;
}