import java.io.*;
import java.lang.*;

public class Main {
    public static void main(String[] args) {
        String nama = "+62085236782335";
        String nama2 = nama.substring(nama.lastIndexOf("+") + 1, 3);
        if (nama2.equals("gmail.com") == true) {
            System.out.println("Domain Valid");
        }
        System.out.println(nama2.equals("gmail.com"));
        System.out.println(nama);
        System.out.println(nama2);
        int[][] room = { { 0, 101, 1000000 }, { 0, 102, 2500000 }, { 1, 103, 2000000 } };
        System.out.println(room[0][1]);
        if (nama == "+62085236782335") {
            System.out.println("SAMA!!!");
        }
    }

}