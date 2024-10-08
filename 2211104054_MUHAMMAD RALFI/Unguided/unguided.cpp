// #include <iostream>
// #include <vector>
// using namespace std;
/*
int main() {
    const int slot = 10;
    int arr[slot];

    cout << "Masukkan " << slot << " angka (pisahkan dengan spasi): ";
    for(int i = 0; i < slot; i++) {
        cin >> arr[i];
    }

    cout << "Angka yang Anda masukkan: ";
    for(int i = 0; i < slot; i++) {
        cout << arr[i];
        if (i < slot - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    cout << "Nomor genap: ";
    bool firstEven = true;
    for(int i = 0; i < slot; i++) {
        if (arr[i] % 2 == 0) {
            if (!firstEven) {
                cout << ", ";
            }
            cout << arr[i];
            firstEven = false;
        }
    }
    cout << endl;

    cout << "Nomor ganjil: ";
    bool firstOdd = true;
    for(int i = 0; i < slot; i++) {
        if (arr[i] % 2 != 0) {
            if (!firstOdd) {
                cout << ", ";
            }
            cout << arr[i];
            firstOdd = false;
        }
    }
    cout << endl;

    return 0;
}
*/
/*
int main() {
    int x, y, z;

    // Meminta ukuran dimensi dari user
    cout << "Masukkan ukuran dimensi pertama (x): ";
    cin >> x;
    cout << "Masukkan ukuran dimensi kedua (y): ";
    cin >> y;
    cout << "Masukkan ukuran dimensi ketiga (z): ";
    cin >> z;

    // Membuat array 3D dengan ukuran yang dimasukkan user
    int array3D[x][y][z];

    // Meminta input dari user untuk setiap elemen di array 3D
    cout << "\nMasukkan elemen array:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Masukkan elemen [" << i << "][" << j << "][" << k << "]: ";
                cin >> array3D[i][j][k];
            }
        }
    }

    // Menampilkan array 3D yang telah diinputkan
    cout << "\nArray 3D yang diinputkan:\n";
    for (int i = 0; i < x; i++) {
        cout << "Lapisan " << i + 1 << ":\n";
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << array3D[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
*/
/*
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = numeric_limits<int>::min();
    for (int num : arr) {
        if (num > max) {
            max = num;
        }
    }
    int min = numeric_limits<int>::max();
    for (int num : arr) {
        if (num < min) {
            min = num;
        }
    }
    double sum = 0;
    for (int num : arr) {
        sum += num;
    }
    double average = sum / n;

    cout << "Nilai maksimum: " << max << endl;
    cout << "Nilai minimum: " << min << endl;
    cout << "Nilai rata-rata: " << average << endl;

    return 0;
}
*/

#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    cout << "Masukkan ukuran dimensi pertama (x): ";
    cin >> x;
    cout << "Masukkan ukuran dimensi kedua (y): ";
    cin >> y;
    cout << "Masukkan ukuran dimensi ketiga (z): ";
    cin >> z;
    int array[x][y][z];
    cout << "Masukkan nilai untuk setiap elemen array:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "Elemen [" << i << "][" << j << "][" << k << "]: ";
                cin >> array[i][j][k];
            }
        }
    }
    cout << "\nNilai-nilai dalam array 3D:\n";
    for (int i = 0; i < x; ++i) {
        cout << "\nLapisan " << i + 1 << ":\n";
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << array[i][j][k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}




