package Java.Praktikum6.Praktikum6.src;

import Java.Praktikum6.Praktikum6.src.Mahasiswa.EmailException;
import Java.Praktikum6.Praktikum6.src.Mahasiswa.NameException;
import Java.Praktikum6.Praktikum6.src.Mahasiswa.NameSpaceException;
import Java.Praktikum6.Praktikum6.src.Mahasiswa.NimFormatException;
import Java.Praktikum6.Praktikum6.src.Mahasiswa.NimLengthException;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Mahasiswa mahasiswa = new Mahasiswa();
        String pilihanStr;
        while (true) {
            try {
                System.out.print("Masukkan Nama: ");
                mahasiswa.setNama(sc.nextLine());
                break;
            } catch (NameException | NameSpaceException e) {// tidak boleh ada spasi didepan dan harus huruf
                System.err.println("Waduh : " + e.getMessage());
            }
            // tidak memakai finally karena di source code saya tidak ada block code yang
            // harus dijalankan baik muncul exception ataupun tidak. Kayaknya
        }
        while (true) {
            try {
                System.out.print("Masukkan NIM: "); // ex. 202210370311402
                mahasiswa.setNim(sc.nextLine());
                break;
            } catch (NimFormatException | NimLengthException e) {// panjang 15, harus angka, ada angka 10370311 atau apa
                                                                 // itu
                                                                 // lupa saya
                System.err.println("Waduh : " + e.getMessage());

                // tidak memakai finally karena di source code saya tidak ada block code yang
                // harus dijalankan baik muncul exception ataupun tidak. Kayaknya
            }
        }
        while (true) {
            try {
                System.out.print("Masukkan Email: ");
                mahasiswa.setEmail(sc.nextLine());
                break;
            } catch (EmailException e) {// Format email
                System.err.println("Waduh : " + e.getMessage());
            }
            // tidak memakai finally karena di source code saya tidak ada block code yang
            // harus dijalankan baik muncul exception ataupun tidak. Kayaknya
        }

        System.out.println("\nData berhasi di input!!!");
        mahasiswa.printDataDiri();
        System.out.print("Ingin Mengulang Lagi (y/n) : ");
        pilihanStr = sc.next();
        if (pilihanStr.equalsIgnoreCase("Y")) {
            main(args);
        } else {
            sc.close();
            System.exit(0);
        }

    }
}
