#include <iostream>
using namespace std;

int main(){
    int x,y,z;

    cout << "Ukuran Pertama: ";
    cin >> x;
    cout << "Ukuran Kedua: ";
    cin >> y;
    cout << "Ukuran ketiga: ";
    cin >> z;

    int arr[x][y][z];

    cout << "Masukaan Data: " << endl;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "Elemen [" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    cout << "Data yang dimiliki: " << endl;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }
}
