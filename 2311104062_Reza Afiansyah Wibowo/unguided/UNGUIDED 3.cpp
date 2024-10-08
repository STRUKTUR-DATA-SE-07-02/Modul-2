#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <numeric>

int main() {
    std::string input;
    std::vector<double> array;

    std::cout << "Masukkan elemen array (pisahkan dengan spasi): ";
    std::getline(std::cin, input);

    std::istringstream iss(input);
    double num;
    while (iss >> num) {
        array.push_back(num);
    }

    char choice;
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Cari nilai Maksimum\n";
        std::cout << "2. Cari nilai Minimum\n";
        std::cout << "3. Hitung Nilai rata-rata\n";
        std::cout << "4. Keluar\n";
        std::cout << "Pilih menu (1-4): ";
        std::cin >> choice;

        switch (choice) {
            case '1':
                std::cout << "Nilai Maksimum: " << *std::max_element(array.begin(), array.end()) << std::endl;
                break;
            case '2':
                std::cout << "Nilai Minimum: " << *std::min_element(array.begin(), array.end()) << std::endl;
                break;
            case '3':
                {
                    double sum = std::accumulate(array.begin(), array.end(), 0.0);
                    double avg = sum / array.size();
                    std::cout << "Nilai rata-rata: " << avg << std::endl;
                }
                break;
            case '4':
                std::cout << "Terima kasih telah menggunakan program ini.\n";
                break;
            default:
                std::cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (choice != '4');

    return 0;
}
