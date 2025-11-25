class Demo
{
    public static void CheckGreatest(int iNo1,int iNo2,int iNo3)
    {
        if(iNo1 > iNo2 && iNo1 > iNo3)
            System.out.println(iNo1+"is greater");
        else if(iNo2 > iNo1 && iNo2 > iNo3)
            System.out.println(iNo2+"is greater");
        else
            System.out.println(iNo3+"is greater");
    }
}

class program465 
{
    public static void main(String args[])
    {
        int iNo1 = 2;
        int iNo2 = 5;
        int iNo3 = 6;

        Demo.CheckGreatest(iNo1, iNo2, iNo3);

    }
}
