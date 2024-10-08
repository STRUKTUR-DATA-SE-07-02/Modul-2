#include <iostream>
using namespace std;

int main() {
    int n, pilihan;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\nMenu:\n";
        cout << "1. Cari nilai maksimum\n";
        cout << "2. Cari nilai minimum\n";
        cout << "3. Cari nilai rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int max = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max) {
                        max = arr[i];
                    }
                }
                cout << "Nilai maksimum: " << max << endl;
                break;
            }
            case 2: {
                int min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                cout << "Nilai minimum: " << min << endl;
                break;
            }
            case 3: {
                int sum = 0;
                for (int i = 0; i < n; i++) {
                    sum += arr[i];
                }
                double rata_rata = (double)sum / n;
                cout << "Nilai rata-rata: " << rata_rata << endl;
                break;
            }
            case 4:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 4);

    return 0;
}
