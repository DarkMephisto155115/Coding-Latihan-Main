package Java.ProglanS3;

public class latihan3 {
    public static void main(String[] args) {
        System.out.println(add(5, 3));

        // review code or something idk tho

        // Testing add() Method

        int sum1 = add(9, 5);
        System.out.println("9 + 5 = " + sum1);// Expected Output 14

        int sum2 = add(61, 8);
        System.out.println("61 + 8 = " + sum2);// Expected Output 69 (NICE)
    }

    public static int add(int a, int b) {
        return a + b;
    }
}
