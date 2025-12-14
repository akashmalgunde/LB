




class Fresher
{
    int iID;
    String sName;
    int iAge;

    public Fresher()
    {
        this.iID = 101;
        this.sName = "Not Given";
        this.iAge = 22;
    }

    public void Display()
    {
        System.out.println(this.iID);
        System.out.println(this.sName);
        System.out.println(this.iAge);
        System.out.println();
    }
}

class TestFresher
{
    public static void main(String args[])
    {
        Fresher fobj = new Fresher();

        fobj.Display();

        Fresher fobj1 = new Fresher();

        fobj1.Display();

    
    }
}