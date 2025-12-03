#include<iostream>

using namespace std;

typedef struct Date Date;

class Date
{
    public :
    int iDay;
    int iMonth;
    int iYear;

    void Display()
    {
        cout<<this->iDay<<"/";
        cout<<this->iMonth<<"/";
        cout<<this->iYear;
    }
};

int main()
{
    Date *D1 = new Date();

    D1->iDay = 2;
    D1->iMonth = 12;
    D1->iYear = 2025;

    D1->Display();
    return 0;
}