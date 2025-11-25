class Demo
{
    public static void checkDiscount(int iPur,char cDes)
    {
        if(cDes == 'y')
    {
        if(iPur > 500)
        {
            System.out.printf("You will get 20 percent discount.\n");
        }
        else
        {
            System.out.printf("You will get 10 percent discount.\n");
        }
    }
    else
    {
        if(iPur > 600)
        {
            System.out.printf("You are not a student and you wiil get 15 percent discount\n");
        }
        else
        {
            System.out.printf("You will not get any discount\n");
        }
    }
}
}

class program468 
{
    public static void main(String args[])
    {
        char cDes = 'n';
        int iPur = 500;

        Demo.checkDiscount(iPur, cDes);
    
    }
    
}

