#include <iostream>

using namespace std;

int main() {
    int arr[10];
    int i;

    cout << "Masukkan 10 angka (dipisahkan spasi): ";
    for (i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "Data Array : ";
    for (i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Nomor Genap : ";
    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << ", ";
        }
    }
    cout << endl;

    cout << "Nomor Ganjil : ";
    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << ", ";
        }
    }
    cout << endl;

    return 0;
}