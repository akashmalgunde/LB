import java.util.Scanner;
class TestcheckPrime
{
    public static boolean checkPrime(int iNo)
    {
        boolean bRet = true;

        for(int i = 2; i <= iNo /2 ;i++)
        {
            if(iNo % i == 0)
            {
                bRet = false;
                break;
            } 
        }

        return bRet;
    }
}
class TestArr
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = new int[5];

        int Brr[] = new int[5];

        boolean bRet = false;

        int iSum = 0;

        for(int i = 0; i < Arr.length; i++)
            Arr[i] = sobj.nextInt();

        for(int i = 0; i < Arr.length; i++)
            System.out.print(Arr[i]+" ");

        int iCnt = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            bRet = TestcheckPrime.checkPrime(Arr[i]);

            if(bRet == true)
                iCnt++;
        }

        System.out.println();
        System.out.println(iCnt);


    }
}