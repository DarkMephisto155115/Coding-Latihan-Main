package Demo.modul2;

import Demo.modul2.Bangun2D.*;
import Demo.modul2.Bangun3D.*;

import java.util.Scanner;
import java.lang.System;

public class Main {
    Scanner sc = new Scanner(System.in);
    public int pilihanMenu;
    public String pilihanStr;

    public void setPilihanMenu(int pilihanMenu) {
        this.pilihanMenu = pilihanMenu;
    }

    public int getPilihanMenu() {
        return pilihanMenu;
    }

    public void setPilihanStr(String pilihanStr) {
        this.pilihanStr = pilihanStr;
    }

    public String getPilihanStr() {
        return pilihanStr;
    }

    public void amimir() {
        System.exit(0);
    }

    public void aduhMasBro() {
        System.out.println("\nInput Salah\n");
    }

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
        try {
            setPilihanMenu(sc.nextInt());
        } catch (Exception e) {
            aduhMasBro();
            MainMenu();
        }
        switch (getPilihanMenu()) {
            case 1:
                hitung2D();
                break;
            case 2:
                hitung3D();
                break;
            case 0:
                amimir();
                break;
            default:
                aduhMasBro();
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
        try {
            setPilihanMenu(sc.nextInt());
        } catch (Exception e) {
            aduhMasBro();
            hitung2D();
        }
        switch (getPilihanMenu()) {
            case 1:
                Persegi persegi = new Persegi();
                System.out.println("\nMasukkan Sisi : ");
                double sisi = sc.nextDouble();
                persegi.infoBangun(sisi);
                persegi.hitungLuas();
                persegi.hitungKeliling();
                break;
            case 2:
                PersegiPanjang persegiPanjang = new PersegiPanjang();
                System.out.println("\nMasukkan Panjang : ");
                double panjang = sc.nextDouble();
                System.out.println("Masukkan Lebar : ");
                double lebar = sc.nextDouble();
                persegiPanjang.infoBangun(panjang, lebar);
                persegiPanjang.hitungLuas();
                persegiPanjang.hitungKeliling();
                break;
            case 3:
                Segitiga segitiga = new Segitiga();
                System.out.println("\nMasukkan Alas : ");
                double alas = sc.nextDouble();
                System.out.println("Masukkan Tinggi : ");
                double tinggi = sc.nextDouble();
                segitiga.infoBangun(alas, tinggi);
                segitiga.hitungLuas();
                segitiga.hitungKeliling();
                System.out.println("Kembali ke menu ? (y/n) : ");
                break;
            case 4:
                Lingkaran lingkaran = new Lingkaran();
                System.out.println("\nMasukkan Jari-jari : ");
                double jariJari = sc.nextDouble();
                lingkaran.infoBangun(jariJari);
                lingkaran.hitungLuas();
                lingkaran.hitungKeliling();
                break;
            case 5:
                JajarGenjang jajarGenjang = new JajarGenjang();
                System.out.println("\nMasukkan Alas : ");
                double alasJ = sc.nextDouble();
                System.out.println("Masukkan Tinggi : ");
                double tinggiJ = sc.nextDouble();
                System.out.println("Masukkan Miring : ");
                double miring = sc.nextDouble();
                jajarGenjang.infoBangun(alasJ, tinggiJ, miring);
                jajarGenjang.hitungLuas();
                jajarGenjang.hitungKeliling();
                break;
            case 6:
                BelahKetupat belahKetupat = new BelahKetupat();
                System.out.println("\nMasukkan Sisi : ");
                double sisiB = sc.nextDouble();
                System.out.println("Masukkan D1 : ");
                double d1 = sc.nextDouble();
                System.out.println("Masukkan D2: ");
                double d2 = sc.nextDouble();
                belahKetupat.infoBangun(sisiB, d1, d2);
                belahKetupat.hitungLuas();
                belahKetupat.hitungKeliling();
                break;
            case 0:
                MainMenu();
                break;
            default:
                aduhMasBro();
                hitung2D();
                break;
        }
        System.out.println("Kembali ke menu ? (y/n) : ");
        sc.nextLine();
        setPilihanStr(sc.nextLine());
        if (getPilihanStr().equals("y") || getPilihanStr().equals("Y")) {
            hitung2D();
        } else if (getPilihanStr().equals("n") || getPilihanStr().equals("N")) {
            amimir();
        } else {
            System.out.println("Input Salah!!!, kembali ke main menu");
            MainMenu();
        }
    }

    public void hitung3D() {
        System.out.println("\nAplikasi Penghitung Volume Bangun Ruang");
        System.out.println("1. Kubus");
        System.out.println("2. Balok");
        System.out.println("3. Tabung");
        System.out.println("4. Bola");
        System.out.println("5. Kerucut");
        System.out.println("0. Kembali");
        System.out.println("Pilih bangun ruang yang ingin di hitung : ");
        try {
            setPilihanMenu(sc.nextInt());
        } catch (Exception e) {
            aduhMasBro();
            hitung3D();
        }
        switch (getPilihanMenu()) {
            case 1:
                Kubus kubus = new Kubus();
                System.out.println("\nMasukkan Rusuk : ");
                double rusuk = sc.nextDouble();
                kubus.infoBangun(rusuk);
                kubus.hitungVolume();
                break;
            case 2:
                Balok balok = new Balok();
                System.out.println("\nMasukkan Panjang : ");
                double panjang = sc.nextDouble();
                System.out.println("Masukkan Lebar : ");
                double lebar = sc.nextDouble();
                System.out.println("Masukkan Tinggi : ");
                double tinggi = sc.nextDouble();
                balok.infoBangun(panjang, lebar, tinggi);
                balok.hitungVolume();
                break;
            case 3:
                Tabung tabung = new Tabung();
                System.out.println("\nMasukkan Jari-jari : ");
                double jariJariT = sc.nextDouble();
                System.out.println("\nMasukkan Tinggi : ");
                double tinggiT = sc.nextDouble();
                tabung.infoBangun(jariJariT, tinggiT);
                tabung.hitungVolume();
                break;
            case 4:
                Bola bola = new Bola();
                System.out.println("\nMasukkan Jari-jari : ");
                double jariJari = sc.nextDouble();
                bola.infoBangun(jariJari);
                bola.hitungVolume();
                break;
            case 5:
                Kerucut kerucut = new Kerucut();
                System.out.println("\nMasukkan Jari-jari : ");
                double jariJariK = sc.nextDouble();
                System.out.println("\nMasukkan Tinggi : ");
                double tinggiK = sc.nextDouble();
                kerucut.infoBangun(jariJariK, tinggiK);
                kerucut.hitungVolume();
                break;
            case 0:
                MainMenu();
                break;
            default:
                aduhMasBro();
                hitung3D();
                break;
        }
        System.out.println("Kembali ke menu ? (y/n) : ");
        sc.nextLine();
        setPilihanStr(sc.nextLine());
        if (getPilihanStr().equals("y") || getPilihanStr().equals("Y")) {
            hitung3D();
        } else if (getPilihanStr().equals("n") || getPilihanStr().equals("N")) {
            amimir();
        } else {
            System.out.println("Input Salah!!!, kembali ke main menu");
            MainMenu();
        }
    }

    public static void main(String[] args) {
        System.out.println("🅰🆆🅸🅺🆆🅾🅺");
        Main main = new Main();
        main.MainMenu();
    }
}
