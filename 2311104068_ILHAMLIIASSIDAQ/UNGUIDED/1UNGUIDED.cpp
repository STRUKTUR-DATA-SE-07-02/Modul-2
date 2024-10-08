#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int maksimal = 10;
    int arr[maksimal], n;

    cout << "Masukkan jumlah elemen (maksimal " << maksimal << "): ";
    cin >> n;

    if (n <= 0 || n > maksimal) {
        cout << "Jumlah elemen tidak valid." << endl;
        return 1;
    }

    cout << "Masukkan " << n << " angka: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Data Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Nomor Genap: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) cout << arr[i] << (i < n-1 ? ", " : "");
    }
    cout << endl;

    cout << "Nomor Ganjil: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) cout << arr[i] << (i < n-1 ? ", " : "");
    }
    cout << endl;

    return 0;
}
