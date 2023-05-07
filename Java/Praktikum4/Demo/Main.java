package Java.Praktikum4.Demo;

import java.text.DecimalFormat;
import java.text.NumberFormat;

import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;

import Java.Praktikum4.Demo.Item.ItemList.*;
import Java.Praktikum4.Demo.KasirSistem.*;
import Java.Praktikum4.Demo.Membership.Karyawan;
import Java.Praktikum4.Demo.Membership.Pelanggan;

public class Main {
    Scanner sc = new Scanner(System.in);
    Locale locale = new Locale.Builder().setLanguage("id").setRegion("ID").build();
    NumberFormat currencyFormatter = NumberFormat.getCurrencyInstance(locale);
    List<String> listBarang = new ArrayList<String>();
    Cashier cashier = new Cashier();
    private int i = 0;
    private int pilihan;
    private String pilihanStr;
    private String nama;
    private String memberType;
    private double memberDisc;
    private double uangDibayarkan;

    // Setter, Getter
    public List<String> getListBarang() {
        return listBarang;
    }

    public void setUangDibayarkan(double uangDibayarkan) {
        this.uangDibayarkan = uangDibayarkan;
    }

    public double getUangDibayarkan() {
        return uangDibayarkan;
    }

    public void setI(int i) {
        this.i = i;
    }

    public int getI() {
        return i;
    }

    public void setPilihanStr(String pilihanStr) {
        this.pilihanStr = pilihanStr;
    }

    public String getPilihanStr() {
        return pilihanStr;
    }

    public void setMemberDisc(double memberDisc) {
        this.memberDisc = memberDisc;
    }

