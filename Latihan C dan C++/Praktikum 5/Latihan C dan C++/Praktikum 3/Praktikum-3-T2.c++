#include <iostream>
#include <string>
using namespace std;
// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)

int main()
{

    int nilai;
    int cekhasil;
    cout << "Masukkan Nilai Anda: ";
    cin >> nilai;
    if (nilai >= 60)
    {
        cout << "Anda lulus dengan nilai " << nilai << endl;
    }
    else
    {
        cout << "Maaf anda tidak lulus!!!" << endl;
    }
    cin >> cekhasil;
    return 0;
}