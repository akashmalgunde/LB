#include<iostream>
using namespace std;

class Hello
{
    public:
    void fun();
};


class Test
{

};



class Demo
{
    public:
    int A;
    private:
    int B;
    protected:
    int C;

    public:
    Demo()
    {
        this->A = 10;
        this->B = 20;
        this->C = 30;
    }

    friend void run();
    friend void Hello::fun();
    friend class Test;
};

void run()
{
    Demo d;
    cout<<d.A<<"\n";
    cout<<d.B<<"\n";
    cout<<d.C<<"\n";
}

void Hello::fun()
{
    Demo d;
    cout<<d.A<<"\n";
    cout<<d.B<<"\n";
    cout<<d.C<<"\n";
}

int main()
{

    run();
    Hello h;

    h.fun();
    return 0;
}

