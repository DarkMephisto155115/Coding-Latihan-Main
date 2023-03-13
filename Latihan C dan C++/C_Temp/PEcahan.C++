#include <iostream>
#include <string>
using namespace std;
// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)

int main()
{
    int tinggi_badan[10] = {175, 165, 166, 157, 184, 156, 163, 176, 171, 169};
    float sum;
    float total = sizeof(tinggi_badan) / sizeof(tinggi_badan[0]);
    double average;
    for (int i = 0; i < 10; i++)
    {
        sum = sum + tinggi_badan[i];
    };
    average = sum / total;
    cout << sizeof(tinggi_badan[0]);
    return 0;

    return 0;
}