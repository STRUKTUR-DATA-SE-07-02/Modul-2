#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    // Input jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    vector<int> arr(n);

    // Input elemen array
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Menampilkan Data Array
    cout << "Data Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {
            cout << " "; // Spasi antara angka
        }
    }
    cout << endl;

    // Menampilkan nomor genap
    cout << "Nomor Genap: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << ", ";
        }
    }

    // Menghapus koma terakhir jika ada
    if (n > 0) {
        cout << "\b\b "; // Menghapus koma terakhir
    }
    cout << endl;

    // Menampilkan nomor ganjil
    cout << "Nomor Ganjil: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << ", ";
        }
    }

    // Menghapus koma terakhir jika ada
    if (n > 0) {
        cout << "\b\b "; // Menghapus koma terakhir
    }
    cout << endl;

    return 0;
}
