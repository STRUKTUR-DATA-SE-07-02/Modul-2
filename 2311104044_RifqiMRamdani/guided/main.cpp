#include <iostream>

using namespace std;
/*
int main(){

    int nilai[5]={1,2,3,4,5};
    cout << nilai[0];
    cout << nilai[1];
    cout << nilai[2];
    cout << nilai[3];
    cout << nilai[4];


}*/





/*
#include <iostream>
using namespace std;

int main() {

    int nilai[5] = {1, 2, 3, 4, 5};


    for (int i = 0; i < 5; i++) {
        cout << nilai[i] << endl;
    }

    return 0;
}
*/







/*
#include <iostream>
using namespace std;

int main() {
    int nilai[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << nilai[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}*/











/*
#include <iostream>  // Include iostream for cout
using namespace std;

int main() {
    int x, y;
    int *px;

    x = 87;
    px = &x;

    y = *px;
    // Print the results
    cout << "Alamat x = " << &x << endl;
    cout << "Isi px = " << px << endl;
    cout << "Isi x = " << x << endl;
    cout << "Nilai yang ditunjuk px = " << *px << endl;
    cout << "Nilai y = " << y << endl;

    cin.get();
    return 0;
}
*/


#include <iostream>
using namespace std;

int penjumlahan(int a, int b) {
    return a + b;
}

void greet(string name) {
    cout << "Hello " << name << "!" << endl;
}

int main() {
    int hasil = penjumlahan(5, 3);
    cout << "Hasil: " << hasil << endl;

    greet("ramdan");

    cin.get();

    return 0;
}


