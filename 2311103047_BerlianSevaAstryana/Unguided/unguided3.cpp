#include <iostream>

using namespace std;

int main() {
    int n, pilihan;
    float nilai[100], max, min, sum = 0;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    cout << "Pilih :" << endl;
    cout << "1. Cari nilai maksimum" << endl;
    cout << "2. Cari nilai minimum" << endl;
    cout << "3. Cari nilai rata-rata" << endl;
    cout << "4. Keluar" << endl;
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            max = nilai[0];
            for (int i = 1; i < n; i++) {
                if (nilai[i] > max) {
                    max = nilai[i];
                }
            }
            cout << "Nilai maksimum adalah: " << max << endl;
            break;
        case 2:
            min = nilai[0];
            for (int i = 1; i < n; i++) {
                if (nilai[i] < min) {
                    min = nilai[i];
                }
            }
            cout << "Nilai minimum adalah: " << min << endl;
            break;
        case 3:
            for (int i = 0; i < n; i++) {
                sum += nilai[i];
            }
            cout << "Nilai rata-rata adalah: " << sum / n << endl;
            break;
        case 4:
            cout << "Terima kasih" << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}