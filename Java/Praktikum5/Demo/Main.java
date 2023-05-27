package Java.Praktikum5.Demo;

import java.util.Scanner;

import Java.Praktikum5.Demo.BattleSystem.ElementSystem.*;
import Java.Praktikum5.Demo.ClassSystem.*;
import Java.Praktikum5.Demo.EquipmentSystem.*;

public class Main {

    Scanner sc = new Scanner(System.in);
    public Hero Player1;
    public Hero Player2;

    public void setPlayer1(Hero player1) {
        Player1 = player1;
    }

    public Hero getPlayer1() {
        return Player1;
    }

    public void setPlayer2(Hero player2) {
        Player2 = player2;
    }

    public Hero getPlayer2() {
        return Player2;
    }

    public int pilihan;
    public String pilihanStr;

    public int getPilihan() {
        return pilihan;
    }

    public void setPilihan(int pilihan) {
        this.pilihan = pilihan;
    }

    public String getPilihanStr() {
        return pilihanStr;
    }

    public void setPilihanStr(String pilihanStr) {
        this.pilihanStr = pilihanStr;
    }

    public void MainMenu() {
        System.out.println("====================================");
        System.out.println("|\t\t\t\t   |");
        System.out.println("|\tSeni Berpedang Online\t   |");
        System.out.println("|\t      1 vs 1 Mode\t   |");
        System.out.println("|\t\t\t\t   |");
        System.out.println("====================================");
        System.out.println("1. Main");
        System.out.println("0. Exit");
        System.out.print("Pilih Salah satu : ");
        setPilihan(sc.nextInt());
        if (getPilihan() == 1) {

        } else if (getPilihan() == 0) {
            System.exit(0);
        } else {
            System.out.println("\nPilihan Salah!!!\n");
            MainMenu();
        }
    }

    public void BattleSystem(Hero player1, Hero player2) {
        System.out.println("\n-------Player 1-------");
        Player1.checkStatus();
        Player1.spawnIntro();
        System.out.println("\n-------Player 2-------");
        Player2.checkStatus();
        Player2.spawnIntro();
        System.out.println("\n--------FIGHT BEGIN--------");
        int counter = 1;
        while (true) {
            System.out.println("\n--------Round " + counter + "--------");
            counter++;
            System.out.println("\n--------Player 1 Turn--------");
            Player1.attackIntro();
            Player1.attack(Player2);
            Player1.attackNotification("Player 1");
            Player2.checkBattleStat("Player 2");
            Player2.damagedNotification("Player 2");
            if (Player1.lifeStatus() == false) {
                System.out.println("\nPlayer 1 Has Been Defeated");
                System.out.println("\nPlayer 2 WIN");
                break;
            } else if (Player2.lifeStatus() == false) {
                System.out.println("\nPlayer 2 Has Been Defeated");
                System.out.println("\nPlayer 1 WIN");
                break;
            }
            System.out.println("\n--------Player 2 Turn--------");
            Player2.attackIntro();
            Player2.attack(Player1);
            Player2.attackNotification("Player 2");
            Player1.checkBattleStat("Player 1");
            Player1.damagedNotification("Player 1");
            if (Player1.lifeStatus() == false) {
                System.out.println("\nPlayer 1 Has Been Defeated");
                System.out.println("\nPlayer 2 WIN");
                break;
            } else if (Player2.lifeStatus() == false) {
                System.out.println("\nPlayer 2 Has Been Defeated");
                System.out.println("\nPlayer 1 WIN");
                break;
            }
        }
    }

