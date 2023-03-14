package Demo.modul2;

import java.util.Scanner;
import java.lang.System;

public class Main {
    Scanner sc = new Scanner(System.in);

    public void MainMenu() {
        System.out.println("====================================");
        System.out.println("\t Selamat Di Aplikasi");
        System.out.println("   Mathematics Malignant Anihilation");
        System.out.println("     Hitung Luas Keliling Volume");
        System.out.println("====================================");
        System.out.println("1. Menghitung Bangun 2 Dimensi");
        System.out.println("2. Menghitung Bangun 3 Dimensi");
        System.out.println("0. Exit");
        System.out.println("Pilih menu : ");
        int pilihan = sc.nextInt();
        switch (pilihan) {
            case 1:
                hitung2D();
                break;
            case 2:
                hitung3D();
                break;
            case 0:
                System.exit(0);
                break;
            default:
                System.out.println("Input Salah!!!");
                MainMenu();
                break;
        }
    }

    public void hitung2D() {
        System.out.println("\nAplikasi Penghitung Luas dan Keliling Bangun Datar");
        System.out.println("1. Persegi");
        System.out.println("2. Persegi Panjang");
        System.out.println("3. Segitiga");
        System.out.println("4. Lingkaran");
        System.out.println("5. Jajar Genjang");
        System.out.println("6. Belah Ketupat");
        System.out.println("0. Kembali");
        System.out.println("Pilih bangun datar yang ingin di hitung : ");
        int pilihan = sc.nextInt();
        switch (pilihan) {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 6:

                break;
            case 0:
                MainMenu();
                break;
            default:
                System.out.println("Input Salah!!!");
                hitung2D();
                break;
        }
    }

    public void hitung3D() {
        System.out.println("\nAplikasi Penghitung Volume Bangun Ruang");
        System.out.println("1. Kubus");
        System.out.println("2. Balok");
        System.out.println("3. Tabung");
        System.out.println("4. Bola");
        System.out.println("5. Kerucut");
        System.out.println("6. Belah Ketupat");
        System.out.println("0. Kembali");
        System.out.println("Pilih bangun ruang yang ingin di hitung : ");
        int pilihan = sc.nextInt();
        switch (pilihan) {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 0:
                MainMenu();
                break;
            default:
                System.out.println("Input Salah!!!");
                hitung3D();
                break;
        }
    }

    public static void main(String[] args) {
        Main main = new Main();
        main.MainMenu();
    }
}
