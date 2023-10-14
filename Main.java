public class Main {
    public static void main(String[] args) {
        String str = "Hello, Hello, World!";
        char target = 'l';
        char replacement = 'X';

        String modifiedStr = str.replaceAll(String.valueOf(target), String.valueOf(replacement));

        System.out.println("Modified string: " + modifiedStr);   // Modified string: HeXXo, HeXXo, WorXd!
    }
}
