class Date
{
    int iDay,iMonth,iYear;
}

class TestDate
{
    public static void main(String args[])
    {
        Date Dobj = new Date();

        Dobj.iDay = 2;
        Dobj.iMonth = 12;
        Dobj.iYear = 2025;

        Date Dobj1 = new Date();


        System.out.print(Dobj.iDay+"/"+Dobj.iMonth+"/"+Dobj.iYear+"\n");

        System.out.printf("%d/%d/%d\n",Dobj1.iDay,Dobj1.iMonth,Dobj1.iYear);

        System.out.println(Dobj);

        System.out.println(Dobj1);

        int iNo = 0;

        System.out.println(iNo);

        if(Dobj != Dobj1)
            System.out.println("Unique");
        else
            System.out.println("Not Unique");


    }
}