    public double getMemberDisc() {
        return memberDisc;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public String getNama() {
        return nama;
    }

    public void setMemberType(String memberType) {
        this.memberType = memberType;
    }

    public String getMemberType() {
        return memberType;
    }

    public void setPilihan(int pilihan) {
        this.pilihan = pilihan;
    }

    public int getPilihan() {
        return pilihan;
    }

    // Method
    public void loginMenu() {
        System.out.println("===========================================");
        System.out.println("|\t\t\t\t\t  |");
        System.out.println("| \t    Pengisian Data Pelanggan\t  |");
        System.out.println("|\t\t\t\t\t  |");
        System.out.println("===========================================");
        System.out.println("1. Member");
        System.out.println("2. Karyawan");
        System.out.println("0. Exit");
        System.out.print("Pilih salah satu : ");
        setPilihan(sc.nextInt());
        switch (getPilihan()) {
            case 1:
                System.out.print("Masukkan Nama : ");
                setNama(sc.next());
                System.out.print("Masukkan Tipe Member : ");
                setMemberType(sc.next());
                Pelanggan pelanggan = new Pelanggan(getNama(), getMemberType());
                setMemberDisc(pelanggan.getMembershipDiscount());
                break;
            case 2:
                System.out.print("Masukkan Nama : ");
                setNama(sc.next());
                Karyawan karyawan = new Karyawan(getNama());
                setMemberDisc(karyawan.getDISCOUNT());
                setMemberType(karyawan.getMemberType());
                break;
            case 0:
                System.exit(0);
                break;

            default:
                System.out.println("Input Salah!!!");
                loginMenu();
                break;
        }
    }

    public void mainMenu() {
        System.out.println("\n===========================================");
        System.out.println("| \tSelamat datang di Toko\t\t  |");
        System.out.println("| \tApokalips Supermarket\t\t  |");
        System.out.println("|   Tetap buka walaupun dunia terbakar\t  |");
        System.out.println("===========================================");
        System.out.println("1. Beli Barang");
        System.out.println("2. Cek Barang");
        System.out.println("0. Kembali");
        System.out.print("Pilih salah satu : ");
        setPilihan(sc.nextInt());
        switch (getPilihan()) {
            case 1:
                menuBeliBarang();
                break;
            case 2:
                menuCekBarang();
                break;
            case 0:
                loginMenu();
                break;

            default:
                System.out.println("Input Salah!!!");
                mainMenu();
                break;
        }
    }

    public void menuBeliBarang() {
        System.out.println("===========================================");
        System.out.println("| \t    Menu Pembelian\t\t  |");
        System.out.println("| \t    Barang Yang Tersedia\t  |");
        System.out.println("|\t\t\t\t\t  |");
        System.out.println("===========================================");
        System.out.println("1. Gitar Elektronik");
        System.out.println("2. Piano");
        System.out.println("3. Gitar");
        System.out.println("4. Ukulele");
        System.out.println("5. Klarinet");
        System.out.println("6. Kipas");
        System.out.println("7. Pc Gaming");
        System.out.println("8. Televisi");
        System.out.println("9. Setrika");
        System.out.println("10. Excalibur");
        System.out.println("0. Kembali");
        System.out.print("Pilih barang yang ingin dibeli : ");
        setPilihan(sc.nextInt());
        switch (getPilihan()) {
            case 1:
                GitarElektrik gitarElektrik = new GitarElektrik();
                gitarElektrik.deskripsiBarang();
                System.out.println("===========================================");
                System.out.println("| Ingin Membeli Barang?(y/n)\t\t  |");
                System.out.println("===========================================");
                System.out.print("Pilih Salah Satu : ");
                setPilihanStr(sc.next());
                if (getPilihanStr().equals("y")) {
                    cashier.addPrice(gitarElektrik.getDiscountedPrice());
                    listBarang.add(gitarElektrik.getNamaBarang());
                } else {
                    menuBeliBarang();
                }
                break;
            case 2:
                Piano piano = new Piano();
                piano.deskripsiBarang();
                System.out.println("===========================================");
                System.out.println("| Ingin Membeli Barang?(y/n)\t\t  |");
                System.out.println("===========================================");
                System.out.print("Pilih Salah Satu : ");
                setPilihanStr(sc.next());
                if (getPilihanStr().equals("y")) {
                    cashier.addPrice(piano.getDiscountedPrice());
                    listBarang.add(piano.getNamaBarang());
                } else {
                    menuBeliBarang();
                }
                break;
            case 3:
                Gitar gitar = new Gitar();
                gitar.deskripsiBarang();
                System.out.println("===========================================");
                System.out.println("| Ingin Membeli Barang?(y/n)\t\t  |");
                System.out.println("===========================================");
                System.out.print("Pilih Salah Satu : ");
                setPilihanStr(sc.next());
                if (getPilihanStr().equals("y")) {
                    cashier.addPrice(gitar.getDiscountedPrice());
                    listBarang.add(gitar.getNamaBarang());
                } else {
                    menuBeliBarang();
                }
                break;
            case 4:
                Ukulele ukulele = new Ukulele();
                ukulele.deskripsiBarang();
                System.out.println("===========================================");
                System.out.println("| Ingin Membeli Barang?(y/n)\t\t  |");
                System.out.println("===========================================");
                System.out.print("Pilih Salah Satu : ");
                setPilihanStr(sc.next());
                if (getPilihanStr().equals("y")) {
                    cashier.addPrice(ukulele.getDiscountedPrice());
                    listBarang.add(ukulele.getNamaBarang());
                } else {
                    menuBeliBarang();
                }
                break;
            case 5:
                Klarinet klarinet = new Klarinet();
                klarinet.deskripsiBarang();
                System.out.println("===========================================");
                System.out.println("| Ingin Membeli Barang?(y/n)\t\t  |");
                System.out.println("===========================================");
                System.out.print("Pilih Salah Satu : ");
                setPilihanStr(sc.next());
                if (getPilihanStr().equals("y")) {
                    cashier.addPrice(klarinet.getDiscountedPrice());
                    listBarang.add(klarinet.getNamaBarang());
                } else {
                    menuBeliBarang();
                }
                break;
            case 6:
                KipasAngin kipasAngin = new KipasAngin();
                kipasAngin.deskripsiBarang();
                System.out.println("===========================================");
                System.out.println("| Ingin Membeli Barang?(y/n)\t\t  |");
                System.out.println("===========================================");
                System.out.print("Pilih Salah Satu : ");
                setPilihanStr(sc.next());
                if (getPilihanStr().equals("y")) {
                    cashier.addPrice(kipasAngin.getDiscountedPrice());
                    listBarang.add(kipasAngin.getNamaBarang());
                } else {
                    menuBeliBarang();
                }
                break;
            case 7:
                PcGaming pcGaming = new PcGaming();
                pcGaming.deskripsiBarang();
                System.out.println("===========================================");
                System.out.println("| Ingin Membeli Barang?(y/n)\t\t  |");
                System.out.println("===========================================");
                System.out.print("Pilih Salah Satu : ");
                setPilihanStr(sc.next());
                if (getPilihanStr().equals("y")) {
                    cashier.addPrice(pcGaming.getDiscountedPrice());
                    listBarang.add(pcGaming.getNamaBarang());
                } else {
                    menuBeliBarang();
                }
                break;
            case 8:
                Televisi televisi = new Televisi();
                televisi.deskripsiBarang();
                System.out.println("===========================================");
                System.out.println("| Ingin Membeli Barang?(y/n)\t\t  |");
                System.out.println("===========================================");
                System.out.print("Pilih Salah Satu : ");
                setPilihanStr(sc.next());
                if (getPilihanStr().equals("y")) {
                    cashier.addPrice(televisi.getDiscountedPrice());
                    listBarang.add(televisi.getNamaBarang());
                } else {
                    menuBeliBarang();
                }
                break;
            case 9:
                Setrika setrika = new Setrika();
                setrika.deskripsiBarang();
                System.out.println("===========================================");
                System.out.println("| Ingin Membeli Barang?(y/n)\t\t  |");
                System.out.println("===========================================");
                System.out.print("Pilih Salah Satu : ");
                setPilihanStr(sc.next());
                if (getPilihanStr().equals("y")) {
                    cashier.addPrice(setrika.getDiscountedPrice());
                    listBarang.add(setrika.getNamaBarang());
                } else {
                    menuBeliBarang();
                }
                break;
            case 10:
                Excalibur excalibur = new Excalibur();
                excalibur.deskripsiBarang();
                System.out.println("===========================================");
                System.out.println("| Ingin Membeli Barang?(y/n)\t\t  |");
                System.out.println("===========================================");
                System.out.print("Pilih Salah Satu : ");
                setPilihanStr(sc.next());
                if (getPilihanStr().equalsIgnoreCase("y")) {
                    cashier.addPrice(excalibur.getDiscountedPrice());
                    listBarang.add(excalibur.getNamaBarang());
                } else {
                    menuBeliBarang();
                }
                break;
            case 0:
                setI(0);
                listBarang.clear();
                menuCekBarang();
                break;

            default:
                System.out.println("Input Salah!!!");
                menuDisplayAlatMusik();
                break;

        }
        i += 1;
        System.out.println("\n===========================================");
        System.out.println("| Ingin Membeli lagi?(y/n)\t\t  |");
        System.out.println("===========================================");
        System.out.print("Pilih Salah Satu : ");
        setPilihanStr(sc.next());
        if (getPilihanStr().equalsIgnoreCase("y")) {
            menuBeliBarang();
        } else {
            menuPembayaran();
        }

    }

    public void menuPembayaran() {
        cashier.vouchers[0] = new Voucher("MORBINTIME", 0.1, 7);
        cashier.vouchers[1] = new Voucher("AsMoDeUs", 0.2, 30);
        cashier.vouchers[2] = new Voucher("menggatot69420", 0.25, 1);
        cashier.vouchers[3] = new Voucher("BerkahHariRaya", 0.15, -1);
        cashier.vouchers[4] = new Voucher("BerkahRamadhan", 0.05, -10);
        DecimalFormat df = new DecimalFormat("#%");
        int i2;
        System.out.print("Punya Voucher? (y/n) : ");
        setPilihanStr(sc.next());
        if (getPilihanStr().equals("y")) {
            System.out.print("Masukkan Kode Voucher : ");
            cashier.addVoucher(sc.next());
            for (i2 = 0; i2 < 5; i2++) {
                if (cashier.code.equals(cashier.vouchers[i2].getCode())) {
                    if (cashier.vouchers[i2].isValid() == false) {
                        System.out.println("\nVoucher yang dimasukkan sudah kadaluarsa!!!");
                        menuPembayaran();
                    }
                    cashier.addDisc(getMemberDisc(), cashier.vouchers[i2].getDiscount());
                    System.out.println("\n===========================================");
                    System.out.println("|\t\t\t\t\t  |");
                    System.out.println("| \t Informasi Pembelian\t\t  |");
                    System.out.println("|\t\t\t\t\t  |");
                    System.out.println("===========================================");
                    System.out.println("Nama Pembeli : " + getNama());
                    System.out.println("Tier Membreship : " + getMemberType());
                    System.out.println("Banyak barang dibeli : " + getI());
                    System.out.println("Barang yang dibeli : " + getListBarang());
                    System.out.println("Total Harga : " + currencyFormatter.format(cashier.getTotal()));
                    System.out.println("Voucher aktif : " + cashier.vouchers[i2].getCode());
                    System.out.println("Diskon Member + Voucher : " + df.format(cashier.getCurrentDiscount(0)) + " + "
                            + df.format(cashier.getCurrentDiscount(1)) + " = "
                            + df.format(cashier.getTotalDiscount()));
                    System.out.println(
                            "Total harga setelah diskon : "
                                    + currencyFormatter
                                            .format(cashier.getTotal()
                                                    - (cashier.getTotal() * cashier.getTotalDiscount())));
                    System.out.print("Total yang dibayarkan : ");
                    setUangDibayarkan(sc.nextDouble());
                    System.out.println("Uang Kembalian : " + currencyFormatter
                            .format(getUangDibayarkan()
                                    - (cashier.getTotal() - (cashier.getTotal() * cashier.getTotalDiscount()))));
                    break;
                }
            }
            if (i2 >= 5) {
                System.out.println("\nVoucher yang dimasukkan salah!!!");
                menuPembayaran();
            }

        } else {
            cashier.setTotalDiscount(getMemberDisc());
            System.out.println("\n===========================================");
            System.out.println("|\t\t\t\t\t  |");
            System.out.println("| \t Informasi Pembelian\t\t  |");
            System.out.println("|\t\t\t\t\t  |");
            System.out.println("===========================================");
            System.out.println("Nama Pembeli : " + getNama());
            System.out.println("Tier Membreship : " + getMemberType());
            System.out.println("Banyak barang dibeli : " + getI());
            System.out.println("Barang yang dibeli : " + getListBarang());
            System.out.println("Total Harga : " + currencyFormatter.format(cashier.getTotal()));
            System.out.println("Diskon Member : " + df.format(cashier.getTotalDiscount()));
            System.out.println(
                    "Total harga setelah diskon : "
                            + currencyFormatter
                                    .format(cashier.getTotal() - (cashier.getTotal() * cashier.getTotalDiscount())));
            System.out.print("Total yang dibayarkan : ");
            setUangDibayarkan(sc.nextDouble());
            System.out.println("Uang Kembalian : " + currencyFormatter
                    .format(getUangDibayarkan()
                            - (cashier.getTotal() - (cashier.getTotal() * cashier.getTotalDiscount()))));
        }
        System.out.println("===========================================");
        System.out.println("|Terima Kasih Telah Membeli\t\t  |");
        System.out.println("|Kembali ke menu (y/n)\t\t\t  |");
        System.out.println("===========================================");
        setPilihanStr(sc.next());
        if (getPilihanStr().equalsIgnoreCase("y")) {
            setI(0);
            listBarang.clear();
            mainMenu();
        } else {
            System.exit(0);
        }
    }

    public void menuCekBarang() {
        System.out.println("===========================================");
        System.out.println("| \t    Menu Cek Barang\t  |");
        System.out.println("| \t    Barang Yang Tersedia\t  |");
        System.out.println("|\t\t\t\t\t  |");
        System.out.println("===========================================");
        System.out.println("1. Alat musik");
        System.out.println("2. Alat elektronik");
        System.out.println("0. Kembali");
        System.out.print("Pilih Salah Satu : ");
        setPilihan(sc.nextInt());
        switch (getPilihan()) {
            case 1:
                menuDisplayAlatMusik();
                break;
            case 2:
                menuDisplayAlatElektronik();
                break;
            case 0:
                mainMenu();
                break;

            default:
                System.out.println("Input Salah!!!");
                menuCekBarang();
                break;
        }
    }

    public void menuDisplayAlatMusik() {
        System.out.println("===========================================");
        System.out.println("|\t\t\t\t\t  |");
        System.out.println("| \t Alat Musik Yang Tersedia\t  |");
        System.out.println("|\t\t\t\t\t  |");
        System.out.println("===========================================");
        System.out.println("1. Gitar Elektronik");
        System.out.println("2. Piano");
        System.out.println("3. Gitar");
        System.out.println("4. Ukulele");
        System.out.println("5. Klarinet");
        System.out.println("0. Kembali");
        System.out.print("Pilih barang yang ingin dicek : ");
        setPilihan(sc.nextInt());
        switch (getPilihan()) {
            case 1:
                GitarElektrik gitarElektrik = new GitarElektrik();
                gitarElektrik.deskripsiBarang();
                break;
            case 2:
                Piano piano = new Piano();
                piano.deskripsiBarang();
                break;
            case 3:
                Gitar gitar = new Gitar();
                gitar.deskripsiBarang();
                break;
            case 4:
                Ukulele ukulele = new Ukulele();
                ukulele.deskripsiBarang();
                break;
            case 5:
                Klarinet klarinet = new Klarinet();
                klarinet.deskripsiBarang();
                break;
            case 0:
                menuCekBarang();
                break;

            default:
                System.out.println("Input Salah!!!");
                menuDisplayAlatMusik();
                break;

        }
        System.out.println("===========================================");
        System.out.println("| 0.Kembali\t\t\t\t  |");
        System.out.println("===========================================");
        System.out.print("Pilih Salah Satu : ");
        setPilihan(sc.nextInt());
        if (getPilihan() == 0) {
            menuDisplayAlatMusik();
        } else {
            System.out.println("Input Salah!!!");
            menuDisplayAlatMusik();
        }
    }

    public void menuDisplayAlatElektronik() {
        System.out.println("===========================================");
        System.out.println("|\t\t\t\t\t  |");
        System.out.println("|\tAlat Elektronik Yang Tersedia\t  |");
        System.out.println("|\t\t\t\t\t  |");
        System.out.println("===========================================");
        System.out.println("1. Gitar Elektronik");
        System.out.println("2. Piano");
        System.out.println("3. Televisi");
        System.out.println("4. Setrika");
        System.out.println("5. Pc Gaming");
        System.out.println("0. Kembali");
        System.out.print("Pilih barang yang ingin dicek : ");
        setPilihan(sc.nextInt());
        switch (getPilihan()) {
            case 1:
                GitarElektrik gitarElektrik = new GitarElektrik();
                gitarElektrik.deskripsiBarang();
                break;
            case 2:
                Piano piano = new Piano();
                piano.deskripsiBarang();
                break;
            case 3:
                Televisi televisi = new Televisi();
                televisi.deskripsiBarang();
                break;
            case 4:
                Setrika setrika = new Setrika();
                setrika.deskripsiBarang();
                break;
            case 5:
                PcGaming pcGaming = new PcGaming();
                pcGaming.deskripsiBarang();
                break;
            case 0:
                menuCekBarang();
                break;

            default:
                System.out.println("Input Salah!!!");
                menuDisplayAlatMusik();
                break;
        }
    }

    public static void main(String[] args) {
        Main main = new Main();
        main.loginMenu();
        main.mainMenu();
    }
}
