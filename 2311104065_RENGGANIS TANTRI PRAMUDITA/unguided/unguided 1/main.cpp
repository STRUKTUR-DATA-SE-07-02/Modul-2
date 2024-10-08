#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int array[n];

    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "\nData array = ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    cout << "\nNomor genap = ";
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            cout << array[i] << " ";
        }
    }

    cout << "\nNomor ganjil = ";
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 != 0) {
            cout << array[i] << " ";
        }
    }
    return 0;
}
