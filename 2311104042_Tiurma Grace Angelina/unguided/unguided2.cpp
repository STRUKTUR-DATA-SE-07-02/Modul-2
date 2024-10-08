#include <iostream>
#include <conio.h> 
using namespace std;

int main() {
    int x, y, z;

    cout << "Masukkan ukuran dimensi pertama: ";
    cin >> x;
    cout << "Masukkan ukuran dimensi kedua: ";
    cin >> y;
    cout << "Masukkan ukuran dimensi ketiga: ";
    cin >> z;

    int array[x][y][z];

    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Array[" << i << "][" << j << "][" << k << "]: ";
                cin >> array[i][j][k];
            }
        }
    }

    cout << "\nIsi array 3 dimensi:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << array[i][j][k] << " ";
            }
            cout << endl; 
        }
        cout << endl; 
    }

    getch(); 
    return 0;
}



