#include<iostream>
using namespace std;

void mystrcpy(char *Dest,char *Src)
{
    int i = 0;
    while(Src[i] != '\0')
    {
        Dest[i] = Src[i];
        i++;
    }
    Dest[i] = '\0';
}

class Student
{
    public:
    int iRollNo;
    int iAge;
    char cName[50];


    void setRollNo(int iRollNo)
    {
        this->iRollNo = iRollNo;
    }

    void setAge(int iAge)
    {
        this->iAge = iAge;
    }

    void setName(char *ptr)
    {
        mystrcpy(this->cName,ptr);
    }


    void getRollNo()
    {
        cout<<this->iRollNo<<"\n";
    }

    void getAge()
    {
        cout<<this->iAge<<"\n";
    }

    void getName()
    {
        cout<<this->cName<<"\n";
    }
};

int main()
{

    Student s;

    s.setRollNo(1);
    s.setAge(22);
    s.setName("S1");

    s.getAge();
    s.getName();
    s.getRollNo();


    



    return 0;
}