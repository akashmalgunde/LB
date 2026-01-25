#include<iostream>
using namespace std;

class Pattern
{
    int iRows;

    public:
    Pattern(int n)
    {
        this->iRows = n;
    }

    void display()
    {
        for(int i = this->iRows; i >= 1; i--)
        {
            for(int j = 1; j <= i; j++)
                cout<<"* ";

            cout<<"\n";
        }

    }
};

int main()
{

    Pattern p(4);

    p.display();

    return 0;
}