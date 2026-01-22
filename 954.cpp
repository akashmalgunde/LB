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
        for(int i = 1; i <= this->iRows; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                if(i % 2 == 0)
                {
                    if(j % 2 == 0)
                        cout<<"0 ";
                    else
                        cout<<"1 ";
                }
                else
                {
                    if(j % 2 == 0)
                        cout<<"1 ";
                    else
                        cout<<"0 ";
                }
            }
            cout<<"\n";
        }
    }
};

int main()
{

    int iRows = 0;

    Pattern *pobj = new Pattern(5);

    pobj->display();


    return 0;
}