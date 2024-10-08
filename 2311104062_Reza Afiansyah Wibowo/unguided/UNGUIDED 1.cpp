#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

int main() {
    std::string input;
    std::vector<int> data, genap, ganjil;

    std::cout << "Masukkan data array (pisahkan dengan spasi): ";
    std::getline(std::cin, input);

    std::istringstream iss(input);
    int num;
    while (iss >> num) {
        data.push_back(num);
        if (num % 2 == 0) {
            genap.push_back(num);
        } else {
            ganjil.push_back(num);
        }
    }

    std::cout << "Data Array : ";
    for (int i = 0; i < data.size(); i++) {
        std::cout << data[i] << (i < data.size() - 1 ? " " : "");
    }
    std::cout << std::endl;

    std::cout << "Nomor Genap : ";
    for (int i = 0; i < genap.size(); i++) {
        std::cout << genap[i] << (i < genap.size() - 1 ? ", " : "");
    }
    std::cout << std::endl;

    std::cout << "Nomor Ganjil: ";
    for (int i = 0; i < ganjil.size(); i++) {
        std::cout << ganjil[i] << (i < ganjil.size() - 1 ? ", " : "");
    }
    std::cout << std::endl;

    return 0;
}
