#include <iostream>
#include <string>

using namespace std;

void Fungsinama (string belanjaan = "Apel", int angka = 1){

    cout << "buah " << belanjaan << " dan angka " << angka <<"\n";

    cout << "Mmeori yang digunakan : \n";
    cout << "Mmmori puncak = "<<sizeof(belanjaan)+ belanjaan.length()+sizeof(angka)<<" bytes.\n";
}

int main (){
    Fungsinama("Mangga",2);
    Fungsinama("Jeruk",2);
    Fungsinama();

    return 0;

}

// Jadi program ini tuh bikin fungsi yang bisa diubah value dari parameter di dlam fungsi int main, dengan syarat parameternya sudah memiliki nilai