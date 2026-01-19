import java.util.ArrayList;

class Array_List
{
    public static void main(String[] args) {
        ArrayList<String> fruits = new ArrayList<>();

        fruits.add("Apple");
        fruits.add("Banana");
        fruits.add("Apple");        // Duplicate allowed

        System.out.println("First fruit: "+fruits.get(0));

        System.out.println("All fruits: ");
        for(String fruit : fruits)
        {
            System.out.println(fruit);
        }
    }
}
