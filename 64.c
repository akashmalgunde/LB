#include<stdio.h>

void CheckSide()
{

    int iSide1 = 3;
    int iSide2 = 5;
    int iSide3 = 3;

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

}



int main()
{   
    CheckSide();

    return 0;
}


/*


    int iSide1 = 3;
    int iSide2 = 5;
    int iSide3 = 3;

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


    iSide1   3
    iSide2   5
    iSide3   3


    Cmd Prompt
    Triangle is scalen triangle.

    Triangle is equilateral triangle.

    Triangle is isoscalen triangle.





*/