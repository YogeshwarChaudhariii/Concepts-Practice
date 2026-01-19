import java.util.*;

class Demo
{
    public int i, j;

    public Demo()
    {
        System.out.println("Inside default constructor");
    }

    public Demo(int a, int b)
    {
        this.i = a;
        this.j = b;
    }
}

class Constructor
{
    public static void main(String args[])
        {
            Demo dobj1 = new Demo();
            Demo dobj2 = new Demo(11, 21);

            dobj1 = null;
            dobj2 = null;

            System.gc();
        }
}