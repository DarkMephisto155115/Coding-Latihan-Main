package Java.ProglanS3;

import java.util.Scanner;

public class latihan2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (true) {
            try {
                int number = 0;
                System.out.println("Masukkan angka : ");
                number = sc.nextInt();
                System.out.println("Angka yang dimasukkan : " + number);
                break;
            } catch (Exception e) {
                System.out.println("Input bukan angka!!!");
                sc.nextLine();
            }
        }

        sc.close();
    }
}
