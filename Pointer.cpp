#include <iostream>
using namespace std;

int main (){

    string nama = "Rizky Faisal"; // menyim[an valeu di variabel nama]
    string &ktp = nama;// kesatuan dalam 1 alamat memori, alamat memori dari variabel nama di &ktp
    string* ptr = &ktp;//penyimpan alamat memori &ktp
   
    cout << nama << "\n"; // menampilkan value nama
    
    cout << ktp <<"\n";//menampilkan "Rizky Faisal"
    cout << &ktp << "\n"; // menampilkan alamat memori food

    cout << ptr <<"\n";//memnampilkan alamat dari &ktp
    cout << *ptr << "\n"; // menampilkan value dari pointer

    //modify pointer
    *ptr = "Genji"; // merubah value variabel memalui pointer
    cout << *ptr <<"\n"; // pemanggilan value variabel edngan pointer

    return 0;
}