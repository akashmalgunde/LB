class Test
{
    public static void main(String args[])
    {
        String l1 = "HEllo";
        String l2 = "HEllo";
        String s = new String("HEllo");

        //System.out.println(l1.equals(s));
        //System.out.println(l1);
        //System.out.println(l2.hashCode());
        System.out.println(l1 == s);
        System.out.println(l1 == l2);

    }
}