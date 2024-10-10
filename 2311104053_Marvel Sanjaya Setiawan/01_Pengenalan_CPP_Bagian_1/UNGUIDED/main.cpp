#include <iostream>
#include <string>

using namespace std;

/*
int main() {
    float bil1, bil2;
    float hasil_jumlah, hasil_kurang, hasil_kali, hasil_bagi;

    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;


    hasil_jumlah = bil1 + bil2;
    hasil_kurang = bil1 - bil2;
    hasil_kali = bil1 * bil2;

    if (bil2 != 0) {
        hasil_bagi = bil1 / bil2;
    } else {
        cout << "Tidak dapat membagi dengan nol." << endl;
    }

    cout << "Hasil penjumlahan: " << hasil_jumlah << endl;
    cout << "Hasil pengurangan: " << hasil_kurang << endl;
    cout << "Hasil perkalian: " << hasil_kali << endl;
    if (bil2 != 0) {
        cout << "Hasil pembagian: " << hasil_bagi << endl;
    }

    return 0;
}
*/

    /*
    string angkaKeTulisan(int angka) {
    string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    string belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas",
                        "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh",
                        "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

    if (angka == 100) {
        return "seratus";
    } else if (angka < 10) {
        return satuan[angka];
    } else if (angka < 20) {
        return belasan[angka - 10];
    } else {
        if (angka % 10 == 0) {
            return puluhan[angka / 10];
        } else {
            return puluhan[angka / 10] + " " + satuan[angka % 10];
        }
    }
}

    int main() {
    int angka;

    cout << "Masukkan angka (0 - 100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Input tidak valid! Masukkan angka antara 0 hingga 100." << endl;
    } else {
        cout << angka << " = " << angkaKeTulisan(angka) << endl;
    }

    return 0;
}
*/

int main() {
    int n;

    cout << "input: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << " * ";

        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << "*" << endl;

    return 0;
}
