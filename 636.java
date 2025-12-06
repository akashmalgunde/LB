class Student
{
    int iRollNo;
    int iAge;
    String sName;

    void Display()
    {
        System.out.println(this.iAge);
        System.out.println(this.iRollNo);
        System.out.println(this.sName);
    }

    void setRollNo(int iRollNo)
    {
        this.iRollNo = iRollNo;
    }

    void setAge(int iAge)
    {
        this.iAge = iAge;
    }

    void setName(String sName)
    {
        this.sName = sName;
    }

    int getRollNo()
    {
        return this.iRollNo;
    }

    int getAge()
    {
        return this.iRollNo;
    }

    String getName()
    {
        return this.sName;
    }
}

class TestStudent
{
    public static void main(String args[])
    {
        Student s = new Student();

        s.Display();

        s.setAge(22);
        s.setName("SS1");
        s.setRollNo(1);

        s.Display();

        Student S1 = s;

        System.out.println(s);
        System.out.println(S1);

        System.out.println(S1.getAge());
        System.out.println(S1.getName());
        System.out.println(S1.getRollNo());
        System.out.println("Coming here");

    }
}