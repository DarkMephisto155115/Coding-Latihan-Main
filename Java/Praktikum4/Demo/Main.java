package Java.Praktikum4.Demo;

import java.util.Scanner;

public class Main {
    Scanner sc = new Scanner(System.in);
    private int pilihan;

    public void setPilihan(int pilihan) {
        this.pilihan = pilihan;
    }

    public int getPilihan() {
        return pilihan;
    }

    public void mainMenu() {

        System.out.println("===========================================");
        System.out.println("| \tSelamat datang di Toko\t\t  |");
        System.out.println("| \tApokalips Supermarket\t\t  |");
        System.out.println("|   Tetap buka walaupun dunia terbakar\t  |");
        System.out.println("===========================================");
        System.out.println("1. Beli Barang");
        System.out.println("0. Exit");
        System.out.print("Pilih salah satu : ");
        setPilihan(sc.nextInt());
        switch (getPilihan()) {
            case 1:

                break;

            case 0:
                System.exit(0);
                break;

            default:

                break;
        }
    }

    public static void main(String[] args) {
        Main main = new Main();

        main.mainMenu();
    }
}
