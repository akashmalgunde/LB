import java.util.Scanner;

class Digit
{
    int iNo;

    public Digit(int iNo)
    {
        this.iNo = iNo;
    }

    public boolean checkPrime(int iNo)
    {
        boolean bRet = true;

        for(int i = 2; i <= iNo / 2; i++)
        {
            if(iNo % i == 0)
            {
                bRet = false;
                break;
            }
        }

        return bRet;
    }
    public int calculateSum()
    {
        int iTemp = 0;
        int iDigit = 0;
        int iSum = 0;
        boolean bRet = false;
        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            bRet = checkPrime(iDigit);
            if(bRet == true)
            {
                iSum = iSum + iDigit;
            }
            iTemp = iTemp / 10;
        }

        return iSum;
    }
}
class Test
{
       public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = sobj.nextInt();

        Digit dobj = new Digit(iNo);

        int iRet = dobj.calculateSum();

        System.out.println(iRet);
    }
}