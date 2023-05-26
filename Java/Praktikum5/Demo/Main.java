package Java.Praktikum5.Demo;

import Java.Praktikum5.Demo.BattleSystem.ElementSystem.Element;
import Java.Praktikum5.Demo.BattleSystem.ElementSystem.Fire;
import Java.Praktikum5.Demo.ClassSystem.Assasin;
import Java.Praktikum5.Demo.ClassSystem.Hero;
import Java.Praktikum5.Demo.ClassSystem.Mage;
import Java.Praktikum5.Demo.ClassSystem.Tank;
import Java.Praktikum5.Demo.EquipmentSystem.Armor;
import Java.Praktikum5.Demo.EquipmentSystem.Gun;
import Java.Praktikum5.Demo.EquipmentSystem.Weapon;

public class Main {

    public static void main(String[] args) {
        Assasin Player1 = new Assasin(0);
        Tank Player2 = new Tank(0);
        Mage Player3 = new Mage(0);
        Element fire = new Fire();
        Weapon gun1 = new Gun("Glock", fire, 150);
        Armor armor1 = new Armor(1000, fire);
        Player1.useWeapon(gun1);
        Player2.useArmor(armor1);
        System.out.println("Player 1 :");
        Player1.checkStatus();
        System.out.println("Player 2 :");
        Player2.checkStatus();
        while (true) {

            System.out.println("\nPlayer 1 Turn");
            Player1.attack(Player2);
            System.out.println("Player 2 HP : " + Player2.getHealthPoint());
            System.out.println("Palyer 2 Defense : " + Player2.getRealDefensePoint());
            if (Player1.lifeStatus() == false) {
                System.out.println("\nPlayer 2 WIN");
                break;
            } else if (Player2.lifeStatus() == false) {
                System.out.println("\nPlayer 1 WIN");
                break;
            }
            System.out.println("\nPlayer 2 Turn");
            Player2.attack(Player1);
            System.out.println("Player 1 HP : " + Player1.getHealthPoint());
            if (Player1.lifeStatus() == false) {
                System.out.println("\nPlayer 2 WIN");
                break;
            } else if (Player2.lifeStatus() == false) {
                System.out.println("\nPlayer 1 WIN");
                break;
            }
        }

        System.out.println("\nPlayer 1 :");
        Player1.checkStatus();
        System.out.println("Player 2 :");
        Player2.checkStatus();

    }
}
