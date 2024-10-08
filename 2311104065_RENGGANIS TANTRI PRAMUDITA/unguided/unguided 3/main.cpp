#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int maks = arr[0], min = arr[0], total = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maks) maks = arr[i];
        if (arr[i] < min) min = arr[i];
        total += arr[i];
    }

    double rataRata = (double)total / n;

    cout << "\nNilai Maksimum: " << maks << endl;
    cout << "Nilai Minimum: " << min << endl;
    cout << "Nilai Rata-rata: " << rataRata << endl;

    return 0;
}
