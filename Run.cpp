#include <iostream>
using namespace std;

int main () {
   int tinggi;
   cout << "Masukkan tinggi segitiga: ";
   cin >> tinggi;
    for (int q = 1; q <= tinggi; q++) {
        for (int w = tinggi; w >= q; w--) {
            cout << " ";
        }
        for (int e = 1; e <= q; e++) {
            cout << "* ";
        }
        cout << endl;
    }
}