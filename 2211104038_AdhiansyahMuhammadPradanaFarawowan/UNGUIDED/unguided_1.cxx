#include <iostream>

void cetakArr(int arr[], int sizeOfArr) {
	for (int _x = 0; _x < sizeOfArr; _x = _x + 1) {
		std::cout << arr[_x] << " ";
	}
}

int main() {
	int _ukuran = 10;
	int dataArray[_ukuran] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int arrGenap[5] = {};
	int arrGanjil[5] = {};

	int current = 0;
	int currentGenap = 0;
	int currentGanjil = 0;
	while (current < _ukuran) {
		if (dataArray[current] % 2 == 0) {
			arrGenap[currentGenap] = dataArray[current];
			currentGenap = currentGenap + 1;
		} else {
			arrGanjil[currentGanjil] = dataArray[current];
			currentGanjil = currentGanjil + 1;
		}

		current = current + 1;
	}

	std::cout << "Data array: ";
	cetakArr(dataArray, _ukuran);
	std::cout << '\n';

	std::cout << "Bilangan genap: ";
	cetakArr(arrGenap, 5);
	std::cout << '\n';

	std::cout << "Bilangan ganjil: ";
	cetakArr(arrGanjil, 5);
	std::cout << '\n';

	return 0;
}
