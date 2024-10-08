#include <iostream>
#include <vector>

int main() {
    int n;

    // Input ukuran array
    std::cout << "Masukkan jumlah elemen array: ";
    std::cin >> n;

    std::vector<int> arr(n); // Membuat vector untuk menyimpan data

    // Input elemen array
    std::cout << "Masukkan " << n << " elemen array:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Elemen [" << i + 1 << "]: ";
        std::cin >> arr[i];
    }

    // Mencari nilai maksimum, minimum, dan rata-rata
    int max = arr[0];
    int min = arr[0];
    double sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
        sum += arr[i];
    }

    double average = sum / n;

    // Menampilkan hasil
    std::cout << "Nilai Maksimum: " << max << std::endl;
    std::cout << "Nilai Minimum: " << min << std::endl;
    std::cout << "Nilai Rata-Rata: " << average << std::endl;

    return 0;
}