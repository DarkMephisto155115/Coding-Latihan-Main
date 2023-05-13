package Java.testing;

import java.util.List;

public class RPGGame {
    private Player player;
    private List<Enemy> enemies;

    // Constructor
    public RPGGame(Player player, List<Enemy> enemies) {
        this.player = player;
        this.enemies = enemies;
    }

    // Getters and setters
    public Player getPlayer() {
        return player;
    }

    public List<Enemy> getEnemies() {
        return enemies;
    }

    // Methods
    public void start() {
        System.out.println("Welcome to the RPG game!");
        System.out.println("Your character is a " + player.getClass().getSimpleName());
        System.out.println("Your starting weapon is a " + player.getWeapon().getName() + " that does "
                + player.getWeapon().getDamage() + " damage");
        System.out.println("Your starting armor is a " + player.getArmor().getName() + " that gives you "
                + player.getArmor().getDefense() + " defense");
        System.out.println();

        for (int i = 0; i < enemies.size(); i++) {
            Enemy enemy = enemies.get(i);
            System.out.println("You encounter a " + enemy.getName() + "!");

            while (player.getHealth() > 0 && enemy.getHealth() > 0) {
                // Player attacks enemy
                int playerDamage = player.getDamage() - enemy.getDefense();
                if (playerDamage < 0) {
                    playerDamage = 0;
                }
                System.out.println(
                        player.getName() + " attacks the " + enemy.getName() + " for " + playerDamage + " damage!");
                enemy.setHealth(enemy.getHealth() - playerDamage);

                if (enemy.getHealth() <= 0) {
                    System.out.println("The " + enemy.getName() + " has been defeated!");
                    break;
                }

                // Enemy attacks player
                int enemyDamage = enemy.getDamage() - player.getDefense();
                if (enemyDamage < 0) {
                    enemyDamage = 0;
                }
                System.out.println(
                        "The " + enemy.getName() + " attacks " + player.getName() + " for " + enemyDamage + " damage!");
                player.setHealth(player.getHealth() - enemyDamage);

                if (player.getHealth() <= 0) {
                    System.out.println(player.getName() + " has been defeated!");
                    break;
                }
            }

            if (player.getHealth() > 0) {
                // Player wins the battle
                System.out.println(
                        player.getName() + " wins the battle and gains " + (i + 1) * 10 + " experience points!");
                player.setHealth(player.getLevel() * 100);
                player.setLevel(player.getLevel() + 1);
            } else {
                // Player loses the battle
                System.out.println("Game over!");
                break;
            }
        }

        if (player.getHealth() > 0) {
            // Player wins the game
            System.out.println(
                    "Congratulations, " + player.getName() + ", you have defeated all the enemies and won the game!");
        }
    }
}
