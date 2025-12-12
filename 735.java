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

        int Arr[] = new int[6];

        int Brr[] = new int[3];

        boolean bRet = false;

        int iSum = 0;

        for(int i = 0; i < 3; i++)
            Arr[i] = sobj.nextInt();

        for(int i = 0; i < Arr.length; i++)
            System.out.print(Arr[i]+" ");

        System.out.println("");




        for(int i = 0; i < 3; i++)
            Brr[i] = sobj.nextInt();

        System.out.println();

        for(int i = 0; i < Brr.length; i++)
            System.out.println(Brr[i]);

        int iCnt = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] != 0)
            {
                iCnt++;
            }
            else
            {
                break;
            }
        }

        System.out.println("Value of counter:"+iCnt);



        for(int j = 0,i = iCnt; j < Brr.length; j++,i++)
            Arr[i] = Brr[j];

        for(int i = 0; i < Arr.length; i++)
            System.out.println(Arr[i]);

    }
}