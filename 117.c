#include<stdio.h>

void DisplayType()
{
    int iSide1 = 0;
    int iSide2 = 0;
    int iSide3 = 0;


    printf("Enter side1:\n");
    scanf("%d",&iSide1);

    printf("Enter side2\n");
    scanf("%d",&iSide2);

    printf("Enter side3:\n");
    scanf("%d",&iSide3);

    if(iSide1 == iSide2 && iSide3 == iSide1)
    {
        printf("Triangle is Equilateral triangle\n");
    }

    else if(iSide1 != iSide2 && iSide2 != iSide3 && iSide1 != iSide3)
    {
        printf("Triangle is scalen triangle\n");
    }
    else if(iSide1 == iSide2 || iSide2 == iSide3 || iSide1 == iSide3)
    {
        printf("Triangle is isoscale triangle\n");
    }
}

int main()
{   
    DisplayType();

    return 0;
}


/*

Cmd prompt
Enter side1:
5
Enter side2:
5
Enter side3:
5

Triangle is Equilatral trianglec




iSide1  0   5
iSide2  0   5
iSide3  0   5



                1       &&         1
    if(iSide1 == iSide2 && iSide2 == iSide3)
    {
        printf("Triangle is Equilatral triangle\n");
    }
    else if(iSide1 != iSide2 && iSide2 !=iSide3 && iSide1 != iSide3)
    {
        printf("Triangle is scalen trianle\n");
    }
    else if(iSide1 == iSide2 || iSide1 == iSide3 || iSide2 == iSide3)
    {
        printf("Tringle is isoscalen tringle\n");
    }

    


*/