#include <iostream>
#include <string>
using namespace std;

int main()
{
    int angkakedua, ketiga;
    angkakedua = 5;
    ketiga = 64;
    bool hasil = angkakedua > ketiga;
    cout
        << "Hasil dari perbandingan dari nilai kedua > nilai ketiga adalah:"
        << hasil; // 0 = false, 1 = true
    return 0;
}