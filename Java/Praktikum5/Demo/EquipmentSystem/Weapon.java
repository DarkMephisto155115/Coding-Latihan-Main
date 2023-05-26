package Java.Praktikum5.Demo.EquipmentSystem;

import Java.Praktikum5.Demo.BattleSystem.ElementSystem.*;

public abstract class Weapon {
    protected String name;
    protected double damage;
    protected Element element;
    protected double elementDamage;
    protected double totalDamage;

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
            System.out.println("Element : Fire");
        } else if (element instanceof Water) {
            System.out.println("Element : Water");
        } else if (element instanceof Earth) {
            System.out.println("Element : Earth");
        } else if (element instanceof Wind) {
            System.out.println("Element : Wind");
        } else {
            System.out.println("Element : -");
        }
    }

    public void weaponType() {

    }

    public double getTotalDamage() {
        return totalDamage;
    }

    public double getElementDamage() {
        return elementDamage;
    }

}
