#include<stdio.h>
#include<iostream>
using namespace std;

class Student
{
    public:

    int iAge;
    int iRollNo;

    Student()
    {
        this->iAge = 21;
        this->iRollNo = 1;
    }

    Student(int iNo1,int iNo2)
    {
        this->iAge = 22;
        this->iRollNo = 22; 
    }

    void Display()
    {
        cout<<this->iAge<<"\n";
        cout<<this->iRollNo<<"\n";
    }
};

int main()
{
    Student s;

    s.Display();

    Student s1(22,2);

    Student s2;
    s2.Display();

    s1.Display();



    return 0;
}