class Parent
{
    void Show()
    {
        System.out.println("Parent class");
    }
}

class Child extends Parent
{
    void Display()
    {
        System.out.println("Child class");
    }
}

public class Inheritance 
{
    public static void main(String[] args) 
    {
        Child cobj = new Child();

        cobj.Show();
        cobj.Display();
    }
}
