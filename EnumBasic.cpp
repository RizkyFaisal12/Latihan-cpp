#include <iostream>
using namespace std;

int main(){

int inputindikatorlampu;

enum indikator {
    Mati,
    Menyala
};

cout << "(0)Mati\n(1)Menyala\n";
cout << "Masukkan Indikator Lampu = ";
cin >> inputindikatorlampu;


if (inputindikatorlampu==0){
    cout << "Output indikator = "<< Mati;
}else if(inputindikatorlampu==1){
    cout << "Output indikator = "<<Menyala;
}else {
    cout << "Nilai input tidak valid!";
}

    return 0;
}
