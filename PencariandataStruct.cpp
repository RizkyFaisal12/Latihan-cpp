#include <iostream>
#include <iomanip>  
#include <string.h>

using namespace std;

int main (){

int pdicari;

struct profil{      //inisiasi Struct
    string nama,hobi,pendidikan;
    int umur;
};

profil p[2] = {         //inisiasiprofil
        {"Rizky Faisal", "Olahraga", "S1 Teknik Komputer", 20}, 
        {"Angga Adi Pratama", "Olahraga", "S2 Ilmu Komunikasi", 21}     
    };
cout << "\nSistem pencarian data Struct\n";
cout << "Masukkan profile yang ingin dicari = ";
cin >> pdicari;

if (pdicari == 1){
    cout << "\nProfil ke-1\n";
    cout << "\nNama = "<< p[0].nama << "\n"; 
    cout<< "Hobi = "<<p[0].hobi << "\n";
    cout<< "Pendidikan = "<<p[0].pendidikan << "\n";
    cout<< "Umur = "<<p[0].umur << "\n";

}else if (pdicari == 2){
    cout << "\nProfil ke-2\n";
    cout << "\nNama = "<< p[1].nama << "\n"; 
    cout<< "Hobi = "<<p[1].hobi << "\n";
    cout<< "Pendidikan = "<<p[1].pendidikan << "\n";
    cout<< "Umur = "<<p[1].umur << "\n";
}else{
    cout << "Profil tersebut tidak ada!";
}


return 0;
}
