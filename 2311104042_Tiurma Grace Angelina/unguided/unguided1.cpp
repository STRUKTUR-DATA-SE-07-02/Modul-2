#include <iostream>
#include <conio.h> 

using namespace std;

int main() {
    int n, input;
    int dataArray[100], evenNumbers[100], oddNumbers[100];
    int evenCount = 0, oddCount = 0;


    cout << "Masukkan jumlah data: ";
    cin >> n;

    cout << "Masukkan " << n << " angka:\n";
    for (int i = 0; i < n; i++) {
        cin >> input;
        dataArray[i] = input;

        if (input % 2 == 0) {
            evenNumbers[evenCount++] = input;
        } else {
            oddNumbers[oddCount++] = input;
        }
    }

    cout << "Data Array   : ";
    for (int i = 0; i < n; i++) {
        cout << dataArray[i] << " ";
    }
    cout << endl;

    cout << "Nomor Genap  : ";
    for (int i = 0; i < evenCount; i++) {
        cout << evenNumbers[i];
        if (i != evenCount - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    cout << "Nomor Ganjil : ";
    for (int i = 0; i < oddCount; i++) {
        cout << oddNumbers[i];
        if (i != oddCount - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    getch();

    return 0;
}
