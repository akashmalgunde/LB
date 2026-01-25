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
        int iCnt = 0;

        iCnt = this->iRows;

        for(int i = this->iRows; i >= 1; i--,iCnt--)
        {
            for(int j = 1; j <= i; j++)
                cout<<iCnt<<" ";

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