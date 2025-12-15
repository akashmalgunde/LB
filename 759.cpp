#include<iostream>
using namespace std;

class Book
{
    public:
    int BID;
    double dPrice;
};

int main()
{
    Book *Brr = new Book[4];

    cout<<Brr[1].BID<<"\t";
    cout<<Brr[0].dPrice<<"\t";

    

    return 0;
}