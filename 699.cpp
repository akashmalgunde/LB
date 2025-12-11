#include<stdio.h>
#include<iostream>
using namespace std;

void mystrcpy(char *dest,char * src)
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

class Date
{
    public:
    int iDay;
    int iMonth;
    int iYear;
    char cDOW[20];

    void Display()
    {
        cout<<this->iDay<<"\n";
        cout<<this->iMonth<<"\n";
        cout<<this->iYear<<"\n";
        cout<<this->cDOW<<"\n";
    }

    void Accept()
    {
        cin>>this->iDay;
        cin>>this->iMonth;
        cin>>this->iYear;
        mystrcpy(this->cDOW ,"thursday");
    }
};

int main()
{
  
    Date d;

    d.Accept();
    d.Display();
    

    return 0;
}