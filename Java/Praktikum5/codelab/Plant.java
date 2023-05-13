package Java.Praktikum5.codelab;

public class Plant {
    public void attack(Destroyable d) {
        if (d instanceof Zombie) {
            Zombie z = (Zombie) d;
            z.attacked();
        } else {
            System.out.println("Tidak bisa menyerang non-zombie");
        }
    }
}
