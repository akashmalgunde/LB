class Student
{
    int id;
    String sName;
    static String sCollegeName;

    static 
    {
        sCollegeName = "Tc College";
    }

    public Student(int id,String sName)
    {
        this.id = 10;
        this.sName = sName;
    }

    static void setCollegeName(String sCname)
    {
        Student.sCollegeName = sCname;
    }

    void Display()
    {
        System.out.println(this.id);
        System.out.println(this.sName);
        System.out.println(Student.sCollegeName);

    }
}

class TestStudent
{
    public static void main(String args[])
    {
        Student aobj1 = new Student(101,"Ram");

        aobj1.Display();

        Student aobj2 = new Student(102,"Shyam");

        aobj2.Display();

        Student.setCollegeName("Vp College");

        aobj1.Display();

        aobj2.Display();


    }
}