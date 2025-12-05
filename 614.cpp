#include<iostream>

using namespace std;

class Date
{
    protected:
    int iDay;
    int iMonth;
    int iYear;

    void Display()
    {
        cout<<this->iDay<<"/"<<this->iMonth<<"/"<<this->iYear;
    }
};

int main()
{
    Date *Dobj = new Date();

    Dobj->iDay = 4;
    Dobj->iMonth = 12;
    Dobj->iYear = 2025;

    Dobj->Display();


}