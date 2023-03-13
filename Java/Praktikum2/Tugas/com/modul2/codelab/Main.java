package Tugas.com.modul2.codelab;

import Tugas.com.modul2.codelab.Aritmatics.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Penjumlahan tambah = new Penjumlahan();
        Pengurangan kurang = new Pengurangan();
        Perkalian kali = new Perkalian();
        Pembagian bagi = new Pembagian();
        System.out.println("\nPenjumlahan");
        int x = 1;
        int y = 2;
        int z = 3;
        System.out.println("Hasil dari " + x + " + " + y + " Adalah : " + tambah.operation(x, y));
        System.out.println("Hasil dari " + x + " + " + y + " + " + z + " Adalah : " + tambah.operation(x, y, z));

        System.out.println("\nPengurangan");
        x = 10;
        y = 2;
        z = 3;
        System.out.println("Hasil dari " + x + " - " + y + " Adalah : " + kurang.operation(3, 2));
        System.out.println("Hasil dari " + x + " - " + y + " - " + z + " Adalah : " + kurang.operation(x, y, z));

        System.out.println("\nPerkalian");
        x = 2;
        y = 3;
        z = 2;
        System.out.println("Hasil dari " + x + " * " + y + " Adalah : " + kali.operation(x, y));
        System.out.println("Hasil dari " + x + " * " + y + " * " + z + " Adalah : " + kali.operation(x, y, z));

        System.out.println("\nPembagian");
        x = 100;
        y = 5;
        z = 3;
        System.out.println("Hasil dari " + x + " / " + y + " Adalah : " + bagi.operation(x, y));
        System.out.println("Hasil dari " + x + " / " + y + " / " + z + " Adalah : " + bagi.operation(x, y, z));
    }

}
