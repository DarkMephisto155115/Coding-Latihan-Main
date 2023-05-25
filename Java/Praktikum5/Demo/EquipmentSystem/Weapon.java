package Java.Praktikum5.Demo.EquipmentSystem;

import javax.lang.model.element.ElementKind;

import Java.Praktikum5.Demo.BattleSystem.ElementSystem.Earth;
import Java.Praktikum5.Demo.BattleSystem.ElementSystem.Element;
import Java.Praktikum5.Demo.BattleSystem.ElementSystem.Fire;
import Java.Praktikum5.Demo.BattleSystem.ElementSystem.Water;
import Java.Praktikum5.Demo.BattleSystem.ElementSystem.Wind;

public abstract class Weapon {
    protected String name;
    protected double damage;
    protected Element element;

    public double getDamage() {
        return damage;
    }

    public String getName() {
        return name;
    }

    public Element getElement() {
        return element;
    }

    public void elementType() {
        if (element instanceof Fire) {

        } else if (element instanceof Fire) {

        } else if (element instanceof Water) {

        } else if (element instanceof Earth) {

        } else if (element instanceof Wind) {

        } else {
            System.out.println("GATAU MALES PINGIN BELI TRUCK");
        }
    }
}
