#include<iostream>
using namespace std;

class Pattern
{

    public:
    void Display(int iRows)
    {
        int iCnt1 = iRows;
        int iCnt2 = iRows;
        for(int i = 1; i <= iRows; i++,iCnt1--,iCnt2++)
        {
            for(int j = 1; j < iRows*2; j++)
            {
                if(j >= iCnt1 && j <= iCnt2)
                    if(j <= iRows)
                        cout<<"* ";
                    else 
                        cout<<"# ";
                else 
                    cout<<"  ";
            }

            cout<<"\n";
        }

        //cout<<iCnt1<<"\n";
        //cout<<iCnt2<<"\n";

        iCnt1 += 1;
        iCnt2 -= 1;

        for(int i = 1; i <= iRows; i++,iCnt1++,iCnt2--)
        {
            for(int j = 1; j < iRows * 2; j++)
            {
                if(j >= iCnt1 && j <= iCnt2)
                {
                    if(j >= iRows)
                    {
                        cout<<"* ";
                    }
                    else
                    {
                        cout<<"# ";
                    }
                }
                else 
                    cout<<"  ";
            }

            cout<<"\n";
        }
    }
};

int main()
{

    //int iRows = 0;

    //cout<<"Enter the no of rows:";
    //cin>>iRows;

    Pattern pobj;

    for(int i = 1; i <= 30;i++)
    {
        cout<<"\n";
        cout<<"\n";
        pobj.Display(i);
        cout<<"\n";
        cout<<"\n";
    }

    return 0;
}