#include<iostream>
using namespace std;

class Pattern
{
    int iRows;

    public:
    Pattern(int iRows)
    {
        this->iRows = iRows;
    }

    void Display()
    {
        int iCnt = 0;
        for(int i = 1, iCnt = 1; i <= this->iRows; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                cout<<iCnt++<<" ";
            }
            cout<<"\n";
        }
    }
};

int main()
{
    Pattern pobj(5);

    pobj.Display();

    return 0;
}