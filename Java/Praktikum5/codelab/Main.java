package Java.Praktikum5.codelab;

import java.util.Scanner;

public class Main {
    static Scanner sc = new Scanner(System.in);
    private int pilihan;
    private String pilihanStr;

    public String getPilihanStr() {
        return pilihanStr;
    }

    public void setPilihanStr(String pilihanStr) {
        this.pilihanStr = pilihanStr;
    }

    public int getPilihan() {
        return pilihan;
    }

    public void setPilihan(int pilihan) {
        this.pilihan = pilihan;
    }

    public void mainMenu() {
        System.out.println("===========================================");
        System.out.println("|\t\t\t\t\t  |");
        System.out.println("| \t    Plant Vs Zombie\t\t  |");
        System.out.println("|\t\t\t\t\t  |");
        System.out.println("===========================================");
        System.out.println("1. Main");
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
                System.out.println("Input Invalid!!!");
                mainMenu();
                break;
        }
    }

    void mainCaller() {
        // untuk call main() method
        main(null);
    }

    public static void main(String[] args) {
        Main main = new Main();
        Plant plant = new Plant();
        Zombie walkingZombie = new WalkingZombie(100);
        Zombie armoredZombie = new ArmoredZombie(200, 50);
        main.mainMenu();
        while (true) {
            System.out.println("\n===========================================");
            System.out.println("|\t\t\t\t\t  |");
            System.out.println("|          Plant Vs Zombie KW 2000\t  |");
            System.out.println("|      Pilih zombie yang ingin dilawan    |");
            System.out.println("|\t\t\t\t\t  |");
            System.out.println("===========================================");
            System.out.println("1. Walking Zombie");
            System.out.println("2. Armored Zombie");
            System.out.println("0. Exit");
            System.out.print("Pilih salah satu : ");
            main.setPilihan(sc.nextInt());

            switch (main.getPilihan()) {
                case 1:
                    System.out.println("------ Walking Zombie sebelum diserang ------");
                    walkingZombie.getZombieInfo();
                    while (walkingZombie.getHealth() > 0) {
                        plant.attack(walkingZombie);

                    }
                    walkingZombie.destroyed();
                    break;
                case 2:
                    System.out.println("------ Armored Zombie sebelum diserang ------");
                    armoredZombie.getZombieInfo();
                    while (armoredZombie.getHealth() > 0) {
                        plant.attack(armoredZombie);

                    }
                    armoredZombie.destroyed();
                    break;
                case 0:
                    System.exit(0);
                    break;
                default:
                    System.out.println("Input Invalid!!!");
                    break;
            }
            System.out.print("\nIngin main lagi(y/n) : ");
            main.setPilihanStr(sc.next());
            if (main.getPilihanStr().equalsIgnoreCase("y")) {
                main.mainCaller();
            } else {
                System.out.println("\nTerima Kasih Telah Bermain");
                sc.close();
                break;
            }
        }
    }
}
