#include<iostream>
using namespace std;

class Display
{
    int iRows;

    public:
        Display(int iNo)
        {
            this->iRows = iNo;
        }

        void DisplayPattern()
        {
            for(int i = 1; i <= this->iRows; i++)
            {
                for(int j =  1;j <= iRows; j++)
                {
                    cout<<"* ";
                }
                cout<<"\n";
            }
        }
};


int main()
{
    Display dobj(6);

    dobj.DisplayPattern();

    return 0;
}