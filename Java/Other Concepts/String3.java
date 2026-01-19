import java.util.Scanner;

public class String3 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string: ");
        String Name = sobj.nextLine();

        System.out.println(Name.charAt(0));
        System.out.println(Name.charAt(1));
        System.out.println(Name.charAt(2));
    }
}

