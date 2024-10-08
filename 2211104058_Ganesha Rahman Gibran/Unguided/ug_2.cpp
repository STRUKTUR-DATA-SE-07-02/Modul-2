#include <iostream>
#include <vector>

using namespace std;

void inputArrayTigaDimensi() {
    int x, y, z;

    cout << "Masukkan ukuran pertama (x): ";
    cin >> x;
    cout << "Masukkan ukuran kedua (y): ";
    cin >> y;
    cout << "Masukkan ukuran ketiga (z): ";
    cin >> z;

    vector<vector<vector<int>>> arrayTigaDimensi(x, vector<vector<int>>(y, vector<int>(z)));


    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "Masukkan elemen untuk [" << i << "][" << j << "][" << k << "]: ";
                cin >> arrayTigaDimensi[i][j][k];
            }
        }
    }


    cout << "\nArray Tiga Dimensi yang Dimasukkan:\n";
    for (int i = 0; i < x; ++i) {
        cout << "Lapisan " << i << ":\n";
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << arrayTigaDimensi[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl; 
    }
}

int main() {
    inputArrayTigaDimensi();
    return 0;
}