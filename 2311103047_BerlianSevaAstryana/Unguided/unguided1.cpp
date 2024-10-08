#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    vector<int> dataArray, evenNumbers, oddNumbers;
    string input;
    int number;

    cout << "Masukkan Angka: ";
    getline(cin, input); 
    stringstream ss(input); 

    while (ss >> number) {
        dataArray.push_back(number);
        if (number % 2 == 0) {
            evenNumbers.push_back(number); 
        } else {
            oddNumbers.push_back(number); 
        }
    }

    cout << "Data Array : ";
    for (int i = 0; i < dataArray.size(); i++) {
        cout << dataArray[i] << " ";
    }
    cout << endl;

    cout << "Nomor Genap : ";
    for (int i = 0; i < evenNumbers.size(); i++) {
        cout << evenNumbers[i];
        if (i != evenNumbers.size() - 1) cout << ", ";
    }
    cout << "," << endl;

    cout << "Nomor Ganjil : ";
    for (int i = 0; i < oddNumbers.size(); i++) {
        cout << oddNumbers[i];
        if (i != oddNumbers.size() - 1) cout << ", ";
    }
    cout << "," << endl;

    return 0;
}
