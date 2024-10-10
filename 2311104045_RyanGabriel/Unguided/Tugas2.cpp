 #include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta input jumlah elemen array dari user
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int array[n];

    // Meminta input data array dari user
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    // Menampilkan Data Array
    cout << "Data Array : ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Menampilkan Nomor Genap
    cout << "Nomor Genap = ";
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            cout << array[i] << ", ";
        }
    }
    cout << endl;

    // Menampilkan Nomor Ganjil
    cout << "Nomor Ganjil = ";
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 != 0) {
            cout << array[i] << ", ";
        }
    }
    cout << endl;

    return 0;
}
// ---------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    // Input ukuran dimensi array
    cout << "Masukkan ukuran dimensi pertama (x): ";
    cin >> x;
    cout << "Masukkan ukuran dimensi kedua (y): ";
    cin >> y;
    cout << "Masukkan ukuran dimensi ketiga (z): ";
    cin >> z;

    // Deklarasi array 3 dimensi dengan ukuran yang diinputkan
    int array[x][y][z];

    // Input nilai untuk setiap elemen array
    cout << "Masukkan elemen array 3 dimensi: \n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Array[" << i << "][" << j << "][" << k << "] : ";
                cin >> array[i][j][k];
            }
        }
    }

    // Menampilkan array 3 dimensi
    cout << "\nIsi dari array 3 dimensi: \n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Array[" << i << "][" << j << "][" << k << "] = " << array[i][j][k] << endl;
            }
        }
    }

    return 0;
}
// ---------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta input jumlah elemen array dari user
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    // Mendeklarasikan array
    int array[n];

    // Meminta input data array dari user
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    // Menghitung nilai maksimum, minimum, dan rata-rata
    int max = array[0];
    int min = array[0];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        // Mencari maksimum
        if (array[i] > max) {
            max = array[i];
        }
        // Mencari minimum
        if (array[i] < min) {
            min = array[i];
        }
        // Menghitung jumlah untuk rata-rata
        sum += array[i];
    }

    // Menghitung rata-rata
    float average = static_cast<float>(sum) / n;

    // Menampilkan hasil
    cout << "Nilai Maksimum: " << max << endl;
    cout << "Nilai Minimum: " << min << endl;
    cout << "Nilai Rata-Rata: " << average << endl;

    return 0;
}