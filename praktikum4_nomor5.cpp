#include <iostream>
using namespace std;

int main (){
    int kodeSusu, jmlpembelian;
    float totalHarga;
    string ukuran;

    cout << "== Kode Susu == Nama produk ==   Ukuran   ==     Harga    ==" << endl;
    cout << "|| 1         || Dancow      || (B)Besar   || Rp. 10.000   ||" << endl;
    cout << "||           ||             || (S)Sedang  || Rp. 4.250    ||" << endl;
    cout << "||           ||             || (K)kecil   || Rp. 2.100    ||" << endl;
    cout << "|| 2         || Indomilk    || (B)Besar   || Rp. 8.500    ||" << endl;
    cout << "||           ||             || (S)Sedang  || Rp. 4.000    ||" << endl;
    cout << "||           ||             || (K)kecil   || Rp. 2.025    ||" << endl;
    cout << "|| 3         || Sustacal    || (B)Besar   || Rp. 17.000   ||" << endl;
    cout << "||           ||             || (S)Sedang  || Rp. 14.500   ||" << endl;
    cout << "||           ||             || (K)kecil   || Rp. 8.300    ||" << endl;

    cout << "Masukkan Kode Susu (1,2,3) : ";
    cin >> kodeSusu;
    cout << "Masukkan Jumlah Pembelian : ";
    cin >> jmlpembelian;
    cout << "Masukkan Ukuran (B/S/K) : ";
    cin >> ukuran;

        if(kodeSusu == 1){
            if(ukuran == "B"){
            totalHarga = (jmlpembelian * 10000);
            cout << "Dancow" << endl;
            cout << "Harga Rp.10.000" << endl;
            cout << "Jumlah Pembelian : " << totalHarga << endl;
        }else if(ukuran == "S"){
            totalHarga = (jmlpembelian * 4250);
            cout << "Dancow" << endl;
            cout << "Harga Rp.4.250" << endl;
            cout << "Jumlah Pembelian : " << totalHarga << endl;
        }else if(ukuran == "K"){
            totalHarga = (jmlpembelian * 2100);
            cout << "Dancow" << endl;
            cout << "Harga Rp.2.100" << endl;
            cout << "Jumlah Pembelian : " << totalHarga << endl;
        }else{
            cout << "Jumlah dan Ukuran tidak valid, Tolong Masukkan Jumlah dan Ukuran dengan benar! ";
        }
   }else if(kodeSusu == 2){
            if(ukuran == "B"){
            totalHarga = (jmlpembelian * 8500);
            cout << "Indomilk" << endl;
            cout << "Harga Rp.8.500" << endl;
            cout << "Jumlah Pembelian : " << totalHarga << endl;
        }else if(ukuran == "S"){
            totalHarga = (jmlpembelian * 4000);
            cout << "Indomilk" << endl;
            cout << "Harga Rp.4.000" << endl;
            cout << "Jumlah Pembelian : " << totalHarga << endl;
        }else if(ukuran == "K"){
            totalHarga = (jmlpembelian * 2025);
            cout << "Indomilk" << endl;
            cout << "Harga Rp.2.025" << endl;
            cout << "Jumlah Pembelian : " << totalHarga << endl;
        }else{
            cout << "Jumlah dan Ukuran tidak valid, Tolong Masukkan Jumlah dan Ukuran dengan benar! ";
        }
    }else if(kodeSusu == 3){
            if(ukuran == "B"){
            totalHarga = (jmlpembelian * 17000);
            cout << "Sustacal" << endl;
            cout << "Harga Rp.17.000" << endl;
            cout << "Jumlah Pembelian : " << totalHarga << endl;
        }else if(ukuran == "S"){
            totalHarga = (jmlpembelian * 14500);
            cout << "Sustacal" << endl;
            cout << "Harga Rp.14.500" << endl;
            cout << "Jumlah Pembelian : " << totalHarga << endl;
        }else if(ukuran == "K"){
            totalHarga = (jmlpembelian * 8300);
            cout << "Sustacal" << endl;
            cout << "Harga Rp.8.300" << endl;
            cout << "Jumlah Pembelian : " << totalHarga << endl;
        }else{
            cout << "Jumlah dan Ukuran tidak valid, Tolong Masukkan Jumlah dan Ukuran dengan benar! ";
        }
    }else{
        cout << "Harap masukkan pilihan yang tersedia!";
    }

return 0;
}
