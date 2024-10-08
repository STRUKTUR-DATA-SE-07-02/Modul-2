#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    // Input ukuran array tiga dimensi
    cout << "Masukkan nilai (x, y, z): ";
    cin >> x >> y >> z;

    // Deklarasi dan input elemen array tiga dimensi
    int arr[x][y][z];
    cout << "Masukkan array:" << endl;
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            for (int k = 0; k < z; k++) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = ";
                cin >> arr[i][j][k];
            }

    // Menampilkan elemen array
    cout << "array nya adalah:" << endl;
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            for (int k = 0; k < z; k++)
                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;

    return 0;
}
