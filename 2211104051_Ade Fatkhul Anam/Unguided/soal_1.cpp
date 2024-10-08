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
