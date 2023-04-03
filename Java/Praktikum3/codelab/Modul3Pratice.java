package Java.Praktikum3.codelab;

import java.util.Scanner;

public class Modul3Pratice extends Converter {
    private double value;

    public double setValue(double value, String params) {

        switch (params) {
            case "1":
                this.value = setValueToM(value);
                break;

            case "2":
                this.value = setValueToCM(value);
                break;

            case "3":
                this.value = setValueToFeet(value);
                break;

            case "4":
                this.value = setValueToMiles(value);
                break;

            default:
                System.out.println("Input Salah!!!");
                break;
        }
        return getValue();
    }

    public double getValue() {
        return value;
    }

    public static void main(String[] args) {
        Modul3Pratice converter = new Modul3Pratice();
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.println("Yard Converter to M, CM, Feet & Miles");
            System.out.println("1. Yard to M");
            System.out.println("2. Yard to CM");
            System.out.println("3. Yard to Feet");
            System.out.println("4. Yard to Miles");
            System.out.print("Pilih menu : ");
            String pilihan = sc.nextLine();
            System.out.print("Masukkan Yard : ");
            double value = sc.nextDouble();
            System.out.println("Hasil konversi : " + converter.setValue(value, pilihan));
            System.out.print("\nIngin Konversi lagi? (y/n) : ");
            sc.nextLine();
            pilihan = sc.nextLine();
            if (pilihan.equals("y")) {
                System.out.println("");
            } else if (pilihan.equals("n")) {
                break;
            } else {
                System.out.println("Input Salah!!!");
            }
        }
        sc.close();

    }
}
