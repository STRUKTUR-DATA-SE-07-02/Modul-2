#include <iostream>
#include <sstream>
#include <cmath>
#include <set>

void cetak_arr(int arr[], int sizeOfArr) {
	for (int _x = 0; _x < sizeOfArr; _x = _x + 1) {
		std::cout << arr[_x] << " ";
	}
}

int main() {
	// Untuk menghindari duplikasi, kita akan menggunakan himpunan (std::unordered_set)
	std::set<int> data_array_masukan;
	std::string masukan_pengguna;

	std::cout << "Masukkan data array, pisah dengan spasi: ";

	// Baru nyadar cin hanya baca sampai spasi aja, jadi harus pakai getline
	std::getline(std::cin, masukan_pengguna);

	std::string ruang_transit_masukan;
	std::stringstream deretan_string(masukan_pengguna);


	// Token dari deretan (dengan spasi) akan masuk ke transit
	// Lalu dikonversi tipe datanya ke bilangan dengan stoi
	while (deretan_string >> ruang_transit_masukan) {
		data_array_masukan.insert(std::stoi(ruang_transit_masukan));
	}

	// Ketika ukuran data sudah diketahui, tentukan ukuran untuk
	// data kelompok genap atau ganjil
	int ukuran_masukan = data_array_masukan.size();
	int ukuran_mungkin_arr = std::ceil(static_cast<double>(ukuran_masukan / 2));

	// Kita perlu mendeklarasikan larik yang ukurannya baru diketahui
	// saat program berjalan dengan membuatnya dinamis
	int* arr_genap = new int[ukuran_mungkin_arr];
	int* arr_ganjil = new int[ukuran_mungkin_arr - 1];

	int cur_genap = 0;
	int cur_ganjil = 0;

	// Jadi uhhh set gak bisa diakses nilainya pakai indeks, harus pakai iterator
	// elemen_set memiliki tipe data khusus, yaitu iterator set integer
	int cur_set_khusus = 0;
	std::set<int>::iterator elemen_set = data_array_masukan.begin();
	while (cur_set_khusus < ukuran_masukan) {
		if (*elemen_set % 2 == 0) {
			arr_genap[cur_genap] = *elemen_set;
			cur_genap = cur_genap + 1;
		} else {
			arr_ganjil[cur_ganjil] = *elemen_set;
			cur_ganjil = cur_ganjil + 1;
		}
		elemen_set++;
		cur_set_khusus = cur_set_khusus + 1;
	}


	std::cout << "Bilangan genap: ";
	cetak_arr(arr_genap, ukuran_mungkin_arr);
	std::cout << '\n';

	std::cout << "Bilangan ganjil: ";
	cetak_arr(arr_ganjil, ukuran_mungkin_arr);
	std::cout << '\n';

	delete[] arr_genap;
	delete[] arr_ganjil;

	return 0;
}
