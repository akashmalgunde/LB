#include<iostream>
#include<string.h>
using namespace std;

class BankAccount
{

    public : 

    int iAccountNo;
    char cName[3];
    double dBankBalance;
    static float fIntrestRate;

    public:
    BankAccount()
    {
        this->iAccountNo= 123;
        strcpy(this->cName,"He");
        this->dBankBalance = 1000;
    }

    void Display()
    {
        cout<<"\n";

        cout<<iAccountNo<<"\n";
        cout<<cName<<"\n";
        cout<<dBankBalance<<"\n";
        cout<<BankAccount::fIntrestRate<<"\n";

        cout<<"\n";
    }

    static void setIntrestRate(float fret)
    {
        BankAccount::fIntrestRate = fret;
    }



};

float BankAccount::fIntrestRate = 5.5;

int main()
{
    BankAccount *bobj1 = new BankAccount();

    BankAccount *bobj2 = new BankAccount();

    bobj1->Display();

    bobj2->Display();

    BankAccount::setIntrestRate(9.2);

    cout<<BankAccount::fIntrestRate;

    bobj1->Display();

    bobj2->Display();

    return 0;
}