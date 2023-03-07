import Modul2.LKBangun2D;
import bangun2D.Kubus;

public class Main {
    public static void main(String[] args) {
        LKBangun2D obj = new LKBangun2D();
        Kubus obj2 = new Kubus();
        obj.setVolume(1.5);
        System.out.println(obj.getVolume());
        obj2.setVolume(6.9);
        System.out.println(obj2.getVolume());
    }
}
