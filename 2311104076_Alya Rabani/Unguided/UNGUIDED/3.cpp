#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double cari_maksimum(vector<int> arr) {
    return *max_element(arr.begin(), arr.end());
}

double cari_minimum(vector<int> arr) {
    return *min_element(arr.begin(), arr.end());
}

double cari_rata_rata(vector<int> arr) {
    double sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    return sum / arr.size();
}

int main() {
    cout << "Program Menu" << endl;
    cout << "1. Cari Nilai Maksimum" << endl;
    cout << "2. Cari Nilai Minimum" << endl;
    cout << "3. Cari Nilai Rata-Rata" << endl;
    cout << "4. Keluar" << endl;

    while (true) {
        int pilihan;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        if (pilihan == 1) {
            vector<int> arr;
            int num;
            cout << "Masukkan array (pisahkan dengan spasi): ";
            while (cin >> num) {
                arr.push_back(num);
                if (cin.peek() == '\n') break;
            }
            cout << "Nilai Maksimum: " << cari_maksimum(arr) << endl;
        } else if (pilihan == 2) {
            vector<int> arr;
            int num;
            cout << "Masukkan array (pisahkan dengan spasi): ";
            while (cin >> num) {
                arr.push_back(num);
                if (cin.peek() == '\n') break;
            }
            cout << "Nilai Minimum: " << cari_minimum(arr) << endl;
        } else if (pilihan == 3) {
            vector<int> arr;
            int num;
            cout << "Masukkan array (pisahkan dengan spasi): ";
            while (cin >> num) {
                arr.push_back(num);
                if (cin.peek() == '\n') break;
            }
            cout << "Nilai Rata-Rata: " << cari_rata_rata(arr) << endl;
        } else if (pilihan == 4) {
            cout << "Keluar dari program" << endl;
            break;
        } else {
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    }

    return 0;
}