// Array

// Array satu Dimensi
int nilai[10] = {1, 2, 3, 4, 5}; // Array 1D
// Array Dua Dimensi
int data_nilai[4][3]; // Array 2D
// Array Berdimensi Banyak
int data_rumit[4][6][6]; // Array banyak dimensi

// POINTER
int x, y;
int *px;
x = 87;
px = &x;
y = *px;
cout << "Alamat x = " << &x << endl;
cout << "Isi px = " << px << endl;
cout << "Isi x = " << x << endl;
cout << "Nilai yang ditunjuk px = " << *px << endl;
cout << "Nilai y = " << y << endl;

// Fungsi
int penjumlahan(int a, int b){
return a + b;
}
void greet(string name) {
cout << "Hello, " << name << "!" << endl;
}
int main() {
int hasil = penjumlahan(5, 3);
cout << "hasil " << hasil << endl;
greet("alice");

// Prosedur
#include <iostream>
#include <stdlib.h> // untuk system("cls")
using namespace std;
/* prototype fungsi */
void tulis(int x);
int main() {
system("cls"); // menggunakan huruf kecil
int jum;
cout << "Jumlah baris kata: ";
cin >> jum;
tulis(jum);
cin.get(); // menunggu input agar konsol tidak langsung
tertutup
cin.get(); // digunakan dua kali karena cin.get() menangkap
enter sebelumnya
return 0;
}
/* badan prosedur */
void tulis(int x) {
for (int i = 0; i < x; i++) {
cout << "Baris ke-" << i + 1 << endl;
}
}
