class Addition
{
    int iNo1;
    int iNo2;

    void setNo1(int iNo)
    {
        this.iNo1 = iNo;
    }

    void setNo2(int iNo)
    {
        this.iNo2 = iNo;
    }

    int getNo1()
    {
        return this.iNo1;
    }

    int getNo2()
    {
        return this.iNo2;
    }
}

class TestAddtion
{
    public static void main(String args[])
    {
        Addition a = new Addition();

        a.setNo1(10);
        a.setNo2(40);

        System.out.println(a.getNo1());
        System.out.println(a.getNo2());
    }
}
