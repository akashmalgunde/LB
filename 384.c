/*

Problem 1: Employee Salary Management

Create a struct Employee with:

id

name

basicSalary

hra

da

grossSalary

Input details for 5 employees.
Calculate grossSalary = basicSalary + hra + da.
Print the highest paid employee.


*/

#include<stdio.h>
typedef struct Employee Emlpoyee;

struct Employee
{
    int id;
    char Name[50];
    double BasicSalary;
    double hra;
    double da;
    double grosssalary;
};

void Accept(Emlpoyee *Emp,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        printf("Enter the data:\n");
        scanf("%d",&Emp[i].id);
        scanf("%s",Emp[i].Name);
        scanf("%lf",&Emp[i].BasicSalary);
        scanf("%lf",&Emp[i].hra);
        scanf("%lf",&Emp[i].da);

    }
}

void Display(Emlpoyee *Brr,int iSize)
{
    for(int i= 0; i < iSize; i++)
    {
        printf("Entered data is :\n");
        printf("%d\t%s\t%lf\t%lf\t%lf\t%lf\n",Brr[i].id,Brr[i].Name,Brr[i].BasicSalary,Brr[i].hra,Brr[i].da,Brr[i].grosssalary);
    }
}

void CalculateGross(Emlpoyee *Emp,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        Emp[i].grosssalary = Emp[i].BasicSalary + Emp[i].hra + Emp[i].da;
    }
}

int main()
{
    Emlpoyee Emp[5];

    Accept(Emp,5);

    Display(Emp,5);

    CalculateGross(Emp,5);

    Display(Emp,5);

    return 0;
}