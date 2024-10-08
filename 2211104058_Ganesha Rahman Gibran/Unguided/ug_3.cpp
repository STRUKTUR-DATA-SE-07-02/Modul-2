#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int cariMaksimum(const vector<int>& arr) {
    int maksimum = numeric_limits<int>::min();
    for (int num : arr) {
        if (num > maksimum) {
            maksimum = num;
        }
    }
    return maksimum;
}

int cariMinimum(const vector<int>& arr) {
    int minimum = numeric_limits<int>::max();
    for (int num : arr) {
        if (num < minimum) {
            minimum = num;
        }
    }
    return minimum;
}

double hitungRataRata(const vector<int>& arr) {
    if (arr.empty()) return 0.0;
    
    double total = 0;
    for (int num : arr) {
        total += num;
    }
    return total / arr.size();
}

int main() {
    int n;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Masukkan " << n << " elemen array:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Elemen [" << i + 1 << "]: ";
        cin >> arr[i];
    }

    int pilihan;
    
    do {
        cout << "\nMenu:\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Hitung Rata-Rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Nilai Maksimum: " << cariMaksimum(arr) << endl;
                break;
            case 2:
                cout << "Nilai Minimum: " << cariMinimum(arr) << endl;
                break;
            case 3:
                cout << "Rata-Rata: " << hitungRataRata(arr) << endl;
                break;
            case 4:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi.\n";
                break;
        }
    } while (pilihan != 4);

    return 0;
}