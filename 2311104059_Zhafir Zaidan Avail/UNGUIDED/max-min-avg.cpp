#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> angka;
    int pilihan, nilai, jumlah = 0;
    double rata_rata;

    do {
        cout << "\nMenu:\n";
        cout << "1. Masukkan angka\n";
        cout << "2. Tampilkan nilai maksimum\n";
        cout << "3. Tampilkan nilai minimum\n";
        cout << "4. Hitung rata-rata\n";
        cout << "5. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan angka (masukkan angka negatif untuk berhenti): ";
                while (true) {
                    cin >> nilai;
                    if (nilai < 0) {
                        break;
                    }
                    angka.push_back(nilai);
                    jumlah += nilai;
                }
                break;
            case 2:
                if (angka.empty()) {
                    cout << "Array masih kosong.\n";
                } else {
                    int maks = angka[0];
                    for (int i = 1; i < angka.size(); i++) {
                        if (angka[i] > maks) {
                            maks = angka[i];
                        }
                    }
                    cout << "Nilai maksimum: " << maks << endl;
                }
                break;
            case 3:
                if (angka.empty()) {
                    cout << "Array masih kosong.\n";
                } else {
                    int min = angka[0];
                    for (int i = 1; i < angka.size(); i++) {
                        if (angka[i] < min) {
                            min = angka[i];
                        }
                    }
                    cout << "Nilai minimum: " << min << endl;
                }
                break;
            case 4:
                if (angka.empty()) {
                    cout << "Array masih kosong.\n";
                } else {
                    rata_rata = (double)jumlah / angka.size();
                    cout << "Rata-rata: " << rata_rata << endl;
                }
                break;
            case 5:
                cout << "Terima kasih!\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 5);

    return 0;
}