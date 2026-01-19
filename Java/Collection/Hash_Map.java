import java.util.HashMap;

class Hash_Map 
{
    public static void main(String[] args) {
        HashMap<Integer, String> studentMap = new HashMap<>();

        // Adding elements
        studentMap.put(1, "Andrew");
        studentMap.put(2, "Ramu");
        studentMap.put(3, "Andrew"); // Duplicate value allowed

        // Access element
        System.out.println("Student with ID 2: " + studentMap.get(2));

        System.out.println("All students:");
        for(Integer id : studentMap.keySet()) {
            System.out.println("ID: " + id + ", Name: " + studentMap.get(id));
        }

        // Remove element
        studentMap.remove(1);
        System.out.println("After removal: " + studentMap);
    }
}
