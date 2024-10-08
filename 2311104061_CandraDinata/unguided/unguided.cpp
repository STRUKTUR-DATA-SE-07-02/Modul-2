#include <iostream>
#include <vector>

int main() {
    const int size = 10; // Ukuran array
    std::vector<int> data(size); // Membuat vector untuk menyimpan data

    // Input data dari pengguna
    std::cout << "Masukkan " << size << " angka (pisahkan dengan spasi): ";
    for (int i = 0; i < size; i++) {
        std::cin >> data[i];
    }

    std::cout << "Data array: ";
    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Menyimpan angka genap dan ganjil
    std::vector<int> genap;
    std::vector<int> ganjil;

    // Memisahkan angka genap dan ganjil
    for (int num : data) {
        if (num % 2 == 0) {
            genap.push_back(num);
        } else {
            ganjil.push_back(num);
        }
    }

    // Menampilkan angka genap
    std::cout << "Nomor genap: ";
    for (int num : genap) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Menampilkan angka ganjil
    std::cout << "Nomor ganjil: ";
    for (int num : ganjil) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}