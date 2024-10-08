#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Masukkan ukuran array: ";
    cin >> n;

    int* array = new int[n];

    cout << "Masukkan " << n << " elemen:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int menu;
    cout << "~~~ SELAMAT DATANG ~~~" << endl;
    cout << "1. Cari Nilai Maksimum" << endl;
    cout << "2. Cari Nilai Minimum" << endl;
    cout << "3. Cari Nilai Rata-rata" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> menu;

    int maks, min, jumlah;
    double avr;

    switch (menu) {
        case 1:
            maks = array[0];
            for (int i = 1; i < n; i++) {
                if (array[i] > maks) {
                    maks = array[i];
                }
            }
            cout << "Nilai Maksimum: " << maks << endl;
            break;
        case 2:
            min = array[0];
            for (int i = 1; i < n; i++) {
                if (array[i] < min) {
                    min = array[i];
                }
            }
            cout << "Nilai Minimum: " << min << endl;
            break;
        case 3:
            jumlah = 0;
            for (int i = 0; i < n; i++) {
                jumlah += array[i];
            }
            avr = (double)jumlah / n;
            cout << "Nilai Rata-rata: " << avr << endl;
            break;
        default:
            cout << "Bye!!" << endl;
    }
    return 0;
}
