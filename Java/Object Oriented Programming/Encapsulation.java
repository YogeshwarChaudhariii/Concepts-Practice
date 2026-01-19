class Demo
{
    public String Name;         // Characteristics
    public int RollNo;
    public String Address;

    Demo(String StuName, int RollNumber, String Addr)       // Behaviour
    {
        this.Name = StuName;
        this.RollNo = RollNumber;
        this.Address = Addr;
    }

    public String getName()
    {
        return Name;
    }

    public int getRollNo()
    {
        return RollNo;
    }

    public String getAddress()
    {
        return Address;
    }

    public void Display()
    {
        System.out.println("Your name is: "+this.Name);
        System.out.println("Your roll number is: "+this.RollNo);
        System.out.println("Your address is: "+this.Address);
    }
}

public class Encapsulation
{
    
    public static void main(String[] args) 
    {
        Demo dobj = new Demo("Yogeshwar Chaudhari", 87, "Wakad");
        dobj.Display();
    }
}