class Book
{
    String sName;
    static int iCount;

    static
    {
        iCount = 0;
    }

    Book(String bName)
    {
        this.sName = bName;
        Book.iCount++;
    }

    public void Display()
    {
        System.out.println();
        System.out.println(this.sName);
        System.out.println(Book.iCount);
        System.out.println();
    }
}


class TestBook
{
    public static void main(String args[])
    {
        Book b1 = new Book("Book1");

        b1.Display();

        Book b2 = new Book("Book2");

        b1.Display();
        b2.Display();

        Book b3 = new Book("Book3");

        b1.Display();
        b2.Display();
        b3.Display();


    }
}