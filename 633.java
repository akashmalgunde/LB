class Array
{
    public void DisplayEven(int Arr[])
    {
        for(int i = 0; i < 5; i++)
            if(Arr[i] % 2 == 0 )
                System.out.println(Arr[i]);
    }
}

class TestArray
{
    public static void main(String args[])
    {
        int Arr[] = new int[5];

        Arr[0] = 10;
        Arr[1] = 20;
        Arr[2] = 33;
        Arr[3] = 43;
        Arr[4] = 50;

        Array a = new Array();

        a.DisplayEven(Arr);
        
    }
}