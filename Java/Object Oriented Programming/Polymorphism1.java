 // Runtime / Method Overriding

class Animal
{
    public void AnimalSound()
    {
        System.out.println("The animal makes a sound");
    }
}

class Pig extends Animal
{
    public void AnimalSound()
    {
        System.out.println("The pig says: wee wee");
    }
}

class Dog extends Animal
{
    public void AnimalSound()
    {
        System.out.println("The dog says: bow bow");
    }
}

public class Polymorphism1 
{
    public static void main(String[] args) 
    {
        Animal MyAnimal = new Animal();     //create animal object
        Animal MyPig = new Pig();
        Animal MyDog = new Dog();

        MyAnimal.AnimalSound();
        MyPig.AnimalSound();
        MyDog.AnimalSound();
    }
}
