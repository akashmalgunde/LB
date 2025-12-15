#include<iostream>
using namespace std;

class Hello
{
    public:
    void gun();
};


class Marvellous
{
    public:
    void sun();
    void gun();
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
    Demo(int i , int j,int k)
    {
        this->A = i;
        this->B = j;
        this->C = k;
    }

    friend void fun();
    friend void Hello::gun();
    friend class Marvellous;
};

void fun()
{
    Demo dobj(1,2,3);
    cout<<"\n";
    cout<<dobj.A<<"\n";
    cout<<dobj.B<<"\n";
    cout<<dobj.C<<"\n";
    cout<<"\n";
}

void Hello::gun()
{
    Demo dobj(4,5,6);
    cout<<"\n";
    cout<<dobj.A<<"\n";
    cout<<dobj.B<<"\n";
    cout<<dobj.C<<"\n";
    cout<<"\n";
}

void Marvellous::sun()
{
    Demo dobj(7,8,9);
    cout<<"\n";
    cout<<dobj.A<<"\n";
    cout<<dobj.B<<"\n";
    cout<<dobj.C<<"\n";
    cout<<"\n";
}

int main()
{
    Hello hobj;
    Marvellous mobj;

    fun();
    hobj.gun();
    mobj.sun();
}


