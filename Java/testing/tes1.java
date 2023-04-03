package Java.testing;

public class tes1 {
    public static void main(String[] args) {
        boolean isValid = false;
        String Pass = "anjaY maBar";
        if (Pass.matches(".*[^a-zA-Z0-9 ].*")) {
            isValid = true;
        }
        System.out.println(isValid);
    }
}
