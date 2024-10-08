#include <iostream>

int main() {
    int x, y, z;

    // Input ukuran array dari pengguna
    std::cout << "Masukkan ukuran dimensi pertama (x): ";
    std::cin >> x;
    std::cout << "Masukkan ukuran dimensi kedua (y): ";
    std::cin >> y;
    std::cout << "Masukkan ukuran dimensi ketiga (z): ";
    std::cin >> z;

    // Membuat array tiga dimensi statis
    int arr[x][y][z];

    // Input elemen array
    std::cout << "Masukkan elemen array tiga dimensi:" << std::endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                std::cout << "Elemen arr[" << i << "][" << j << "][" << k << "]: ";
                std::cin >> arr[i][j][k];
            }
        }
    }

    // Menampilkan elemen array
    std::cout << "Elemen array tiga dimensi:" << std::endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                std::cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << std::endl;
            }
        }
    }

    return 0;
}