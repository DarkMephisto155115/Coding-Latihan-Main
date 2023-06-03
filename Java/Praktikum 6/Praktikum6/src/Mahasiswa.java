package Java.Praktikum;

import java.lang.Exception;
import java.util.Scanner;
import java.util.regex.Pattern;

public class Mahasiswa {
    private String nama;
    private String nim;
    private String email;

    class NimException extends Exception {
        public NimException(String message) {
            super(message);
        }
    }

    class NameException extends Exception {
        public NameException(String message) {
            super(message);
        }
    }

    class EmailException extends Exception {
        public EmailException(String message) {
            super(message);
        }
    }

    public void setNama(String nama) throws NameException {
        if (nama.matches("[a-zA-Z]+")) {
            this.nama = nama;
        } else {
            throw new NameException("Nama hanya boleh mengandung huruf saja!!!");
        }
    }

    public void setNim(String nim) throws NimException {
        String subString = "10370311";
        if (nim.contains(subString) && nim.length() == 15 && nim.matches("[0-9]+")) {
            this.nim = nim;
        } else {
            throw new NimException(
                    "NIM harus terdiri dari 15 digit angka dan memiliki kode 10370311 (Ex. 202210370311402)");
        }
    }

    public void setEmail(String email) throws EmailException {
        if (Pattern.matches(
                "^[\\w!#$%&amp;'+/=?`{|}~^-]+(?:\\.[\\w!#$%&amp;'+/=?`{|}~^-]+)*@(?:[a-zA-Z0-9-]+\\.)+[a-zA-Z]{2,6}$",
                email)) {
            this.email = email;
        } else {
            throw new EmailException("Format email salah");
        }
    }

    private void cekNama() {

    }

    private void cekNIM() {

    }

    private void cekEmail() {

    }

    public void printDataDiri() {
        System.out.println("\nData diri mahasiswa yang berhasil diinput:");
        System.out.println("Nama : " + nama);
        System.out.println("NIM : " + nim);
        System.out.println("Email : " + email);
    }
}
