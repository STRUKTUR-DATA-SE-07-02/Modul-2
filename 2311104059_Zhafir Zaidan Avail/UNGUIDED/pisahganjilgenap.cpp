#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> angka;
    vector<int> genap;
    vector<int> ganjil;
    int input;

    cout << "Masukkan angka (akhiri dengan angka negatif): ";

    while (true) {
        cin >> input;
        if (input < 0) {
            break;
        }
        angka.push_back(input);
    }

    for (int num : angka) {
        if (num % 2 == 0) {
            genap.push_back(num);
        } else {
            ganjil.push_back(num);
        }
    }

    cout << "Data Array: ";
    for (int num : angka) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Nomor Genap: ";
    for (int num : genap) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Nomor Ganjil: ";
    for (int num : ganjil) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}