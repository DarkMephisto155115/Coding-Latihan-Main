import java.io.*;
import java.lang.*;

public class Main {
    private int[][] room = { { 0, 101, 1000000 }, { 0, 102, 2500000 }, { 1, 103, 2000000 } };

    public int[][] getRoom() {
        return room;
    }

    public static void main(String[] args) {
        Main obj = new Main();
        String nama = "+62085236782335";
        String nama2 = nama.substring(nama.lastIndexOf("+") + 1, 3);
        if (nama2.equals("gmail.com") == true) {
            System.out.println("Domain Valid");
        }
        System.out.println(nama2.equals("gmail.com"));
        System.out.println(nama);
        System.out.println(nama2);
        if (nama == "+62085236782335") {
            System.out.println("SAMA!!!");
        }
        int[][] array = obj.getRoom();

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.println(array[i][j]);
            }
        }

    }

}