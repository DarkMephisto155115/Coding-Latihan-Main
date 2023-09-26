package Java.KelasPBO.Tugas5;

public class demoBuffer {
    private String kata = "saya makan";
    StringBuffer buf = new StringBuffer();

    public StringBuffer getBuf() {
        return buf;
    }

    public void tambahKata(String huruf) {
        this.buf.setLength(0);
        this.buf = new StringBuffer(kata);
        this.buf.append(huruf);
        System.out.println("Sebelum diubah : " + kata);
        System.out.println("Sebelum diubah : " + getBuf());
    }

    public void ubahKata(char c) {
        this.buf.setLength(0);
<<<<<<< Updated upstream
        this.buf = new StringBuffer(this.kata);
        System.out.println("Sebelum diubah : " + kata);
        for (int i = 0; i < this.buf.length(); i++) {
            char hurufIni = getBuf().charAt(i);
            if (hurufIni == c) {
                getBuf().setCharAt(i, '*');
=======
        this.buf = new StringBuffer(kata);
        System.out.println("Sebelum diubah : " + kata);
        for (int i = 0; i < this.buf.length(); i++) {
            if (this.buf.charAt(i) == c) {
                this.buf.setCharAt(i, '*');
>>>>>>> Stashed changes
            }
        }
        System.out.println("sesudah diubah : " + getBuf());
    }

    public void deleteKata(char c) {
        this.buf.setLength(0);
<<<<<<< Updated upstream
        this.buf = new StringBuffer(this.kata);
        System.out.println("Sebelum diubah : " + kata);
        for (int i = 0; i < this.buf.length(); i++) {
            char hurufIni = getBuf().charAt(i);
            if (hurufIni == c) {
                getBuf().deleteCharAt(i);
=======
        this.buf = new StringBuffer(kata);
        System.out.println("Sebelum diubah : " + kata);
        for (int i = 0; i < this.buf.length(); i++) {
            if (this.buf.charAt(i) == c) {
                this.buf.deleteCharAt(i);
>>>>>>> Stashed changes
            }
        }
        System.out.println("sesudah diubah : " + getBuf());
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
