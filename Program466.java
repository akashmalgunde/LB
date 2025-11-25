class Demo
{
    public static void DisplayGrade(float fMarks)
    {
        if(fMarks > 75)
            System.out.println("First class with destinction");
        else if(fMarks <= 75 && fMarks >= 65)
            System.out.println("First Class");
        else if(fMarks < 65 && fMarks >= 55)
            System.out.println("Second Class");
        else if(fMarks >= 40 && fMarks < 55)
            System.out.println("Pass Class");
        else
            System.out.println("Fail");
    }
}


class Program466
{
    public static void main(String arhs[])
    {
        float fMarks = 85.20f;

        Demo.DisplayGrade(fMarks);

    }
}
