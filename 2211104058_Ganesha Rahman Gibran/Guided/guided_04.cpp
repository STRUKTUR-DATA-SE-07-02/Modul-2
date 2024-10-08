#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//Fungsi
int penjumlahan(int a, int b){
    return a+b;
}

//Prosedur
void greet (string name){
    cout << "Hello, " << name << "!" << endl; 
}

int main(){
    int hasil = penjumlahan(5,3);

    cout << "hasil " << hasil << endl;

    greet("alice");
}