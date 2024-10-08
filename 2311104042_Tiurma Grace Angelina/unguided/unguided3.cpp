#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int n, pilihan, arr[100], maks, min, total = 0;
    double rata;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i == 0) {
            maks = min = arr[i];
        }
        if (arr[i] > maks) maks = arr[i];
        if (arr[i] < min) min = arr[i];
        total += arr[i];
    }
    rata = (double)total / n;

    do {
        cout << "\nMenu:\n1. Maksimum\n2. Minimum\n3. Rata-rata\n4. Keluar\nPilih: ";
        cin >> pilihan;
        switch (pilihan) {
            case 1: cout << "Nilai Maksimum: " << maks << endl; break;
            case 2: cout << "Nilai Minimum: " << min << endl; break;
            case 3: cout << "Nilai Rata-rata: " << rata << endl; break;
        }
        getch(); 
    } while (pilihan != 4);

    return 0;
}

