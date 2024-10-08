#include <iostream>
#include <sstream>

void cetak_arr(int arr[], int ukuran_arr) {
	for (int _x = 0; _x < ukuran_arr; _x = _x + 1)
	{
		std::cout << arr[_x] << " ";
	}
}

int maksimum(int arr[], int ukuran_arr) {
	int pemenang = arr[0];
	for (int _x = 0; _x < ukuran_arr; _x = _x + 1)
	{
		if (arr[_x] > pemenang)
		{
			pemenang = arr[_x];
		}
	}

	return pemenang;
}

int minimum(int arr[], int ukuran_arr) {
	int pemenang = arr[0];
	for (int _x = 0; _x < ukuran_arr; _x = _x + 1)
	{
		if (arr[_x] < pemenang)
		{
			pemenang = arr[_x];
		}
	}

	return pemenang;
}

double rata_rata(int arr[], int ukuran_arr) {
	int jumlah_tambah = 0;
	for (int _x = 0; _x < ukuran_arr; _x = _x + 1)
	{
		jumlah_tambah = jumlah_tambah + arr[_x];
	}

	return (double) (1.0 * jumlah_tambah / ukuran_arr);
}

int main() {
	int ukuran_arr_pengguna;
	std::string masukan_mentah;

	int pilihan;
	std::cout << "(1) Nilai maksimum" << std::endl;
	std::cout << "(2) Nilai minimum" << std::endl;
	std::cout << "(3) Rerata" << std::endl;
	std::cout << "Pilih: ";
	std::cin >> pilihan;

	std::cin.ignore();

	// Kita menggunakan teknik proses masukan dari unguided 1
	std::cout << "Masukkan jumlah elemen: ";
	std::cin >> ukuran_arr_pengguna;

	std::cin.ignore();

	std::cout << "Masukkan deretan bilangan sesuai jumlah, pisah dengan spasi: ";
	std::getline(std::cin, masukan_mentah);

	std::stringstream deretan_bufer(masukan_mentah);
	std::string bufer_str;
	int index_terkini = 0;

	int *data_masukan = new int[ukuran_arr_pengguna];
	while (deretan_bufer >> bufer_str) {
		data_masukan[index_terkini] = std::stoi(bufer_str);
		index_terkini = index_terkini + 1;
	}

	switch (pilihan) {
	case 1:
		std::cout << maksimum(data_masukan, ukuran_arr_pengguna) << '\n';
		break;
	case 2:
		std::cout << minimum(data_masukan, ukuran_arr_pengguna) << '\n';
		break;
	case 3:
		std::cout << rata_rata(data_masukan, ukuran_arr_pengguna) << '\n';
		break;
	default:
		std::cout << "Tidak valid!" << '\n';
		break;
	}

	delete[] data_masukan;

	return 0;
}
