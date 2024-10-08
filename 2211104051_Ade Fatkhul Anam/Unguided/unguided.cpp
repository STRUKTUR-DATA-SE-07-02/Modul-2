// 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user! 

#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
const int n = 10; // Panjang array
int dataArray[n];
// Meminta input dari pengguna untuk mengisi array
cout << "Masukkan " << n << " angka: ";
for (int i = 0; i < n; i++) {
cin >> dataArray[i];
}
// Menampilkan seluruh elemen array
cout << "Data Array : ";
for (int i = 0; i < n; i++) {
cout << dataArray[i] << " ";
}
cout << endl;
// Menampilkan elemen genap
cout << "Nomor Genap : ";
for (int i = 0; i < n; i++) {
if (dataArray[i] % 2 == 0) {
cout << dataArray[i] << ", ";
}
}
cout << endl;
// Menampilkan elemen ganjil
cout << "Nomor Ganjil : ";
for (int i = 0; i < n; i++) {
if (dataArray[i] % 2 != 0) {
cout << dataArray[i] << ", ";
}
}
cout << endl;
return 0;
}

// 2. Buatlah program Input array tiga dimensi tetapi jumlah atau ukuran elemennya diinputkan oleh user!
#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
int x, y, z;
// Meminta ukuran dimensi array dari pengguna
cout << "Masukkan ukuran dimensi pertama: ";
cin >> x;
cout << "Masukkan ukuran dimensi kedua: ";
cin >> y;
cout << "Masukkan ukuran dimensi ketiga: ";
cin >> z;
// Deklarasi array tiga dimensi dengan ukuran yang ditentukan
oleh pengguna
int array3D[x][y][z];
// Input elemen-elemen array
cout << "Masukkan elemen array:\n";
for (int i = 0; i < x; i++) {
for (int j = 0; j < y; j++) {
for (int k = 0; k < z; k++) {
cout << "Elemen [" << i << "][" << j << "][" << k <<
"]: ";
cin >> array3D[i][j][k];
}
}
}
// Menampilkan elemen-elemen array
cout << "\nElemen-elemen array tiga dimensi:\n";
for (int i = 0; i < x; i++) {
for (int j = 0; j < y; j++) {
for (int k = 0; k < z; k++) {
cout << "Elemen [" << i << "][" << j << "][" << k <<
"] = " << array3D[i][j][k] << endl;
}
}
}
return 0;
}

// 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!

#include <iostream>
#include <stdlib.h>
using namespace std;
// Fungsi untuk mencari nilai maksimum
int cariMaksimum(int array[], int n) {
int maks = array[0];
for (int i = 1; i < n; i++) {
if (array[i] > maks) {
maks = array[i];
}
}
return maks;
}
// Fungsi untuk mencari nilai minimum
int cariMinimum(int array[], int n) {
int min = array[0];
for (int i = 1; i < n; i++) {
if (array[i] < min) {
min = array[i];
}
}
return min;
}
// Fungsi untuk mencari nilai rata-rata
float cariRataRata(int array[], int n) {
int total = 0;
for (int i = 0; i < n; i++) {
total += array[i];
}
return (float)total / n;
}
int main() {
int n;
// Meminta jumlah elemen array
cout << "Masukkan jumlah elemen array: ";
cin >> n;
int array[n];
// Meminta input dari user untuk mengisi array
cout << "Masukkan elemen-elemen array: ";
for (int i = 0; i < n; i++) {
cin >> array[i];
}
int pilihan;
do {
// Menampilkan menu
cout << "\nMenu:\n";
cout << "1. Cari Nilai Maksimum\n";
cout << "2. Cari Nilai Minimum\n";
cout << "3. Cari Nilai Rata-rata\n";
cout << "4. Keluar\n";
cout << "Pilih menu (1-4): ";
cin >> pilihan;
// Menjalankan pilihan user
switch (pilihan) {
case 1:
cout << "Nilai maksimum: " << cariMaksimum(array, n) <<
endl;
break;
case 2:
cout << "Nilai minimum: " << cariMinimum(array, n) <<
endl;
break;
case 3:
cout << "Nilai rata-rata: " << cariRataRata(array, n) <<
endl;
break;
case 4:
cout << "Keluar dari program." << endl;
break;
default:
cout << "Pilihan tidak valid. Silakan coba lagi." <<
endl;
}
} while (pilihan != 4);
return 0;
}
