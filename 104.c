#include<stdio.h>


void fun1(int iValue1,int iValue2,int iValue3,char c,double dValue1,int iValue4,float fValue1)
{

}

void fun2(int iValue1,int iValue2,char cValue1,char cValue2,int iValue4)
{

}

void fun3(char cValue1,char cValue2,float fValue1,float fValue2)
{

}

int main()
{
    int a = 10, b = 20, c;

    char ch = 'x';

    double d = 10.2;

    fun1(a,b,c,ch,d,10,20.2);


    fun2(a+2,b*3+c,'a','y',11+2);

    fun3('x','d',b+d,a*b*d);

    return 0;
}