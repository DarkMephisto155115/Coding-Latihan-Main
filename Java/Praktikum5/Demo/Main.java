package Java.Praktikum5.Demo;

import Java.Praktikum5.Demo.EquipmentSystem.*;
import Java.Praktikum5.Demo.BattleSystem.ElementSystem.Element;
import Java.Praktikum5.Demo.BattleSystem.ElementSystem.Fire;
import Java.Praktikum5.Demo.ClassSystem.*;

public class Main {

    public static void main(String[] args) {
        Assasin assasin = new Assasin(0);
        Element fire = new Fire();
        Weapon gun = new Gun("tes 1", fire, 100);
        Weapon gun2 = new Gun("tes 2", 100);
        assasin.spawnIntro();
        assasin.checkStatus();
        assasin.useWeapon(gun);
        assasin.checkStatus();
        assasin.useWeapon(gun2);
        assasin.checkStatus();
    }
}
