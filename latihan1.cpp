#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    float panjang, lebar, luas;

    // Input dari user
    cout << "Masukkan panjang (meter): ";
    cin >> panjang;

    cout << "Masukkan lebar (meter): ";
    cin >> lebar;

    // Hitung luas
    luas = panjang * lebar;

    // Tampilkan hasil
    cout << "Panjang: " << panjang << " meter" << endl;
    cout << "Lebar: " << lebar << " meter" << endl;
    cout << "Luas: " << luas << " meter persegi" << endl;

    return 0;
}