class Hello
{
    public static double CalculateSal(double dBasicSalary,double dDA,double dTA,double dHRA)
    {
        double dTotalSal = 0.0f;
        if(0 < dBasicSalary)
            dBasicSalary = -dBasicSalary;

        if(dBasicSalary < 5000)
        {
            dDA = dBasicSalary * 10 / 100;
            dTA = dBasicSalary * 20 / 100;
            dHRA = dBasicSalary * 20 / 100;
        }
        else
        {
            dDA = dBasicSalary * 15 / 100;
            dTA = dBasicSalary * 25 / 100;
            dHRA = dBasicSalary * 30 / 100;
        }

        dTotalSal = dBasicSalary + dDA + dTA + dHRA;

        return dTotalSal;

    }
}

class Demo
{
    public static void main(String args[])
    {
        double dBasicSalary = 20000;
        double dDA = 200;
        double dTA = 0;
        double dHRA = 250;
        double dTotalSalary = 0.0f;

        dTotalSalary = Hello.CalculateSal(dBasicSalary,dDA,dTA,dHRA);

        System.out.printf("%f is total salary\n", dTotalSalary);
    }
    
}
