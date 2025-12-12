import java.util.Scanner;

class TestArr
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = new int[5];

        int Brr[] = new int[5];

        int iSum = 0;

        for(int i = 0; i < Arr.length; i++)
            Arr[i] = sobj.nextInt();

        for(int i = 0; i < Arr.length; i++)
            System.out.print(Arr[i]+" ");

        for(int i = 0; i < Arr.length; i++)
            Brr[i] = sobj.nextInt();

        for(int i = 0; i < Brr.length; i++)
            System.out.println(Brr[i]+" ");

        //System.out.println("Even elemenSts in the array are:");

        int Crr[] = new int[5];

        for(int i = 0; i < Crr.length; i++)
            Crr[i] = Arr[i] + Brr[i];


        for(int i = 0; i < Crr.length; i++)
            System.out.println(Crr[i]);
       


        //System.out.println(iSum);


    }
}