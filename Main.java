public class Main {
    public static void main(String[] args) {
        String str = "Hello, World!";
        String prefix = "Hello";
        String suffix = "World!";

        boolean hasPrefix = str.startsWith(prefix);
        boolean hasSuffix = str.endsWith(suffix);

        if (hasPrefix) {
            System.out.println("String has the prefix.");
        } else {
            System.out.println("String does not have the prefix.");
        }

        if (hasSuffix) {
            System.out.println("String has the suffix.");
        } else {
            System.out.println("String does not have the suffix.");
        }
    }
}
