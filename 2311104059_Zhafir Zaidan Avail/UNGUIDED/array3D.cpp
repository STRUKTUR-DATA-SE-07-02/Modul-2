#include <iostream>
#include <vector>

using namespace std;

int main() {
    int baris, kolom, kedalaman;

    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;
    cout << "Masukkan jumlah kedalaman: ";
    cin >> kedalaman;

    // Membuat array tiga dimensi menggunakan vector of vectors
    vector<vector<vector<int>>> array3D(baris, vector<vector<int>>(kolom, vector<int>(kedalaman)));

    // Mengisi elemen-elemen array
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            for (int k = 0; k < kedalaman; k++) {
                cout << "Masukkan nilai untuk elemen [" << i << "][" << j << "][" << k << "]: ";
                cin >> array3D[i][j][k];
            }
        }
    }

    // Menampilkan isi array
    cout << "Isi array 3D:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            for (int k = 0; k < kedalaman; k++) {
                cout << array3D[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}