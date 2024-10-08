#include <iostream>
using namespace std;

void hitungNilai(int arr[], int n) {
    int max = arr[0], min = arr[0];
    float sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
        sum += arr[i];
    }

    float avg = sum / n;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    cout << "Average: " << avg << endl;
}

int main() {
    int n;

    cout << "Masukkan jumlah array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Array ke - " << i + 1 << ": ";
        cin >> arr[i];
    }

    hitungNilai(arr, n);

    return 0;
}

