class Test
{
    public static void main(String args[])
    {
        int iNo = 72853;

        int iOddCount = 0;

        iOddCount = Test.oddCount(iNo);

        System.out.println("count of odd digit in number\n"+iOddCount);


    }

    static int oddCount(int iNo)
    {
        int iCount = 0;
        while(iNo != 0)
        {
            if((iNo % 10) % 2 != 0)
                iCount++;
            iNo = iNo / 10;
        }

        return iCount;
    }
}