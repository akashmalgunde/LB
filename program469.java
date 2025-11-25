class Demo
{
    public static void checkDivisibility(int iNo)
    {
        if(iNo % 3 == 0 && iNo % 5 == 0)
            System.out.println(iNo+"is divisible by both 3 and 5");

        else if(iNo % 3 == 0 && iNo % 5 != 0)
            System.out.println(iNo+"is divisible by 3 and not by 5");

        else if(iNo % 3 != 0 && iNo % 5 == 0)
            System.out.println(iNo+"is not divisible by 3 and divisible by 5");

        else
            System.out.println(iNo+"is not divisible by 3 and not divisible by 5");
    }
}

class program469
{
    public static void main(String args[])
    {
        int iNo = 25;

        Demo.checkDivisibility(iNo);
    }
}