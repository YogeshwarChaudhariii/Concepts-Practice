import java.util.Scanner;

public class p4 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string: ");
        String Name = sobj.nextLine();

        for(int i = 0; i < Name.length(); i++)
        {
            System.out.println(Name.charAt(i));
        }
    }
}
