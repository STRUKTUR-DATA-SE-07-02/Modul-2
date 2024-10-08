#include <iostream>
using namespace std;

//untuk mencari nilai maksimum
int cariMaksimum(int arr[], int n) {
    int maksimum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maksimum) {
            maksimum = arr[i];
        }
    }
    return maksimum;
}

//untuk mencari nilai minimum
int cariMinimum(int arr[], int n) {
    int minimum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    return minimum;
}

//untuk mencari nilai rata-rata
double cariRataRata(int arr[], int n) {
    int jumlah = 0;
    for (int i = 0; i < n; i++) {
        jumlah += arr[i];
    }
    return (double)jumlah / n;
}

int main() {
    int n, pilihan;

    //input jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    //input elemen array
    int arr[n];
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\nMenu Operasi Array:\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Cari Nilai Rata-Rata\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Nilai Maksimum: " << cariMaksimum(arr, n) << endl;
                break;
            case 2:
                cout << "Nilai Minimum: " << cariMinimum(arr, n) << endl;
                break;
            case 3:
                cout << "Nilai Rata-Rata: " << cariRataRata(arr, n) << endl;
                break;
            case 4:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid, coba lagi.\n";
                break;
        }

    } while (pilihan != 4);

    return 0;
}
