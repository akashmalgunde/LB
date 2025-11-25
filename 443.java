class Swap
{
    public static void ping(int iNo1,int iNo2)
    {
        int iTemp = iNo1;
        iNo1 = iNo2;
        iNo2 = iTemp;

        System.out.println(iNo1);
        System.out.println(iNo2);
    }
}

class program443
{
    public static void main(String args[])
    {
        int iNo1 = 25;
        int iNo2 = 26;

        Swap sobj = new Swap();

        sobj.ping(iNo1,iNo2);

    }
}
