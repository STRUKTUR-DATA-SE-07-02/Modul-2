#include <iostream>

using namespace std;

int main() {
    int n; // ukuran array
    cout << "Masukkan ukuran array: ";
    cin >> n;

    int* array = new int[n]; // buat array dengan ukuran n

    // input elemen array dari user
    cout << "Masukkan " << n << " elemen:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    // menu
    int pilihan;
    cout << "Menu:" << endl;
    cout << "1. Cari Nilai Maksimum" << endl;
    cout << "2. Cari Nilai Minimum" << endl;
    cout << "3. Cari Nilai Rata-rata" << endl;
    cout << "4. Keluar" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;

    int maks, min, jumlah;
    double rata_rata;

    switch (pilihan) {
        case 1:
            // cari nilai maksimum
            maks = array[0];
            for (int i = 1; i < n; i++) {
                if (array[i] > maks) {
                    maks = array[i];
                }
            }
            cout << "Nilai Maksimum: " << maks << endl;
            break;
        case 2:
            // cari nilai minimum
            min = array[0];
            for (int i = 1; i < n; i++) {
                if (array[i] < min) {
                    min = array[i];
                }
            }
            cout << "Nilai Minimum: " << min << endl;
            break;
        case 3:
            // cari nilai rata-rata
            jumlah = 0;
            for (int i = 0; i < n; i++) {
                jumlah += array[i];
            }
            rata_rata = (double)jumlah / n;
            cout << "Nilai Rata-rata: " << rata_rata << endl;
            break;
        case 4:
            // keluar
            cout << "Selamat tinggal!" << endl;
            delete[] array;
            return 0;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
    }

    delete[] array;

    return 0;
}