#include <iostream>
#include <string>

using namespace std;

int main()
{

    int nilai;
    
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
    system("pause");
    return 0;
}