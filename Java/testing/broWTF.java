package Java.testing;

import java.lang.reflect.Array;
import java.util.Arrays;

public class broWTF {
    public static void main(String[] args) {
        int j = 2;
        int k = 0;
        for (int i = 0; i <= 10; i++) {
            if (j > 0) {
                System.out.println("OK");
                k++;
                System.out.println(k);
            }
            j = 5 - (j * 2);
        }
    }
}
