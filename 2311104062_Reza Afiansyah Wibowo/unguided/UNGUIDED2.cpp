#include <iostream>
#include <vector>

int main() {
    int x, y, z;

    std::cout << "Masukkan ukuran dimensi pertama: ";
    std::cin >> x;
    std::cout << "Masukkan ukuran dimensi kedua: ";
    std::cin >> y;
    std::cout << "Masukkan ukuran dimensi ketiga: ";
    std::cin >> z;

    std::vector<std::vector<std::vector<int>>> array_3d(x, std::vector<std::vector<int>>(y, std::vector<int>(z)));

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                std::cout << "Masukkan nilai untuk posisi [" << i << "][" << j << "][" << k << "]: ";
                std::cin >> array_3d[i][j][k];
            }
        }
    }

    std::cout << "\nArray 3D yang diinputkan:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                std::cout << array_3d[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
