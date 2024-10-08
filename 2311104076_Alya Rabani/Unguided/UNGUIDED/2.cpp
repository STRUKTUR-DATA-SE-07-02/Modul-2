#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    int x, y, z;

    // Menerima input dimensi array dari user
    cout << "Masukkan dimensi array (x y z): ";
    cin >> x >> y >> z;

    // Membuat array tiga dimensi dengan ukuran dinamis
    vector<vector<vector<int>>> arr(x, vector<vector<int>>(y, vector<int>(z)));

    // Menerima input elemen array dari user
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cin >> arr[i][j][k];
            }
        }
    }

    // Menampilkan isi array
    cout << "\nIsi array tiga dimensi:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}