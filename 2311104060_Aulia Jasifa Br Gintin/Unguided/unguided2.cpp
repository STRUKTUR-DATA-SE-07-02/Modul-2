#include <iostream>

using namespace std;

int main() {
    int x, y, z;

    // input ukuran array dari user
    cout << "Masukkan ukuran array 3D (x y z): ";
    cin >> x >> y >> z;

    // membuat array 3D dengan ukuran yang diinputkan
    int*** arr = new int**[x];
    for (int i = 0; i < x; i++) {
        arr[i] = new int*[y];
        for (int j = 0; j < y; j++) {
            arr[i][j] = new int[z];
        }
    }

    // input elemen array dari usera
    cout << "Masukkan elemen array: " << endl;
    for (int i = 0; i < x; i++) {
        cout << "Lapisan " << i + 1 << ":" << endl;
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    // membersihkan memori
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            delete[] arr[i][j];
        }
        delete[] arr[i];

        return 0;
    }
}