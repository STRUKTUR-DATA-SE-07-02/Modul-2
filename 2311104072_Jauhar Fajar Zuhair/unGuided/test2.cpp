#include <iostream>

using namespace std;

int main() {
    int x, y, z;

    cout << "Masukkan dimensi array (x y z): ";
    cin >> x >> y >> z;

    int array3D[x][y][z];

    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cin >> array3D[i][j][k];
            }
        }
    }

    cout << "Isi array tiga dimensi:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << array3D[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}