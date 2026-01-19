import java.util.HashSet;

class Hash_Set
{
    public static void main(String[] args) {
        HashSet<Integer> numbers = new HashSet<>();

        // Adding elements
        numbers.add(10);
        numbers.add(20);
        numbers.add(10); // Duplicate ignored

        System.out.println("All numbers:");
        for(Integer num : numbers) {
            System.out.println(num);
        }
    }
}
