#include <iostream>
#include <string>
#include <cstring>
using namespace std;
// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)

int main()
{
    char a[30], b[30];
    cout << "Masukkan nama pertama mu: ";
    cin >> a;
    cout << "Masukkan nama kedua mu: ";
    cin >> b;
    strcat(a, b);
    cout << "Nama lengkap anda: " << a;
    cout << endl;
    system("pause");
    return 0;
}