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

        System.out.println("Even elemenSts in the array are:");
        for(int i = 0; i < Arr.length; i++)
            if(Arr[i] % 2 == 0)
                System.out.println(Arr[i]);


        System.out.println("Odd elements in the array are:");
        for(int i = 0; i < Arr.length; i++)
            if(Arr[i] % 2 != 0)
                System.out.println(Arr[i]);


        //System.out.println(iSum);


    }
}