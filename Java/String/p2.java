// Calculate string length

import java.util.Scanner;

public class p2 
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name: ");
        String Name = sobj.nextLine();

        System.out.println("String length is: "+Name.length());
    }
}
