package Java.KelasPBO.Tugas1;

import java.util.Scanner;

public class SearchMyString {
    private char maxChar;
    private char minChar;
    private String stringYangDicari;

    public SearchMyString(String string) {
        string = string.replaceAll("\\s", "");
        this.stringYangDicari = string;
        this.maxChar = getMaxChar();
        this.minChar = getMinChar();

    }

    public void setMaxChar(char maxChar) {
        this.maxChar = maxChar;
    }

    public char getMaxChar() {
        char max = 0;
        for (int i = 0; i < this.stringYangDicari.length(); i++) {
            if (this.stringYangDicari.charAt(i) > max) {
                max = this.stringYangDicari.charAt(i);
            }
        }
        return max;
    }

    public void setMinChar(char minChar) {
        this.minChar = minChar;
    }

    public char getMinChar() {
        char min = 127;
        for (int i = 0; i < this.stringYangDicari.length(); i++) {
            if (this.stringYangDicari.charAt(i) < min) {
                min = this.stringYangDicari.charAt(i);
            }
        }
        return min;
    }

    public int SearchChar(char x) {
        int count = 0;
        for (int i = 0; i < this.stringYangDicari.length(); i++) {
            if (this.stringYangDicari.charAt(i) == x) {
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Masukkan Kalimat : ");
        SearchMyString sMyString = new SearchMyString(sc.nextLine());
        System.out.println("Masukkan Huruf Yang Ingin Dihitung : ");
        int count = sMyString.SearchChar(sc.nextLine().charAt(0));
        System.out.println("Max char : " + sMyString.maxChar);
        System.out.println("Min char : " + sMyString.minChar);
        System.out.println("Banyak huruf yang dicari : " + count);
        sc.close();
    }
}
