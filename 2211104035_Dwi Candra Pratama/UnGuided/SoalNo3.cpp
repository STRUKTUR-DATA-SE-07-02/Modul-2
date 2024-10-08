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

    // Inisialisasi nilai maksimum dan minimum
    int maks = arr[0];
    int min = arr[0];
    int total = 0;

    // Mencari nilai maksimum, minimum, dan rata-rata
    for (int i = 0; i < n; i++) {
        if (arr[i] > maks) {
            maks = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
        total += arr[i];
    }
    float rata = (float)total / n;

    // Output hasil
    cout << "Nilai Maksimum: " << maks << endl;
    cout << "Nilai Minimum: " << min << endl;
    cout << "Nilai Rata-rata: " << rata << endl;

    return 0;
}
