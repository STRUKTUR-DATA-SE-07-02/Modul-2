#include <iostream>
using namespace std;

int main() {
    int n;

    // Input jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    // Input data array dari user
    cout << "Masukkan " << n << " angka: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Menampilkan seluruh data array
    cout << "Data Array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) {
            cout << ", ";  // Tambahkan koma setelah setiap elemen kecuali elemen terakhir
        }
    }
    cout << endl;

    // Menampilkan angka genap
    cout << "Nomor Genap : ";
    bool foundEven = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (foundEven) {
                cout << ", ";  // Tambahkan koma setelah setiap elemen genap kecuali elemen pertama
            }
            cout << arr[i];
            foundEven = true;
        }
    }
    if (!foundEven) {
        cout << "-"; // Jika tidak ada bilangan genap
    }
    cout << endl;

    // Menampilkan angka ganjil
    cout << "Nomor Ganjil : ";
    bool foundOdd = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            if (foundOdd) {
                cout << ", ";  // Tambahkan koma setelah setiap elemen ganjil kecuali elemen pertama
            }
            cout << arr[i];
            foundOdd = true;
        }
    }
    if (!foundOdd) {
        cout << "-"; // Jika tidak ada bilangan ganjil
    }
    cout << endl;

    return 0;
}
