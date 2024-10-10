#include <iostream>
using namespace std;

/*int main() {
    int arr[10];

    cout << "Masukkan 10 angka: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "Data Array: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Nomor Genap: ";
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << ", ";
        }
    }
    cout << endl;

    cout << "Nomor Ganjil: ";
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << ", ";
        }
    }
    cout << endl;

    return 0;
}
*/

/*
int main() {
    int x, y, z;
    cout << "Masukkan ukuran dimensi pertama: ";
    cin >> x;
    cout << "Masukkan ukuran dimensi kedua: ";
    cin >> y;
    cout << "Masukkan ukuran dimensi ketiga: ";
    cin >> z;

    int ***array = new int**[x];
    for (int i = 0; i < x; i++) {
        array[i] = new int*[y];
        for (int j = 0; j < y; j++) {
            array[i][j] = new int[z];
        }
    }

    cout << "\nMasukkan elemen array:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "array[" << i << "][" << j << "][" << k << "]: ";
                cin >> array[i][j][k];
            }
        }
    }

    cout << "\nIsi array:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "array[" << i << "][" << j << "][" << k << "]: " << array[i][j][k] << endl;
            }
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            delete[] array[i][j];
        }
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
*/

int main() {
    int n, max, min, sum = 0;
    float avg;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    max = arr[0];
    min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
        sum += arr[i];
    }

    avg = (float)sum / n;

    cout << "\nNilai maksimum: " << max << endl;
    cout << "Nilai minimum: " << min << endl;
    cout << "Nilai rata-rata: " << avg << endl;

    return 0;
}
