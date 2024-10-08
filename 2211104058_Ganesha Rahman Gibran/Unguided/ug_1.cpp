#include <iostream>
#include <sstream> 
#include <vector>  
using namespace std;

int main() {
    string input;
    vector<int> numbers;

    cout << "Masukkan angka (pisahkan dengan spasi): ";
    getline(cin, input); 

    stringstream ss(input);
    int number;
    while (ss >> number) {
        numbers.push_back(number); 
        if (ss.peek() == ' ') {
            ss.ignore(); 
        }
    }

    cout << "Angka yang anda masukkan: ";
    for (size_t i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if (i < numbers.size() - 1) {
            cout << ","; 
        }
    }
    cout << endl;

    cout << "Nomor Genap: ";
    bool firstEven = true; 
    for (int num : numbers) {
        if (num % 2 == 0) {
            if (!firstEven) {
                cout << ",";
            }
            cout << num;
            firstEven = false;
        }
    }
    cout << endl;

    cout << "Nomor Ganjil: ";
    bool firstOdd = true; 
    for (int num : numbers) {
        if (num % 2 != 0) {
            if (!firstOdd) {
                cout << ","; 
            }
            cout << num;
            firstOdd = false;
        }
    }
    cout << endl;

    return 0;
}
