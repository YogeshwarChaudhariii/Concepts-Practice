class Parent
{
    void Display()
    {
        System.out.println("Parent display");
    }
}

class Child extends Parent
{   
    void Display()
    {
        System.out.println("Child display");
        super.Display();
    }
} 

class Super2
{
    public static void main(String args[])
    {
        Child c = new Child();
        c.Display();
    }
}
