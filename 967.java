class Number
{
    int iNo;

    public Number(int iNo)
    {
        this.iNo = iNo;
    }

    int countDigit()
    {
        int iNo = this.iNo;
        int i = 0;
        while(iNo != 0)
        {
            iNo = iNo / 10;
            i++;
        }

        return i;
    }

    boolean checkCountEven(int iNo)
    {
        boolean bRet = false;
        
        if(countDigit() % 2 == 0)
            bRet = true;
        
        return bRet;
    }

    int calculateSum(int iNo1,int iNo2)
    {
        return iNo1 + iNo2;
    }

    int calculateSquare(int iNo)
    {
        return iNo * iNo;
    }

    int powerOfTen()
    {
        int iPower = 1;
        for(int i = 1; i <= countDigit()/2; i++)
        {
            iPower = iPower * 10;
        }

        return iPower;
    }



    boolean checkTech()
    {
        boolean bRet = false;
        int iCnt = 0;
        int iNo1 = 0;
        int iNo2 = 0;
        int iSum = 0;
        int iSquare = 0;

        if(checkCountEven(iCnt))
        {
            iNo1 = this.iNo / powerOfTen();
            iNo2 = this.iNo % powerOfTen();

            iSum = calculateSum(iNo1, iNo2);
            iSquare = calculateSquare(iSum);

            if(iSquare == this.iNo)
                bRet = true;

            return bRet;
        }

        return bRet;


    }
}

class Test
{
    public static void main(String args[])
    {
        Number n = new Number(2020);

        if(n.checkTech())
            System.out.println("Tech Number");
        else
            System.out.println("Not Tech Number");
    }
}