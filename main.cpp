#include <iostream>
using namespace std;

// Deklarasi fungsi
void salamPraktikum() {
    cout << "========================================" << endl;
    cout << "Selamat Datang di Praktikum Pemrograman!" << endl;
    cout << "========================================" << endl;
}

int hitungLuasPersegi(int sisi) {
    return sisi * sisi;
}

// Program Utama
int main() {
    // Memanggil fungsi
    salamPraktikum();

    int s = 5;
    int hasil = hitungLuasPersegi(s);
    
    cout << "Luas persegi dengan sisi " << s << " adalah: " << hasil << endl;

    return 0;
}
