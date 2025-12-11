class TestStringLiteral 
{
    public static void main(String args[])
    {
        String s1 = "Hello";
        String s2 = "Hello";

        if(s1 == s2)
            System.out.println("Concept is true of string literal");
        else
            System.out.println("Concept is not true");

        String s3 = new String("Hello");

        if(s1 != s3)
            System.out.println("Memory get allocated in heap");
        else
            System.out.println("Memory get allocated in string pool");

        if(s1.equals(s3))
            System.out.println("Both the content are same");
    }
}
