package Java.Praktikum4.codelab;

public abstract class Hewan {
    public String suara;

    public void setSuara(String suara) {
        this.suara = suara;
    }

    public String getSuara() {
        return suara;
    }

    public void bersuara() {

    }

    public void tampilObjek() {

    }

    public static void main(String[] args) {
        Anjing anjing = new Anjing();
        Kucing kucing = new Kucing();
        Kuda kuda = new Kuda();
        Beruang beruang = new Beruang();

        anjing.tampilObjek();
        System.out.println();
        kucing.tampilObjek();
        System.out.println();
        kuda.tampilObjek();
        System.out.println();
        beruang.tampilObjek();
    }
}
