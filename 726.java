class TestArr
{
    public static void main(String[] arr)
    {
        int arr1[] = new int[5];

        arr1[0] = 20;
        arr1[1] = 21;
        arr1[3] = 25;
        arr1[2] = 24;
        arr1[4] = 26;

        for(int i = 0; i < arr1.length; i++)
            System.out.println(arr1[i]);

        arr1[5] = 25;
    }
}