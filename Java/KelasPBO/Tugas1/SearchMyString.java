package Java.KelasPBO.Tugas1;

import java.util.Scanner;

public class SearchMyString {
    private char maxChar;
    private char minChar;
    private int countMaxChar;
    private int countMinChar;
    private String stringYangDicari;

    public SearchMyString(String string) {
        string = string.replaceAll("\\s", "");
        this.stringYangDicari = string;
        this.maxChar = getMaxChar();
        this.minChar = getMinChar();
        this.countMaxChar = SearchChar(maxChar);
        this.countMinChar = SearchChar(minChar);
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

    public void setCountMaxChar(int countMaxChar) {
        this.countMaxChar = countMaxChar;
    }

    public int getCountMaxChar() {
        return countMaxChar;
    }

    public void setCountMinChar(int countMinChar) {
        this.countMinChar = countMinChar;
    }

    public int getCountMinChar() {
        return countMinChar;
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
        System.out.println("================================");
        System.out.println("\tSearch My String");
        System.out.println("================================");
        System.out.println("Masukkan Kalimat : ");
        SearchMyString sMyString = new SearchMyString(sc.nextLine());
        System.out.println("Masukkan Huruf Yang Ingin Dihitung : ");
        int count = sMyString.SearchChar(sc.nextLine().charAt(0));
        System.out.println("Max char : " + sMyString.maxChar + " Muncul : " + sMyString.countMaxChar);
        System.out.println("Min char : " + sMyString.minChar + " Muncul : " + sMyString.countMinChar);
        System.out.println("Banyak Huruf Yang Ingin Dihitung : " + count);
        sc.close();
    }
}
