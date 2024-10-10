#include <iostream>

using namespace std;

int main()
{

    // Array 1 Dimensi
    int nilai1D[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        cout << nilai1D[i] << endl;
    }


    // Array 2 Dimensi
    int nilai2D[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        cout << nilai2D[i][j] << " ";
    }
    cout << endl;
}
}
// ---------------------------------------------------------------------------------------------------------------------------------------------------------
    // Pointer
    #include <iostream>

using namespace std;

int main()
{
    int x,y;
    int *px;
    x = 87;
    px = &x;
    y = *px;

    cout << "Alamat x = " << &x << endl;
    cout << "isi px = " << px << endl;
    cout << "Nilai x = " << x << endl;
    cout << "Nilai yang ditunjuk px = " << *px << endl; // Use *px to get the value
    cout << "Nilai y = " << y << endl;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>

using namespace std;
// Fungsi
int penjumlahan(int a, int b) {
    return a + b;
}
// Prosedur
void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}
int main()
{
    // Function / Fungsi
    int hasil = penjumlahan(5, 3);
    cout << "hasil = " << hasil << endl;
    
// Prosedur 
    greet("Gabriel");

    return 0;
}
