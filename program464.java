class Demo
{
    public static void CheckSide(int iSide1,int iSide2,int iSide3)
    {
        if(iSide1 == iSide2 && iSide2 == iSide3)
            System.out.println("Triangle is equilateral triangle");
        else if(iSide1 != iSide2 && iSide2 != iSide3 && iSide3 != iSide1)
            System.out.println("Triangle is Scalen triangle");
        else if(iSide1 == iSide2 || iSide2 == iSide3 || iSide1 == iSide3)
            System.out.println("Trianle is isoscalen triangle");
    }
}


class program464 {
    public static void main(String args[])
    {
        int iSide1 = 2;
        int iSide2 = 4;
        int iSide3 = 5;

        Demo.CheckSide(iSide1, iSide2, iSide3);


    }   
}
