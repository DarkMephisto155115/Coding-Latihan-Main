package Java.testing;

import java.util.Random;

public class tes1 {
    public static void main(String[] args) {
        Random rand = new Random();
        int int_random = rand.nextInt(11);
        int min = 2000;
        int max = 3000;
        System.out.println((int) (min + (Math.random() * (max - min))));
        System.out.println(int_random);
        System.out.println((int) (min + (int_random * 100)));

        int level = 11;
        int healthPoint = (int) (2000 + (int_random * 300));// Min 2000 Max 5000
        int defense = (int) (200 + (int_random * 30));// Min 200 Max 500
        int attackDamage = (int) (700 + (int_random * 50));// Min 700 Max 1200
        healthPoint = 2000;
        defense = 200;// Min 200 Max 500
        attackDamage = 700;
        for (int i = 1; i <= level; i++) {
            healthPoint += 90;
            defense += 15;
            attackDamage += 30;
        }
        System.out.println("HP : " + healthPoint + "\nDEF : " + defense + "\nAtk : " + attackDamage);

    }
}
