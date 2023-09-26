package Java.KelasPBO.Quiz;

import java.util.Arrays;

public class SortMyString extends MyString {

    public SortMyString(String stringValue) {
        super(stringValue);
    }

    public String sort() {
        char stringArr[] = getStringValue().toLowerCase().toCharArray();
        Arrays.sort(stringArr);
        return new String(stringArr);
    }

    @Override
    public void stringInfo() {
        // TODO Auto-generated method stub
        super.stringInfo();
        System.out.println("String terurut : \"" + sort() + "\"");
    }

    public static void main(String[] args) {
        SortMyString sMyString = new SortMyString("Hallo apa kabar dunia");
        sMyString.stringInfo();
    }
}
