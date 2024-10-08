#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> dataArray;
    vector<int> evenNumbers;
    vector<int> oddNumbers;
    int num;
    
    cout << "Masukkan angka-angka (0 untuk mengakhiri input):\n";
    
    // Input data dari user
    while (true) {
        cin >> num;
        if (num == 0) break;
        dataArray.push_back(num);
    }
    
    // Memisahkan nomor genap dan ganjil
    for (int i = 0; i < dataArray.size(); i++) {
        if (dataArray[i] % 2 == 0) {
            evenNumbers.push_back(dataArray[i]);
        } else {
            oddNumbers.push_back(dataArray[i]);
        }
    }
    
    // Menampilkan output
    cout << "Data Array : ";
    for (int i = 0; i < dataArray.size(); i++) {
        cout << dataArray[i] << " ";
    }
    cout << endl;
    
    cout << "Nomor Genap : ";
    for (int i = 0; i < evenNumbers.size(); i++) {
        cout << evenNumbers[i];
        if (i < evenNumbers.size() - 1) cout << ", ";
    }
    cout << "," << endl;
    
    cout << "Nomor Ganjil : ";
    for (int i = 0; i < oddNumbers.size(); i++) {
        cout << oddNumbers[i];
        if (i < oddNumbers.size() - 1) cout << ", ";
    }
    cout << "," << endl;
    
    return 0;
}