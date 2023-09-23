#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    string k;

    cout << "masukkan jenis kelamin (pria/wanita): ";
    cin >> k;

    cout << "masukkan berat badan: ";
    cin >> a;

    cout << "masukkan tinggi badan: ";
    cin >> b;

    if (k == "pria")
    {
        c = a / (b * b / 10000);
    }
    else if (k == "wanita")
    {
        c = a / (b * b / 10000);
    }

    cout << "Body Mass Index (BMI) Anda adalah: " << c << endl;

    if (c < 18.5)
    {
        cout << "Kurus" << endl;
    }
    else if (c > 27.5)
    {
        cout << "Obesitas" << endl;
    }
    else if (c > 23 and c <= 27.5)
    {
        cout << "Gemuk" << endl;
    }
    else if (c >= 18.5 and c <= 23)
    {
        cout << "Normal" << endl;
    }
    else
    {
        cout << "data tidak valid" << endl;
    }

    return 0;
}