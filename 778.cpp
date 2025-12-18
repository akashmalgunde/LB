#include<iostream>
using namespace std;

class Display
{
    int iRows;
    int iColumns;

    public:
        Display(int iNo1,int iNo2)
        {
            this->iRows = iNo1;
            this->iColumns = iNo2;
        }

        void DisplayPattern()
        {
            for(int i = 1; i <= this->iRows; i++)
            {
                for(int j =  1;j <= this->iColumns; j++)
                {
                    cout<<"* ";
                }
                cout<<"\n";
            }
        }
};


int main()
{
    Display dobj(6,4);

    dobj.DisplayPattern();

    return 0;
}