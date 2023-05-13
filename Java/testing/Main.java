package Java.testing;

import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        // Create player and enemies
        Weapon sword = new Weapon("Sword", 10);
        Armor leatherArmor = new Armor("Leather Armor", 5);
        Player warrior = new Player("Warrior", 100, 10, 5, 0, sword, leatherArmor);

        Weapon axe = new Weapon("Axe", 12);
        Armor chainMail = new Armor("Chain Mail", 8);
        Player berserker = new Player("Berserker", 90, 12, 3, 0, axe, chainMail);

        Weapon staff = new Weapon("Staff", 8);
        Armor robe = new Armor("Robe", 3);
        Player wizard = new Player("Wizard", 80, 8, 2, 0, staff, robe);

        Enemy goblin = new Enemy("Goblin", 50, 5, 0);
        Enemy orc = new Enemy("Orc", 80, 10, 2);
        Enemy troll = new Enemy("Troll", 120, 15, 5);

        List<Enemy> enemies = new ArrayList<>();
        enemies.add(goblin);
        enemies.add(orc);
        enemies.add(troll);

        // Start the game
        RPGGame game = new RPGGame(warrior, enemies);
        game.start();
    }
}