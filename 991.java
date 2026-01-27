class Digits
{
    int iNo;

    public Digits(int i)
    {
        this.iNo = i;
    }

    int countFrequency(int iNo)
    {
        int iTemp = 0;
        int iDigit = 0;
        int iCnt = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit == iNo)
                iCnt++;
            iTemp = iTemp / 10;
        }

        return iCnt;
    }

    boolean checkLeft(int i,int iNo)
    {
        boolean bRet = false;

        int iTemp = 0;

        iTemp = this.iNo;

        for(int j = 1; j < i; j++)
        {
            if(iTemp % 10 == iNo)
            {
                bRet = true;
                break;
            }
            iTemp = iTemp / 10;
        }

        return bRet;

    }

    void displayCount()
    {
        int iTemp = 0;
        int iDigit = 0;
        int iCnt = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iCnt++;
            if(!checkLeft(iCnt,iDigit))
                System.out.println(iDigit+"->"+countFrequency(iDigit));
            iTemp = iTemp / 10;
        }
    }
}

class Test
{
    public static void main(String args[])
    {
        Digits d = new Digits(122333);

        d.displayCount();
    }
}