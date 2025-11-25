class Hello
{
    public static boolean CheckLeap(int iYear)
    {
        boolean bRet = false;
        if(iYear % 4 == 0)
        {
            bRet = true;
        }

        return bRet;
    }
}

class Demo
{

    public static void main(String Args[])
    {
        boolean bRet = false;
        int iYear = 2004;

        bRet = Hello.CheckLeap(iYear);

        if(bRet == true)
            System.out.printf("%d is leap\n",iYear);
        else
            System.out.println(iYear+"is not leap year");
    }
    
}
