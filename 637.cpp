#include<iostream>
using namespace std;

class Student
{
    public:
    int iRollNo;
    int iAge;
    //char sName[25];

    void Display()
    {
        cout<<(this->iAge)<<"\n";
        cout<<(this->iRollNo)<<"\n";
        //System.out.println(this->sName);
    }

    void setRollNo(int iRollNo)
    {
        this->iRollNo = iRollNo;
    }

    void setAge(int iAge)
    {
        this->iAge = iAge;
    }


    int getRollNo()
    {
        return this->iRollNo;
    }

    int getAge()
    {
        return this->iRollNo;
    }

};


int main()
    {
        Student *s = new Student();

        s->Display();
        cout<<"\n";

        s->setAge(22);
        //s->setName("SS1");
        s->setRollNo(1);

        s->Display();
        cout<<"\n";

        Student *S1 = s;

        cout<<(s);
        cout<<"\n";
        cout<<(S1);
        cout<<"\n";

        cout<<(S1->getAge());
        cout<<"\n";
        //cout<<(S1->getName());
        cout<<(S1->getRollNo());
        cout<<"\n";
        cout<<("Coming here");

        Student s3;

        s3.Display();

    }
