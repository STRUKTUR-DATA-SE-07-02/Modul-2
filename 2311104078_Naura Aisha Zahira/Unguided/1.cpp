#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    // Input dari user
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    vector<int> data(n);
    vector<int> genap;
    vector<int> ganjil;

    // Meminta input dari user untuk setiap elemen array
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; ++i) {
        cin >> data[i];
        // Memisahkan bilangan genap dan ganjil
        if (data[i] % 2 == 0) {
            genap.push_back(data[i]);
        } else {
            ganjil.push_back(data[i]);
        }
    }

    // Menampilkan Data Array
    cout << "Data Array : ";
    for (int i = 0; i < n; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    // Menampilkan Nomor Genap
    cout << "Nomor Genap : ";
    for (int i = 0; i < genap.size(); ++i) {
        cout << genap[i];
        if (i != genap.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    // Menampilkan Nomor Ganjil
    cout << "Nomor Ganjil : ";
    for (int i = 0; i < ganjil.size(); ++i) {
        cout << ganjil[i];
        if (i != ganjil.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
