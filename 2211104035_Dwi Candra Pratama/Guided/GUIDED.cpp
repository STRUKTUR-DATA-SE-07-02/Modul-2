#include <iostream>
using namespace std;

int main() {
    // ARRAY 1D
    int nilai[10] = {1, 2, 3, 4, 5};

    // Pemanggilan Array menggunakan index
    cout << nilai[0] << endl;
    cout << nilai[1] << endl;
    cout << nilai[2] << endl;
    cout << nilai[3] << endl;
    cout << nilai[4] << endl;

    // Pemanggilan array menggunakan Looping
    for (int i = 0; i < 5; i++) {
        cout << nilai[i] << endl;
    }

    return 0;
}

    // Array 2 dimensi dan Multi-dimensional

int main() {
    // Array 2D
    int data_nilai[3][4] = {{1, 2, 3, 4}, {4, 6, 7, 8}, {9, 10, 11, 12}};

    // Nested loops to print the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << data_nilai[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


Pointer
int main() {
    int x, y;
    int *px;

    x = 87;
    px = &x;
    y = *px;

    cout << "Alamat x: " << &x << endl;
    cout << "Isi px (alamat x): " << px << endl;
    cout << "Isi x: " << x << endl;
    cout << "Nilai yang ditunjuk px (nilai x): " << *px << endl;
    cout << "Nilai y: " << y << endl;

    return 0;
}