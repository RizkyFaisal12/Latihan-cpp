#include <iostream>
#include <string>

using namespace std;

void myFunction(int parameter1,int parameter2) {
    cout << parameter1+parameter2;
}

int main (){
    
    int i;
    int a;

    cout << "Masukkan nilai ke 1 = ";
    cin >> i;

    cout << "Masukkan nilai ke 2 = ";
    cin >> a;

    cout <<"Hasil dari penjumlahan kedua angka diatas adalah = ";
    myFunction(i,a);
    cout << "\n";

    cout << "Total memori puncak yang digunakan = " << sizeof(a)*2 + sizeof(i)*2 <<" bytes\n";

}