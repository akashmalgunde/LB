#include<stdio.h>
#include<string.h>

typedef struct Shop Shop;
typedef struct Date Date;

struct Date
{
    int iDay;
    int iMonth;
    int iYear;
};

struct Shop
{
    int iShopNo;
    char ShopName[20];
    int iWorkers;
    int iAppSal;
    Date Est;

};

void Accept(Shop *S)
{
    S->iShopNo = 1;
    strcpy(S->ShopName,"S1");
    S->iWorkers = 25;
    S->iAppSal = 25000;
    S->Est.iDay = 25;
    S->Est.iMonth = 12;
    S->Est.iYear = 2025;
    
}

int main()
{
    Shop S1;

    Accept(&S1);

    printf("%d\n",S1.Est.iMonth);
    printf("%c\n",S1.ShopName[0]);

    return 0;
}