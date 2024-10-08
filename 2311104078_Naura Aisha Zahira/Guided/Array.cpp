#include <iostream>

using namespace std;

int main() {
    int nilai[5]={1,2,3,4,5};

    // mencetak nilai array menggunakan pernyataan cout
    cout << nilai[0];
    cout << nilai[1];
    cout << nilai[2];
    cout << nilai[3];
    cout << nilai[4];

    // mencetak nilai array menggunakan loop for
    for(int i=0; i<5; i++){
        cout << nilai[i] << endl;
    }

    return 0;
}