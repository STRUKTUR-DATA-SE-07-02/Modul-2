#include <iostream>
using namespace std;

int main() {
    int n;

    //ukuran array
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    int data_array[n], nomor_genap[n], nomor_ganjil[n];
    int genap_count = 0, ganjil_count = 0;

    //memasukan data ke dalam array
    cout << "Masukkan angka ke dalam array: ";
    for (int i = 0; i < n; i++) {
        cin >> data_array[i];

        if (data_array[i] % 2 == 0) {
            nomor_genap[genap_count++] = data_array[i];
        } else {
            nomor_ganjil[ganjil_count++] = data_array[i];
        }
    }

    //output
    cout << "Data Array : ";
    for (int i = 0; i < n; i++) {
        cout << data_array[i] << " ";
    }
    cout << endl;

    cout << "Nomor Genap : ";
    for (int i = 0; i < genap_count; i++) {
        cout << nomor_genap[i];
        if (i < genap_count - 1) {
            cout << ", ";
        }
    }
    cout << "," << endl;

    cout << "Nomor Ganjil : ";
    for (int i = 0; i < ganjil_count; i++) {
        cout << nomor_ganjil[i];
        if (i < ganjil_count - 1) {
            cout << ", ";
        }
    }
    cout << "," << endl;

    return 0;
}
