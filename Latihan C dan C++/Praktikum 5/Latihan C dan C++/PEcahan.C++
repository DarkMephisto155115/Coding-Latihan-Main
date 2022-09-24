#include <iostream>
#include <string>
using namespace std;
// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)

int sum(int n);

int main()
{
    int cekhasil;
    int number, result;
    cout << "Enter number";
    cin >> number;
    result = sum(number);
    cout << result;
    cin >> cekhasil;
    return 0;
}

int sum(int num)
{
    if (num != 0)
    {
        return num + sum(num - 1);
    }
    else
    {
        return num;
    }
}