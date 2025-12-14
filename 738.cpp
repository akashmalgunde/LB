#include<iostream>
using namespace std;

class Display
{
    public:
    static void DisplayPattern(int iRows)
    {

        int iCnt1 = iRows;
        int iCnt2 = iRows;

        for(int i = 1; i <= iRows; i++,iCnt1--,iCnt2++)
        {
            for(int j = 1; j < iRows*2; j++)
            {
                if(j >= iCnt1 && j <= iCnt2)
                    cout<<"* ";

                else
                    cout<<"  ";
            }

            cout<<"\n";
        }
        iCnt1 += 2;
        iCnt2 -=2;
        for(int i = 1; i < iRows; i++,iCnt1++,iCnt2--)
        {
            for(int j = 1; j < iRows*2 ; j++)
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

    cout<<"Enter the no of rows:\n";
    cin>>iRows;

    Display::DisplayPattern(iRows);

    return 0;
}