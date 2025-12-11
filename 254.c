#include<stdio.h>

typedef struct Date
{
    int Day;
    int Month;
    int Year;

}Date;

Date StoreData()
{
    Date D1;
    printf("Enter Day:\n");
    scanf("%d",&D1.Day);

    printf("Enter Month:\n");
    scanf("%d",&D1.Month);

    printf("Enter Year:\n");
    scanf("%d",&D1.Year);

    return D1;
}

void DisplayData(Date D1)
{
    printf("%d / %d / %d",D1.Day,D1.Month,D1.Year);
}

int main()
{

    Date D1;

    D1 = StoreData();

    DisplayData(D1);


    return 0;
}