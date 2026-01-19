class Calculator
{
    int Add(int A, int B)
    {
        return A + B;
    }

    int Add(int A, int B, int C)
    {
        return A + B + C;
    }

    double Add(double A, double B)
    {
        return A + B;
    }
}

public class Polymorphism2 
{
    public static void main(String[] args) 
    {
        Calculator cobj = new Calculator();

        System.out.println(cobj.Add(10, 20));
        System.out.println(cobj.Add(10, 20, 30));
        System.out.println(cobj.Add(10.5, 20.5));
    }
}
