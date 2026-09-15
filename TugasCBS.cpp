#include <iostream>
using namespace std;

int main () {

    float NominalUang;
    char KodeObjek;
    float Harga;

    cout << "========= VENDING MACHINE AUTOMAT =========" << endl;
    cout << "Pilihan Menu: " << endl;
    cout << "1. Air Mineral = Rp 4.000 (Kode 1)" << endl;
    cout << "2. Teh Botol = Rp 6.000 (Kode 2)" << endl;
    cout << "3. Kopi Susu = Rp 10.000 (Kode 3)" << endl;
    cout << endl;
    cout << "Pilih Kode Objek (1/2/3): ";
    cin >> KodeObjek;
        cout << "Masukkan Uang Anda: Rp ";
        cin >> NominalUang;

        cout << endl;
        cout << "---------Detail Transaksi--------- " << endl;

        cout << "Objek yang dipilih:"; 

        switch (KodeObjek) {
            case '1':
                Harga = 4000;
                cout << "Air Mineral" << endl;
                break;
            case '2':
                Harga = 6000;
                cout << "Teh Botol" << endl;
                break;
            case '3':
                Harga = 10000;
                cout << "Kopi Susu" << endl;
                break;
            default:
                cout << "Kode Objek Tidak Valid!" << endl;
                break;
        }

        int Kembalian =  NominalUang-Harga;

        if (NominalUang >= Harga) {
            cout << "Kembalian (Rp):" << Kembalian << endl;
            int LembarLima = Kembalian / 5000;
            Kembalian = Kembalian % 5000;
            int LembarSeribu = Kembalian / 1000;
            Kembalian = Kembalian % 1000;

            cout << endl;
            cout << "-------Rincian Kembalian-------" << endl;
            cout << "Lembar 5.000: " << LembarLima << "\t lembar" << endl;
            cout << "Lembar 1.000: " << LembarSeribu << "\t lembar" << endl;
        } else {
                
            cout << "Uang Anda Kurang!" << endl;
            float Kekurangan = Harga-NominalUang;
            cout << "Kekurangan (Rp): " << Kekurangan << endl;
        }

        if (Kembalian <= 0){
            cout << "Sisa yang tidak terbagi (Kurang dari Rp 1.000)" << Kembalian << endl; 
        }
return 0;

        }