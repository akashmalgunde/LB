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

        for(int i = 0; i < Arr.length; i++)
            Arr[i] = sobj.nextInt();

        for(int i = 0; i < Arr.length; i++)
            System.out.print(Arr[i]+" ");

        System.out.println("");


        int i = 0;
        int j = 0;
        int iTer = 0;
        int iTemp = 0;

        for(i = 0 , j = Arr.length-1,iTer =1; iTer <= (Arr.length / 2); iTer++,i++,j--)
        {
            System.out.print("Coming inside");
            iTemp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = iTemp;

            System.out.println("iTemp->"+iTemp+" Arr[i]->"+Arr[i]+"Arr[j]->"+Arr[j]);
        }

        for(i = 0; i < Arr.length; i++)
            System.out.print(Arr[i]+" ");

        System.out.println();

    }
}