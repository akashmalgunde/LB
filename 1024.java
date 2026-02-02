class Digits
{
    int iNo;

    public Digits(int i)
    {
        this.iNo = i;
    }

    int calculatePower(int iNo,int iRaise)
    {
        int iPower = 1;

        for(int i = 1; i <= iRaise; i++)
        {
            iPower = iPower * iNo;
        }

        return iPower;
    }

    int countDigigts()
    {
        int iTemp = 0;
        int iCnt = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iTemp = iTemp / 10;
            iCnt++;
        }

        return iCnt;
    }

    int completeNumber()
    {
        int iSum = 0;
        int iTemp = 0;
        int iDigit = 0;
        int iCnt = 0;

        iTemp = this.iNo;

        //System.out.println(countDigigts());
        iCnt = countDigigts();

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + calculatePower(iDigit, iCnt);
            //System.out.println("cal power"+calculatePower(iDigit, iCnt));
            iTemp = iTemp / 10;
            iCnt--;
        }

        return iSum;
    }
    boolean checkDisarium()
    {
        
        //System.out.println(completeNumber());

        return this.iNo == completeNumber();


    }
}

class Test
{
    public static void main(String args[])
    {
        Digits d = new Digits(135);

        if(d.checkDisarium())
            System.out.println("Disarium");
        else
            System.out.println("Not Disarium");
    }
}