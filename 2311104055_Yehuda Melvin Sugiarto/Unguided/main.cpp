#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int bil;
    cout << "Masukkan jumlah elemen array: ";
    cin >> bil;

    vector<int> arr(bil);
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < bil; i++)
        cin >> arr[i];

    cout << "\nData Array : ";
    for (int i = 0; i < bil; i++)
        cout << arr[i] << " ";

    cout << "\nNomor Genap  : ";
    for (int i = 0; i < bil; i++)
        if (arr[i] % 2 == 0)
            cout << arr[i] << ", ";

    cout << "\nNomor Ganjil : ";
    for (int i = 0; i < bil; i++)
        if (arr[i] % 2 != 0)
            cout << arr[i] << ", ";

    cout << endl;
}
