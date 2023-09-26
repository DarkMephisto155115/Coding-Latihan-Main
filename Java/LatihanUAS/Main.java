package Java.LatihanUAS;

import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        String nama = "Anjay Mabar";
        String nami = "aaaaaaaaaaaaaaaa";
        StringBuffer buf = new StringBuffer();
        try {
            buf.setLength(0);
            buf = new StringBuffer(nama);
            buf.setCharAt(0, 'g');
            buf.replace(6, 11, "Larang");
            buf.deleteCharAt(4);

        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e.getMessage());
        }
        char charArr[] = nama.toCharArray();
        Arrays.sort(charArr);
        nama = new String(charArr);
        System.out.println(nama.indexOf("A", 0));
        System.out.println(nama.repeat(3));
        System.out.println(charArr);
        System.out.println(charArr);
        System.out.println(buf);
        System.out.println(buf.charAt(1));
        nami = nami.replace("a", "b");
        System.out.println(nami);
    }
}
