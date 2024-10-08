#include <iostream>

int main() {
	int dimensi1;
	int dimensi2;
	int dimensi3;

	std::cout << "Masukkan ukuran dimensi pertama: ";
	std::cin >> dimensi1;

	std::cout << "Masukkan ukuran dimensi kedua: ";
	std::cin >> dimensi2;

	std::cout << "Masukkan ukuran dimensi ketiga: ";
	std::cin >> dimensi3;

	int arr[dimensi1][dimensi2][dimensi3];

	// Masukkan elemen-elemen larik
	std::cout << "Masukkan elemen-elemen: " << std::endl;
	for (int i = 0; i < dimensi1; i = i + 1) {
		for (int o = 0; o < dimensi2; o = o + 1) {
			for (int p = 0; p < dimensi3; p = p + 1) {
				std::cout << "[" << i << "][" << o << "][" << p << "]: ";
				std::cin >> arr[i][o][p];
			}
		}
	}

	// Tampilkan larik
	std::cout << "Tampilan" << std::endl;
	for (int i = 0; i < dimensi1; i = i + 1) {
		for (int o = 0; o < dimensi2; o = o + 1) {
			for (int p = 0; p < dimensi3; p = p + 1) {
				std::cout << arr[i][o][p] << " ";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}

	return 0;
}
