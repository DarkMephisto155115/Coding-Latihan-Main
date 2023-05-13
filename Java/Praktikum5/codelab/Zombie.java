package Java.Praktikum5.codelab;

public class Zombie implements Destroyable {
    public int health;

    public Zombie(int health) {
        this.health = health;
    }

    public int getHealth() {
        return health;
    }

    public void attacked() {
    }

    public void destroyed() {
        System.out.println("Zombie is destroyed!");
    }
}
