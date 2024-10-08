#include <iostream>
#include <limits.h> // Untuk INT_MAX dan INT_MIN

using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Inisialisasi nilai maksimum dan minimum
    int maks = INT_MIN;
    int min = INT_MAX;
    int total = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > maks) {
            maks = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
        total += arr[i];
    }

    float rata_rata = (float)total / n;

    cout << "Nilai Maksimum: " << maks << endl;
    cout << "Nilai Minimum: " << min << endl;
    cout << "Nilai Rata-rata: " << rata_rata << endl;

    return 0;
}