class Hello
{
    public static boolean CheckEligibility(int iAge)
    {
        boolean bRet = false;

        if(iAge >= 18)
            bRet = true;

        return bRet;
    }
}

class Demo
{
    public static void main(String args[])
    {
        int iAge = 25;

        boolean bRet = false;

        bRet = Hello.CheckEligibility(iAge);

        if(bRet == true)
        {
            System.out.println("You are eligible for voting");
        }
        else
            System.out.printf("Your age is %d and You are not eligible for voting\n", iAge);


    }
}