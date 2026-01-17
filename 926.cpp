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
        int iCnt1 = 1;
        int iCnt2 = iRows; 
        for(int i = 1; i <= iRows; i++,iCnt1++,iCnt2--)
        {
            for(int j = 1; j <= iRows; j++)
            {
                if(j >= iCnt1 && j <= iCnt2)
                    cout<<"* ";
                else
                    cout<<"  ";

                //cout<<"\n";
            }

            cout<<"\n";

        }
        //cout<<iCnt1<<"\n";
        //cout<<iCnt2<<"\n";
        iCnt1 -= 2;
        iCnt2 += 2;
        //cout<<iCnt1<<"\n";
        //cout<<iCnt2<<"\n";
        for(int i = 1; i < iRows; i++,iCnt1--,iCnt2++)
        {
            //scout<<i;
            for(int j = 1; j <= iRows; j++)
            {
                if(j >= iCnt1 && j <= iCnt2)
                   cout<<"* ";
                else
                    cout<<"  ";
            }
            cout<<"\n";
        }
    }
};

int main()
{
    int iRows = 0;

    cout<<"Enter the number of rows:\n";
    cin>>iRows;

    Pattern pobj(iRows);

    pobj.Display();

    return 0;
}