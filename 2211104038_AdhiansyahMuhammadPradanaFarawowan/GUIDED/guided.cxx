#include <iostream>

void arrayExample() {
	// Larik dalam aksi
	int _ukuran_nilai = 5;
	int nilai[_ukuran_nilai] = {30, 31, 32, 33, 34};

	// Mencetak larik dalam segitiga seperti ini:
	// 
	// 34 33 32 31 30 
	// 34 33 32 31
	// 34 33 32
	// 34 33 
	// 34

	for (int i = 0; i < _ukuran_nilai; i = i + 1) {
		for (int j = _ukuran_nilai - 1; j > i - 1; j = j - 1) {
			std::cout << nilai[j] << " ";
		}

		std::cout << std::endl;
	}
}

void pointerExample() {
	// Pointer dalam aksi
	std::string dataTerkini = "3 Oktober 2024";

	// Pointer memiliki tipe datanya sendiri, ini bisa dilihat
	// dengan adanya asterisk (*)
	std::string *alamat;

	// Kita "tunjuk" variabel ini ke alamat memori dataTerkini
	alamat = &dataTerkini;

	// Jika kita kita menggunakan asterisk dalam penugasan, 
	// ia akan mengembalikan nilai dari alamat yang ia tunjuk
	std::cout << "Nilai variabel yang alamatnya ditunjuk: " << *alamat << std::endl;
	std::cout << "dataTerkini: " << dataTerkini << std::endl;

	// Bagaimana kalau ktia ubah nilainya?
	*alamat = "32 Desember 1980";
	std::cout << "Nilai baru variabel yang alamatnya ditunjuk: " << *alamat << std::endl;
	std::cout << "dataTerkini: " << dataTerkini << std::endl;
}

int funExample(int x, int y) {
	// Fungsi yang melakukan perkalian dengan perulangan
	int hasil;
	while (y > 0) {
		hasil += x;
		y = y - 1;
	}

	return hasil;
}

int main() {
	std::cout << funExample(3, 4) << std::endl;
	return 0;
}