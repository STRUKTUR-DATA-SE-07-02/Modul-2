#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    cout << "Masukkan ukuran dimensi pertama: ";
    cin >> x;
    cout << "Masukkan ukuran dimensi kedua: ";
    cin >> y;
    cout << "Masukkan ukuran dimensi ketiga: ";
    cin >> z;

    int arr[x][y][z];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Masukkan nilai untuk elemen [" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    cout << "\nArray 3D yang diinputkan:" << endl;
    for (int i = 0; i < x; i++) {
        cout << "Dimensi " << i + 1 << ":" << endl;
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
