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

    Pattern *pobj = new Pattern(4);

    pobj->display();
    
    return 0;
}