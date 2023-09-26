import java.util.Scanner;

public class Tugas3 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Masukkan kata atau kalimat yang ingin dicek : ");
        String input = sc.nextLine();

        // Membersihkan tanda baca dan spasi serta menjadikan lowercase
        String inputBersihLowerCase = input.replaceAll("[^a-zA-Z]", "").toLowerCase();

        // Reverse dan menjadikan string kembali dengan string builder
        String inputReverse = new StringBuilder(inputBersihLowerCase).reverse().toString();

        if (!inputBersihLowerCase.equals(inputReverse)) {
            System.out.println("Kata atau kalimat yang dimasukkan bukan Palindrom.");
        } else {
            System.out.println("Kata atau kalimat yang dimasukkan adalah Palindrom.");
        }

        sc.close();
    }

}