#include <iostream>

int main() {
	int dimensi1;
	int dimensi2;
	int dimensi3;

	// Input ukuran array 3D dari user
	std::cout << "Masukkan ukuran dimensi pertama: ";
	std::cin >> dimensi1;

	std::cout << "Masukkan ukuran dimensi kedua: ";
	std::cin >> dimensi2;

	std::cout << "Masukkan ukuran dimensi ketiga: ";
	std::cin >> dimensi3;

	int arr[dimensi1][dimensi2][dimensi3];

	// Masukkan elemen-elemen arr
	std::cout << "Masukkan elemen-elemen: " << std::endl;
	for (int i = 0; i < dimensi1; i = i + 1) {
		for (int j = 0; j < dimensi2; j = j + 1) {
			for (int k = 0; k < dimensi3; k = k + 1) {
				std::cout << "[" << i << "][" << j << "][" << k << "]: ";
				std::cin >> arr[i][j][k];
			}
		}
	}

	// Tampilkan larik
	std::cout << "Tampilan" << std::endl;
	for (int i = 0; i < dimensi1; i = i + 1) {
		for (int j = 0; j < dimensi2; j = j + 1) {
			for (int k = 0; k < dimensi3; k = k + 1) {
				std::cout << arr[i][j][k] << " ";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}

	return 0;
}
