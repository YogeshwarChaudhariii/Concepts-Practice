import java.util.Scanner;

class Arithmetic
{
    public int iNo1, iNo2;

    public Arithmetic(int A, int B)
    {
        this.iNo1 = A;
        this.iNo2 = B;
    }

    public int Addition()
    {
        int iAns = 0;
        iAns = this.iNo1 + this.iNo2;
        return iAns;
    }
}

public class class2 
{
    public static void main(String[] args) {
        Arithmetic aobj = new Arithmetic(10, 20);

        int iValue1 = 0, iValue2 = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter second number: ");
        iValue2 = sobj.nextInt();

        iRet = aobj.Addition();

        System.out.println("Addition is: "+iRet);
    }
}
