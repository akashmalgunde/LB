import java.util.Scanner;

class TestArr
{
    public static void main(String[] ags)
    {

        Scanner sobj = new Scanner(System.in);
        int Arr[] = new int[5];

        System.out.println("Enter array elements:");
        for(int i = 0; i < Arr.length; i++)
            Arr[i] = sobj.nextInt();

        System.out.println("Entered array elements are:");
        for(int i = 0; i < Arr.length; i++)
            System.out.println(Arr[i]);

        int iMin = 0;

        iMin = Arr[0];

        for(int i = 1; i < Arr.length; i++)
            if(iMin > Arr[i])
                iMin = Arr[i];

        System.out.println(iMin);


        int iMax = Arr[0];

        for(int i = 1; i < Arr.length; i++)
            if(iMax < Arr[i])
                iMax = Arr[i];

        System.out.println(iMax);

    }
}