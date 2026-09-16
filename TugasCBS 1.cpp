#include <iostream>
using namespace std;

int main () {
    float Diskon, TotalBelanja;
    cout << "=== Kalkulator Belanja Kasir ===" << endl;
    cout << "Masukkan Nominal Belanja: ";
    cin >> TotalBelanja;
    cout << "------ Nominal Belanja: " << TotalBelanja << endl;
    
    cout << "Ringkasan Pembayaran: " << endl;
    if (TotalBelanja >= 300000) {
        Diskon = 0.2;
    } else if (TotalBelanja >= 150000) {
        Diskon = 0.1;
    } else {
        Diskon = 0;}

        float TotalBayar = TotalBelanja - (TotalBelanja * Diskon);
        

        cout << "Diskon: " << Diskon << endl;
        cout << "Total Bayar: " << TotalBayar << endl;
        cout << "Terima kasih telah berbelanja di toko kami!" << endl;
        cout << endl;

        return 0;
        
    }
