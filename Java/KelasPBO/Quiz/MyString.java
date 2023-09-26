package Java.KelasPBO.Quiz;

public class MyString {
    private String stringValue;
    StringBuffer buf = new StringBuffer();

    public MyString() {
    }

    public MyString(String stringValue) {
        this.stringValue = stringValue;
    }

    public void setStringValue(String stringValue) {
        this.stringValue = stringValue;
    }

    public String getStringValue() {
        return stringValue;
    }

    public char getChar(int idx) {
        buf.setLength(0);
        buf = new StringBuffer(getStringValue());
        return buf.charAt(idx);
    }

    public int countChar() {
        return getStringValue().length();
    }

    public char firstChar() {

        return getChar(0);
    }

    public char lastChar() {
        return getChar(getStringValue().length() - 1);
    }

    public void stringInfo() {
        System.out.println("Isi String : \"" + getStringValue() + "\"");
        System.out.println("Jumlah karakter : " + countChar());
        System.out.println("Karakter pertama : " + firstChar());
        System.out.println("Karakter terakhir : " + lastChar());
    }

    public static void main(String[] args) {
        MyString string = new MyString("Hallo apa kabar dunia");
        string.stringInfo();
    }
}
