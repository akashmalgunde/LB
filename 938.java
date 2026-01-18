class Digits
{
    int iNo;

    public Digits(int iNo)
    {
        this.iNo = iNo;
    }

    int reverseNumber()
    {
        int iTemp = this.iNo;
        int iRet = 0;
        int iDigit = 0;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iRet = iRet * 10 + iDigit;
            iTemp = iTemp / 10;
        }

        //this.iNo = 0;

        return iRet;
        
    }
    boolean checkPalindrome()
    {
        boolean bRet = false;

        //System.err.println(this.iNo);
        int iRet = 0;

        iRet = reverseNumber();
        System.out.println(this.iNo);

        if(iRet == this.iNo)
            bRet = true;
    
        return bRet;

    }
}

class Test
{
    public static void main(String args[])
    {
        Digits d = new Digits(15516216);

        if(d.checkPalindrome())
            System.out.println("palindrome");
        else
            System.out.println("Not palindrome");
    }
}