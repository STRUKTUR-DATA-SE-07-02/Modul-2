#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    // Meminta input ukuran array 3 dimensi dari user
    cout << "Masukkan ukuran dimensi pertama (x): ";
    cin >> x;
    cout << "Masukkan ukuran dimensi kedua (y): ";
    cin >> y;
    cout << "Masukkan ukuran dimensi ketiga (z): ";
    cin >> z;

    // Mendeklarasikan array 3 dimensi dengan ukuran input user
    int arr[x][y][z];

    // Meminta input elemen-elemen array dari user
    cout << "Masukkan elemen-elemen array: " << endl;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "Elemen [" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    // Menampilkan array yang diinputkan user
    cout << "Array 3 dimensi yang diinputkan: " << endl;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}
