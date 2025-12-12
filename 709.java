import java.util.Scanner;

class TestArr
{
    public static void main(String[] arr)
    {
        int[] arr1 = new int[5];
        int iEvenSum = 0;
        int iOddSum = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the array elements:");
        for(int i = 0; i < arr1.length; i++)
            arr1[i] = sobj.nextInt();

        System.out.println("Entered array elements are:");
        for(int i = 0; i < arr1.length;)
            System.out.println(arr1[i++]);

        for(int i = 0; i < arr1.length; i++)
            if(arr1[i] % 2 == 0)
                iEvenSum = iEvenSum + arr1[i];
                

            else
                iOddSum = iOddSum + arr1[i];


            System.out.println("Even sum is : "+iEvenSum);
            System.out.println("Odd sum is : "+iOddSum);






    }
}
