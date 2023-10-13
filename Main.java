public class Main {
    public static void main(String[] args) {
        String str1 = "Hello";  // "Hello" is placed in the string constant pool
        String str2 = "Hello"; // Reuses the existing "Hello" from the poo
        String str3 = new String("Hello"); // Creates a new string object (not in the pool)

        System.out.println(str1 == str2); // true (both point to the same "Hello" in the pool)
        System.out.println(str1 == str3); // false (str3 is a new object)
    }
}
