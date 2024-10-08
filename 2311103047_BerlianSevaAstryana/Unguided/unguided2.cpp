#include <iostream>

using namespace std;

int main() {
    int baris, kolom, dim3; 

    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;
    cout << "Masukkan dimensi 3: ";
    cin >> dim3;

    int*** arr = new int**[baris];
    for (int i = 0; i < baris; i++) {
        arr[i] = new int*[kolom];
        for (int j = 0; j < kolom; j++) {
            arr[i][j] = new int[dim3];
        }
    }


    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            for (int k = 0; k < dim3; k++) {
                cout << "Masukkan elemen [" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    cout << "Array tiga dimensi adalah:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            for (int k = 0; k < dim3; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}