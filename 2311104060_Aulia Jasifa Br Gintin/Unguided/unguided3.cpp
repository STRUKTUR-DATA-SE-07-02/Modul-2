#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

// Fungsi untuk mencari nilai maksimum
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Fungsi untuk mencari nilai minimum
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Fungsi untuk menghitung nilai rata-rata
double findAverage(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int size;
    cout << "Masukkan ukuran array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Masukkan " << size << " elemen array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Cari nilai Maksimum" << endl;
        cout << "2. Cari nilai Minimum" << endl;
        cout << "3. Hitung nilai Rata-rata" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Nilai Maksimum: " << findMax(arr, size) << endl;
                break;
            case 2:
                cout << "Nilai Minimum: " << findMin(arr, size) << endl;
                break;
            case 3:
                cout << "Nilai Rata-rata: " << fixed << setprecision(2) << findAverage(arr, size) << endl;
                break;
            case 4:
                cout << "Terima kasih, program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (choice != 4);

    delete[] arr;  // Membersihkan memori
    return 0;
}