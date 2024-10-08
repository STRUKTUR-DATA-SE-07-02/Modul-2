#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;
    
    vector<int> data(n);
    vector<int> genap;
    vector<int> ganjil;

  cout << "Masukkan " << n << " data: ";
  for (int i = 0; i < n; ++i) {
    cin >> data[i];
    if (data[i] % 2 == 0) {
      genap.push_back(data[i]);
    } else {
      ganjil.push_back(data[i]);
    }
  }

  cout << "Data Array: ";
  for (int i = 0; i < n; ++i) {
    cout << data[i] << " ";
  }
  cout << endl;

  cout << "Nomor Genap: ";
  for (int i = 0; i < genap.size(); ++i) {
    cout << genap[i];
    if (i < genap.size() - 1) {
      cout << ", ";
    }
  }
  cout << "," << endl;

  cout << "Nomor Ganjil: ";
  for (int i = 0; i < ganjil.size(); ++i) {
    cout << ganjil[i];
    if (i < ganjil.size() - 1) {
      cout << ", ";
    }
  }
  cout << "," << endl;

  return 0;
}