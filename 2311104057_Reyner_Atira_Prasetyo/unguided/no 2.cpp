#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    //ukuran array
    cout << "Masukkan ukuran dimensi pertama (x): ";
    cin >> x;
    cout << "Masukkan ukuran dimensi kedua (y): ";
    cin >> y;
    cout << "Masukkan ukuran dimensi ketiga (z): ";
    cin >> z;

    //membuat array
    int array3D[x][y][z];

    //memasukan elemen
    cout << "Masukkan elemen array tiga dimensi:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Elemen [" << i << "][" << j << "][" << k << "]: ";
                cin >> array3D[i][j][k];
            }
        }
    }

    cout << "\nArray 3D yang dimasukkan adalah:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Elemen [" << i << "][" << j << "][" << k << "] = " << array3D[i][j][k] << endl;
            }
        }
    }

    //output
    cout << "\nTampilan keseluruhan array 3D:\n";
    for (int i = 0; i < x; i++) {
        cout << "Lapisan ke-" << i << ":\n";
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << array3D[i][j][k] << " ";  //tampilkan setiap elemen
            }
            cout << endl;  // ganti baris setiap baris y selesai
        }
        cout << endl;  // spasi antar x
    }

    return 0;
}
