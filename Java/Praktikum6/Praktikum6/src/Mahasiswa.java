package Java.Praktikum6.Praktikum6.src;

import java.lang.Exception;
import java.util.regex.Pattern;

class NimLengthException extends Exception {
    public NimLengthException(String message) {
        super(message);
    }
}

class NimFormatException extends Exception {
    public NimFormatException(String message) {
        super(message);
    }
}

class NameException extends Exception {
    public NameException(String message) {
        super(message);
    }
}

class NameSpaceException extends Exception {
    public NameSpaceException(String message) {
        super(message);
    }
}

class EmailException extends Exception {
    public EmailException(String message) {
        super(message);
    }
}

public class Mahasiswa {
    private String nama;
    private String nim;
    private String email;

    public void setNama(String nama) throws NameException, NameSpaceException {
        cekNama(nama);
    }

    public void setNim(String nim) throws NimFormatException, NimLengthException {
        cekNIM(nim);
    }

    public void setEmail(String email) throws EmailException {
        cekEmail(email);
    }

    private void cekNama(String nama) throws NameException, NameSpaceException {
        if (nama.matches("^\\S+(\\s+\\S+)*$")) {
            if (nama.matches("[a-zA-Z ]+")) {
                this.nama = nama;
            } else {
                throw new NameException("Nama hanya boleh mengandung huruf saja!!!");
            }
        } else {
            throw new NameSpaceException("Tidak boleh ada spasi didepan");
        }
    }

    private void cekNIM(String nim) throws NimFormatException, NimLengthException {
        String subString = "10370311";
        if (nim.contains(subString) && nim.matches("[0-9]+")) {
            if (nim.length() == 15) {
                this.nim = nim;
            } else {
                throw new NimLengthException(
                        "NIM harus terdiri dari 15 angka.");
            }

        } else {
            throw new NimFormatException(
                    "NIM harus terdiri dari angka dan memiliki kode 10370311 (Ex. 202210370311402)");
        }
    }

    private void cekEmail(String email) throws EmailException {
        if (Pattern.matches(
                "^[\\w!#$%&amp;'+/=?`{|}~^-]+(?:\\.[\\w!#$%&amp;'+/=?`{|}~^-]+)*@(?:[a-zA-Z0-9-]+\\.)+[a-zA-Z]{2,6}$",
                email)) {
            this.email = email;
        } else {
            throw new EmailException("Format email salah");
        }
    }

    public void printDataDiri() {
        System.out.println("\nData diri mahasiswa yang berhasil diinput:");
        System.out.println("Nama : " + nama);
        System.out.println("NIM : " + nim);
        System.out.println("Email : " + email);
    }
}
