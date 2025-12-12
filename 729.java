import java.util.Scanner;

class TestArr
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = new int[5];

        int iSum = 0;

        for(int i = 0; i < Arr.length; i++)
            Arr[i] = sobj.nextInt();

        for(int i = 0; i < Arr.length; i++)
            System.out.print(Arr[i]+" ");


        for(int i = 0; i < Arr.length; i++)
            iSum = iSum + Arr[i];


        System.out.println(iSum);


    }
}