class Student
{
    int iRollNo;
    int iAge;
    String sName;
}

class TestStudent
{
    public static void main(String args[])
    {
        Student s = new Student();

        s.iRollNo = 21;
        s.iAge = 22;
        s.sName = "S1";

        System.out.println(s.iAge);
        System.out.println(s.iRollNo);
        System.out.println(s.sName);
    }
}