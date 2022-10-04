#include <iostream>
#include <string>
#include <string.h>
#include <bits/stdc++.h>
#include <vector>
#include <thread>
#include <chrono>
#include <fstream>

using namespace std;

int main()
{
    int nik;
    int nik_sudah_pinjam;
    string nama_buku;
    string nama_penulis;
    int lama_pinjam;

    cout << "Masukkan NIK \n";
    cin >> nik;

    if (nik == nik_sudah_pinjam)
    {
        cout << "Masukkan nama Buku " << endl;
        cin >> nama_buku;
        cout << "Masukkan nama Penulis Buku " << endl;
        cin >> nama_penulis;
        cout << "Masukkan Lama Pinjam " << endl;
        cin >> lama_pinjam;
        if (lama_pinjam <= 3)
        {
            cout << "Nama buku yang dipijam " << nama_buku << endl;
            cout << "Nama Penulis Buku " << nama_buku << endl;
            cout << "Lama Pinjam " << nama_buku << endl;
            nik = nik_sudah_pinjam;
        }
        else
        {
            cout << "Maksimal peminjaman 3 hari \n";
        }
    }
    else
    {
        cout << "Kembalikan dulu buku yang sudah dipinjam \n";
    }
    system(pause);
}