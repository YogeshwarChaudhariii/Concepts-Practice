/*
1. super is a reference keyword in Java that refers to 
   the immediate parent class object.
2. Access parent class variable
3. Call parent class method
4. Call parent class constructor
*/

class Parent
{
    int x = 10;
}

class Child extends Parent
{
    int x = 20;

    void show()
    {
        System.out.println("Child variable: "+x);          // Child variable
        System.out.println("Parent variable: "+super.x);    // Parent variable
    }
} 

class Super1
{
    public static void main(String args[])
    {
        Child c = new Child();
        c.show();
    }
}