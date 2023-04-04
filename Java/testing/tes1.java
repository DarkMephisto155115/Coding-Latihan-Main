package Java.testing;

public class tes1 {
    public static void main(String[] args) {
        boolean isValid = false;
        String Pass = "anjaYmaBar12*";
        if (Pass.matches(".*[a-z].*")) {
            // Enek Lowercase e
            System.out.println("gud1");
        } else {
            System.out.println("Bad1");
        }
        if (Pass.matches(".*[A-Z].*")) {
            // Enek Lowercase e
            System.out.println("gud2");
        } else {
            System.out.println("Bad2");
        }
        if (Pass.matches(".*\\d.*")) {
            // Enek Lowercase e
            System.out.println("gud3");
        } else {
            System.out.println("Bad3");
        }
        if (Pass.matches(".*[^a-zA-Z0-9 ].*")) {
            // Enek Lowercase e
            System.out.println("gud4");
        } else {
            System.out.println("Bad4");
        }
        System.out.println(isValid);
    }
}
