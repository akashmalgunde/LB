#include<iostream>
using namespace std;


class Demo
{
    public:
    int A;
    int B;

    Demo()
    {
        this->A = 10;
        this->B = 20;
    }

    Demo(Demo *cpy)
    {
        this->A = cpy->A;
        this->B = cpy->B;
    }

    void Display()
    {
        cout<<"\n";
        cout<<this->A<<"\n";
        cout<<this->B<<"\n";
    }
};


int main()
{
    Demo dobj;

    dobj.Display();

    Demo dobj1(&dobj);

    dobj1.Display();


}