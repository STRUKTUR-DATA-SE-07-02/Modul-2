#include <iostream>
using namespace std;

int main() {
    int n, pilihan;
    float sum = 0;

    // Input jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    // Input elemen array
    cout << "Masukkan elemen array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Menu pilihan
    do {
        cout << "\nMenu Pilihan:" << endl;
        cout << "1. Cari Nilai Maksimum" << endl;
        cout << "2. Cari Nilai Minimum" << endl;
        cout << "3. Hitung Nilai Rata-rata" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch(pilihan) {
            case 1: {
                int max = arr[0];
                for(int i = 1; i < n; i++) {
                    if(arr[i] > max) {
                        max = arr[i];
                    }
                }
                cout << "Nilai Maksimum: " << max << endl;
                break;
            }
            case 2: {
                int min = arr[0];
                for(int i = 1; i < n; i++) {
                    if(arr[i] < min) {
                        min = arr[i];
                    }
                }
                cout << "Nilai Minimum: " << min << endl;
                break;
            }
            case 3: {
                float rata_rata = sum / n;
                cout << "Nilai Rata-rata: " << rata_rata << endl;
                break;
            }
            case 4:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while(pilihan != 4);

    return 0;
}
