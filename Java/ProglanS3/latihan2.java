package Java.ProglanS3;

import java.util.Scanner;

public class latihan2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            System.out.print("Masukkan angka : ");
            int number = sc.nextInt();
            System.out.println("Angka yang dimasukkan : " + number);

        } catch (Exception e) {
            System.out.println("Input bukan angka !!!");
            sc.nextLine();
        } finally {
            sc.close();
        }

    }
}
