#include <iostream>
#include <conio.h>

using namespace std;
// array satu dimensi
/*
int main()
{
    // membuat array
    // membuat array perulangan
   int nilai[5]={1,2,3,4,5};
   for(int i=0; i<5; i++){
    // cout << nilai[i] << endl;
    cout << "Bilangan : " << nilai[i] << endl;
   }
}
*/

// array dua dimensi
/*
int main(){
    int nilai[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << nilai[i][j] << ",";
        }
        cout << endl;
    }
}
*/

// POINTER
/*
int main(){
    int x,y;
    int *px;
    x = 20;
    px = &x;
    y = *px;

    cout << "Alamat x =" << &x << endl;
    cout << "Isi px =" << px << endl;
    cout << "Isi x =" << x << endl;
    cout << "Nilai yg ditunjuk px =" << *px << endl;
    cout << "Nilai y =" << y << endl;
    getch();
}
*/
// FUNGSI
/*
int penjumlahan(int a, int b){
    return a+b;
}
int main(){
    int hasil = penjumlahan(5, 3);
    cout << "Hasil Perkalian nya adalah : " << hasil << endl;
}
*/

// PROCEDURE
void greet(string name){
    cout << "Hello " << name << endl;
}
int main(){
    greet("Alice");
}

