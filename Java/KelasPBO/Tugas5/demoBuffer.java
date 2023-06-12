package Java.KelasPBO.Tugas5;

public class demoBuffer {
    private String kata = "saya makan";
    StringBuffer buf = new StringBuffer();

    public StringBuffer getBuf() {
        return buf;
    }

    public void tambahKata(String huruf) {
        this.buf.setLength(0);
        System.out.println("Sebelum diubah : " + kata);
        for (int i = 0; i < kata.length(); i++) {
            char hurufIni = kata.charAt(i);
            if (kata.charAt(i) == ' ') {
                getBuf().append(huruf);
            } else {
                getBuf().append(hurufIni);
            }
        }
        System.out.println("Sebelum diubah : " + getBuf());
    }

    public void ubahKata(char c) {
        this.buf.setLength(0);
        System.out.println("Sebelum diubah : " + kata);
        for (int i = 0; i < kata.length(); i++) {
            char hurufIni = kata.charAt(i);
            if (hurufIni == c) {
                getBuf().append('*');
            } else {
                getBuf().append(hurufIni);
            }
        }
        System.out.println("Sebelum diubah : " + getBuf());
    }

    public void deleteKata(char c) {
        this.buf.setLength(0);
        System.out.println("Sebelum diubah : " + kata);
        for (int i = 0; i < kata.length(); i++) {
            char hurufIni = kata.charAt(i);
            if (kata.charAt(i) == c) {

            } else {
                getBuf().append(hurufIni);
            }
        }
        System.out.println("Sebelum diubah : " + getBuf());
    }

    public static void main(String[] args) {
        demoBuffer demoBuffer = new demoBuffer();
        System.out.println("Efek Tambah Kata");
        demoBuffer.tambahKata("abc");
        System.out.println("");
        System.out.println("Efek Ubah Kata");
        demoBuffer.ubahKata('a');
        System.out.println("");
        System.out.println("Efek delete Kata");
        demoBuffer.deleteKata('a');
    }
}
