class Addition
{
    public static int CalculateAddition(int iNo1,int iNo2)
{
    int iRet = 0;

    iRet = iNo1 + iNo2;

    System.out.println(iRet);
    System.out.println(iNo1);
    System.out.println(iNo2);

    return iRet;
}   

}


class TestAddition
{
    public static void main(String args[])
{
    int iNo1 = 10;
    int iNo2 = 44;

    int iRet = 0;

    iRet = Addition.CalculateAddition(iNo1,iNo2);

    System.out.println(iRet);

}
}