    public static void main(String[] args) {
        Main main = new Main();
        Scanner sc = new Scanner(System.in);

        // Dynamic Polymorphism (virtual method invocation)

        Element fire = new Fire();
        Element wind = new Wind();
        Element earth = new Earth();
        Element water = new Water();

        main.MainMenu();

        // Dynamic Polymorphism (virtual method invocation)
        Weapon gun1 = new Gun("D. Eagle", 200);
        Weapon gun2 = new Gun("D. Eagle (Fire)", fire, 200);

        Weapon sword1 = new Sword("Gram", 250);
        Weapon sword2 = new Sword("Gram (Full Power)", fire, 300);

        Armor armor1 = new Armor(2000);
        Armor armor2 = new Armor(2000, fire);

        // Player Selection
        // Start
        System.out.println("====================================");
        System.out.println("|\t\t\t\t   |");
        System.out.println("|\tPlayer 1\t   |");
        System.out.println("|\tChar Selection\t   |");
        System.out.println("|\t\t\t\t   |");
        System.out.println("====================================");
        System.out.println("1. Assasin");
        System.out.println("2. Mage");
        System.out.println("3. Tank");
        System.out.print("Pilih Salah satu : ");
        main.setPilihan(sc.nextInt());
        switch (main.getPilihan()) {
            case 1:
                System.out.print("Masukkan Level Character : ");
                Assasin Player1ASS = new Assasin(sc.nextInt());
                System.out.println("1. D. Eagle");
                System.out.println("2. D. Eagle (Fire)");
                System.out.println("3. Gram");
                System.out.println("4. Gram (Full Power)");
                System.out.println("0. None");
                System.out.print("Pilih senjata yang ingin digunakan : ");
                main.setPilihan(sc.nextInt());
                switch (main.getPilihan()) {
                    case 1:
                        Player1ASS.useWeapon(gun1);
                        break;
                    case 2:
                        Player1ASS.useWeapon(gun2);
                        break;
                    case 3:
                        Player1ASS.useWeapon(sword1);
                        break;
                    case 4:
                        Player1ASS.useWeapon(sword2);
                        break;
                    case 0:
                        break;
                    default:
                        break;
                }
                main.setPlayer1(Player1ASS);
                break;

            case 2:
                System.out.print("Masukkan Level Character : ");
                Mage Player1MG = new Mage(sc.nextInt());
                main.setPlayer1(Player1MG);
                break;

            case 3:
                System.out.print("Masukkan Level Character : ");
                Tank Player1TNK = new Tank(sc.nextInt());
                System.out.println("1. Armored");
                System.out.println("2. Armored (Fire)");
                System.out.println("0. None");
                System.out.print("Pilih Armor yang ingin digunakan : ");
                main.setPilihan(sc.nextInt());
                switch (main.getPilihan()) {
                    case 1:
                        Player1TNK.useArmor(armor1);
                        break;
                    case 2:
                        Player1TNK.useArmor(armor2);
                        break;
                    case 0:

                        break;
                    default:
                        break;
                }
                main.setPlayer1(Player1TNK);
                break;
            case 4:
                System.out.print("Masukkan Level Character : ");
                DarkKnight Player1DRK = new DarkKnight(sc.nextInt());
                System.out.println("1. Armored");
                System.out.println("2. Armored (Fire)");
                System.out.println("0. None");
                System.out.print("Pilih Armor yang ingin digunakan : ");
                main.setPilihan(sc.nextInt());
                switch (main.getPilihan()) {
                    case 1:
                        Player1DRK.useArmor(armor1);
                        break;
                    case 2:
                        Player1DRK.useArmor(armor2);
                        break;
                    case 0:

                        break;
                    default:
                        break;
                }
                main.setPlayer1(Player1DRK);
                break;
            default:
                break;
        }

        System.out.println("====================================");
        System.out.println("|\t\t\t\t   |");
        System.out.println("|\tPlayer 2\t   |");
        System.out.println("|\tChar Selection\t   |");
        System.out.println("|\t\t\t\t   |");
        System.out.println("====================================");
        System.out.println("1. Assasin");
        System.out.println("2. Mage");
        System.out.println("3. Tank");
        System.out.print("Pilih Salah satu : ");
        main.setPilihan(sc.nextInt());
        switch (main.getPilihan()) {
            case 1:
                System.out.print("Masukkan Level Character : ");
                Assasin Player2ASS = new Assasin(sc.nextInt());
                System.out.println("1. D. Eagle");
                System.out.println("2. D. Eagle (Fire)");
                System.out.println("3. Gram");
                System.out.println("4. Gram (Full Power)");
                System.out.println("0. None");
                System.out.print("Pilih senjata yang ingin digunakan : ");
                main.setPilihan(sc.nextInt());
                switch (main.getPilihan()) {
                    case 1:
                        Player2ASS.useWeapon(gun1);
                        break;
                    case 2:
                        Player2ASS.useWeapon(gun2);
                        break;
                    case 3:
                        Player2ASS.useWeapon(sword1);
                        break;
                    case 4:
                        Player2ASS.useWeapon(sword2);
                        break;
                    case 0:
                        break;
                    default:
                        break;
                }
                main.setPlayer2(Player2ASS);
                break;

            case 2:
                System.out.print("Masukkan Level Character : ");
                Mage Player2MG = new Mage(sc.nextInt());
                main.setPlayer2(Player2MG);
                break;

            case 3:
                System.out.print("Masukkan Level Character : ");
                Tank Player2TNK = new Tank(sc.nextInt());
                System.out.println("1. Armored");
                System.out.println("2. Armored (Fire)");
                System.out.println("0. None");
                System.out.print("Pilih Armor yang ingin digunakan : ");
                main.setPilihan(sc.nextInt());
                switch (main.getPilihan()) {
                    case 1:
                        Player2TNK.useArmor(armor1);
                        break;
                    case 2:
                        Player2TNK.useArmor(armor2);
                        break;
                    case 0:

                        break;
                    default:
                        break;
                }
                main.setPlayer2(Player2TNK);
                break;
            case 4:
                System.out.print("Masukkan Level Character : ");
                GrandAssasin Player2GAS = new GrandAssasin(sc.nextInt());
                System.out.println("1. D. Eagle");
                System.out.println("2. D. Eagle (Fire)");
                System.out.println("3. Gram");
                System.out.println("4. Gram (Full Power)");
                System.out.println("0. None");
                System.out.print("Pilih senjata yang ingin digunakan : ");
                main.setPilihan(sc.nextInt());
                switch (main.getPilihan()) {
                    case 1:
                        Player2GAS.useWeapon(gun1);
                        break;
                    case 2:
                        Player2GAS.useWeapon(gun2);
                        break;
                    case 3:
                        Player2GAS.useWeapon(sword1);
                        break;
                    case 4:
                        Player2GAS.useWeapon(sword2);
                        break;
                    case 0:
                        break;
                    default:
                        break;
                }
                System.out.println("1. Armored");
                System.out.println("2. Armored (Fire)");
                System.out.println("0. None");
                System.out.print("Pilih senjata yang ingin digunakan : ");
                main.setPilihan(sc.nextInt());
                switch (main.getPilihan()) {
                    case 1:
                        Player2GAS.useArmor(armor1);
                        break;
                    case 2:
                        Player2GAS.useArmor(armor2);
                        break;
                    case 0:

                        break;
                    default:
                        break;
                }
                main.setPlayer2(Player2GAS);
                break;
            default:
                break;
        }
        // End

        main.BattleSystem(main.getPlayer1(), main.getPlayer2());

        System.out.print("\nIngin Main Lagi (y/n) : ");
        main.setPilihanStr(sc.next());
        if (main.getPilihanStr().equalsIgnoreCase("y")) {
            main(null);
        } else {
            System.out.println("\nTerima kasih telah bermain");
            sc.close();
            System.exit(0);
        }

    }
}
