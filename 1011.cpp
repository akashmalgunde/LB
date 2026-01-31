#include<iostream>
using namespace std;

class Pattern
{
    private:
    int iRows;

    public:
    Pattern(int i)
    {
        this->iRows = i;
    }

    void display()
    {
        int iCnt = 0;
        for(int i = 1; i <= this->iRows; i++)
        {
            iCnt = i;
            for(int j = 1; j <= i; j++)
            {
                cout<<iCnt--<<" ";
            }
            cout<<"\n";
        }
    }
};

int main()
{
    int iRows = 0;

    cout<<"enter no of rows:";
    cin>>iRows;

    Pattern *pobj = new Pattern(iRows);

    pobj->display();

    return 0;
}