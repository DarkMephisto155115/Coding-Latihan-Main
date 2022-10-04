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
    int banyak_pinjam;

    cout << "Masukkan NIK \n";
    cin >> nik;

    if (nik != nik_sudah_pinjam)
    {
        cout << "berapa banyak buku yang mau dipinjam?";
        cin >> banyak_pinjam;
        if (banyak_pinjam == 1)
        {
            cout << "Masukkan nama Buku " << endl;
            cin >> nama_buku;
            cout << "Masukkan nama Penulis Buku " << endl;
            cin >> nama_penulis;
            cout << "Masukkan Lama Pinjam " << endl;
            cin >> lama_pinjam;
        }
        else if (banyak_pinjam == 2)
        {
            cout << "Masukkan nama Buku " << endl;
            cin >> nama_buku;
            cout << "Masukkan nama Penulis Buku " << endl;
            cin >> nama_penulis;
            cout << "Masukkan nama Buku Kedua " << endl;
            cin >> nama_buku;
            cout << "Masukkan nama Penulis Buku Kedua " << endl;
            cin >> nama_penulis;
            cout << "Masukkan Lama Pinjam " << endl;
            cin >> lama_pinjam;
        }
        else if (banyak_pinjam == 3)
        {
            cout << "Masukkan nama Buku " << endl;
            cin >> nama_buku;
            cout << "Masukkan nama Penulis Buku " << endl;
            cin >> nama_penulis;
            cout << "Masukkan nama Buku Kedua " << endl;
            cin >> nama_buku;
            cout << "Masukkan nama Penulis Buku Kedua " << endl;
            cin >> nama_penulis;
            cout << "Masukkan nama Buku Ketiga " << endl;
            cin >> nama_buku;
            cout << "Masukkan nama Penulis Buku Ketiga " << endl;
            cin >> nama_penulis;
            cout << "Masukkan Lama Pinjam " << endl;
            cin >> lama_pinjam;
        }
        else
        {
            cout << "Maksimal peminjaman 3 buku \n";
        }
    }
    else
    {
        cout << "Kembalikan dulu buku yang sudah dipinjam \n";
    }
    system(pause);
    return 0;
}