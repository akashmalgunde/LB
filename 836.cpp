#include<iostream>
using namespace std;

class Display
{
    public:
    static void displayPatt(int iRows)
    {
        for(int i = 1; i <= iRows; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                cout<<i<<" ";
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

    Display::displayPatt(iRows);


    return 0;
}