// Calling parent constructor

class Parent
{
    Parent()
    {
        System.out.println("Parent Constructor");
    }
}

class Child extends Parent
{   
    Child()
    {
        super();
        System.out.println("Child Constructor");
    }
} 

class Super3
{
    public static void main(String args[])
    {
        Child c = new Child();
    }
}
