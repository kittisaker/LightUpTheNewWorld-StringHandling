public class Main {
    public static void main(String[] args) {
        String str = "apple,banana,cherry";
        String[] tokens = str.split(",");

        for (String token : tokens) {
            System.out.println(token);
        }
    }
}
