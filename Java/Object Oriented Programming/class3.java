import java.util.Scanner;

class EvenOdd
{
    public void CheckEvenOdd(int iValue)
    {
        if (iValue % 2 == 0) {
            System.out.println("Even");
        }
        else
        {
            System.out.println("Odd");
        }
    }
}

public class class3 {
    public static void main(String[] args) 
    {
        EvenOdd eobj = new EvenOdd();
        int iNo = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number: ");
        iNo = sobj.nextInt();

        eobj.CheckEvenOdd(iNo);
    }
}
