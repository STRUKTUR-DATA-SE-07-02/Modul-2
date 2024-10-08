#include <iostream>
#include <conio.h>
#include <string> // Include this to use the string type

using namespace std;

// Function to perform addition
int penjumlahan(int a, int b) {
    return a + b;
}

// Function to greet a user
void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    // Call the addition function
    int hasil = penjumlahan(5, 3);
    cout << "Hasil: " << hasil << endl;

    // Call the greeting function
    greet("Haza");

    // 1D array initialization
    int nilai[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << "Nilai[" << i << "] = " << nilai[i] << endl;
    }

    // 2D array initialization
    int nilai2D[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Displaying the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << nilai2D[i][j] << " ";
        }
        cout << endl;  // Print a new line after each row
    }

    // Pointer demonstration
    int x, y;
    int *px;  // Declare px as a pointer to int
    x = 87;
    px = &x;  // Assign the address of x to px
    y = *px;  // Assign the value pointed by px to y

    // Displaying pointer information
    cout << "Alamat x = " << &x << endl;
    cout << "Isi px = " << px << endl;
    cout << "Isi x = " << x << endl;
    cout << "Nilai yang ditunjuk px = " << *px << endl;
    cout << "Nilai y = " << y << endl;

    return 0;  // Return 0 to indicate successful execution
}
