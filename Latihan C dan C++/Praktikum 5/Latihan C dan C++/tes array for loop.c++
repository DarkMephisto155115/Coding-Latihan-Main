#include <iostream>
#include <string>
using namespace std;
// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)

int main()
{
    // membuat array kosong
    int nilai[5];
    // mengisi array
    nilai[0] = 32;
    nilai[1] = 42;
    nilai[2] = 76;
    nilai[3] = 31;
    nilai[4] = 57;
    // mencetak isi array dengan perulangan
    for (int a; a < 5; a++)
    {
        cout << "Nilai ke-" << a << "= " << nilai[a] << endl;
    }
    return 0;
}