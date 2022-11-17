#include <iostream>
using namespace std;

int main (){
    char nomenuMakanan;
    int harga;

    cout << "           DAFTAR MENU Mc'Yahud            " << endl;
    cout << "===========================================" << endl;
    cout << "1. Nasi Goreng Informatika     Rp. 5.000,- " << endl;
    cout << "2. Nasi Soto Ayam Internet     Rp. 7.000,- " << endl;
    cout << "3. Gado-gado Disket            Rp. 4.500,- " << endl;
    cout << "4. Bubur Ayam LAN              Rp. 4.000,- " << endl;
    cout << "===========================================" << endl;

    cout << "Masukkan pilihan anda = ";
    cin >> nomenuMakanan;

    switch (nomenuMakanan){
    case '1':
        cout << "Pilihan No.1 Nasi Goreng Informatika Rp ";
        harga = 5000;
        break;

    case '2':
        cout << "Pilihan No.2 Nasi Soto Ayam Internet Rp ";
        harga = 7000;
        break;

    case '3':
        cout << "Pilihan No.3 Gado-gado Disket Rp ";
        harga = 4500;
        break;

    case '4':
        cout << "Pilihan No.4 Bubur Ayam LAN Rp ";
        harga = 4000;
        break;
    }

    cout << harga << endl;

return 0;
}
