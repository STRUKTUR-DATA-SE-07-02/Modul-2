#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    // Input ukuran array 3D
    cout << "Masukkan ukuran dimensi x: ";
    cin >> x;
    cout << "Masukkan ukuran dimensi y: ";
    cin >> y;
    cout << "Masukkan ukuran dimensi z: ";
    cin >> z;

    int arr[x][y][z];

    // Input elemen array
    cout << "Masukkan elemen array 3D:" << endl;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            for(int k = 0; k < z; k++) {
                cout << "Elemen [" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    // Menampilkan elemen array 3D
    cout << "\nElemen array 3D:" << endl;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            for(int k = 0; k < z; k++) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}
