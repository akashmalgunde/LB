class Test
{
    public static void main(String args[])
    {
        int iNo = 529014;
        int iSmall = 9;
        int iDigit = 0;

        while(iNo != 0)
        {
            //System.out.println("coming inside");
            iDigit = iNo % 10;
            if(iDigit < iSmall)
                iSmall = iDigit;

            if(iSmall == 0)
                break;
            iNo = iNo / 10;


        }

        System.out.println(iSmall);
    }   
}
