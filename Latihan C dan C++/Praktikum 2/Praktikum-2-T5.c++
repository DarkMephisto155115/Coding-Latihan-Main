#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    char a[30], b[30];
    int cekhasil;
    cout << "Masukkan nama pertama mu: ";
    cin >> a;
    cout << "Masukkan nama kedua mu: ";
    cin >> b;
    strcat(a, b);
    cout << "Nama lengkap anda: " << a;
    cout << endl;
    cin >> cekhasil;
    return 0;
}