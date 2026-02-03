#include<iostream>
using namespace std;

class Pattern
{
    int iRows;

    public:
    Pattern(int i)
    {
        this->iRows = i;
    }

    void display()
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

    cout<<"enter the number of rows:";
    cin>>iRows;

    Pattern p(iRows);
    p.display();

    cout<<"enter the number of rows:";
    cin>>iRows;

    Pattern *p1 = new Pattern(iRows);
    p1->display();

    return 0;
}