package Java.Praktikum6.Praktikum6.src;

import Java.Praktikum6.Praktikum6.src.Mahasiswa.EmailException;
import Java.Praktikum6.Praktikum6.src.Mahasiswa.NameException;
import Java.Praktikum6.Praktikum6.src.Mahasiswa.NimException;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Mahasiswa mahasiswa = new Mahasiswa();

        boolean mantap = true;
        while (mantap) {
            try {
                System.out.print("Masukkan Nama: ");
                mahasiswa.setNama(sc.nextLine());

                System.out.print("Masukkan NIM: "); // ex. 202210370311402
                mahasiswa.setNim(sc.nextLine());

                System.out.print("Masukkan Email: ");
                mahasiswa.setEmail(sc.nextLine());

                mantap = false;
            } catch (NameException e) {
                System.out.println("Error: " + e.getMessage());
            } catch (NimException e) {
                System.out.println("Error: " + e.getMessage());
            } catch (EmailException e) {
                System.out.println("Error: " + e.getMessage());
            } // tidak memakai finally karena di source code saya tidak ada block code yang
              // harus dijalankan baik muncul exception ataupun tidak.
        }

        System.out.println("\nData berhasi di input!!!");
        mahasiswa.printDataDiri();

    }
}
