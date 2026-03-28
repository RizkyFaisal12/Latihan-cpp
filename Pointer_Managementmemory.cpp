#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int tinggi;

    cout << "Masukkan tinggi Bintang = ";
    cin >> tinggi;
    int *ptrtinggi = new int (tinggi);

    string *ptrspasi = nullptr;
    
    string *ptrbintang = nullptr;
    
    for (int i = 1;i<=*ptrtinggi;i++){  
        ptrspasi = new string((*ptrtinggi-i), ' ');
    
        ptrbintang = new string ((2 * i) - 1, '*');
        
        cout << *ptrspasi << *ptrbintang <<"\n";
    }

    int jumlahbintang = 0;
    int *ptrjumlahbintang = new int(jumlahbintang);

    for (int i=1;i<=tinggi;i++){
        *ptrjumlahbintang += (2 * i) - 1; 
    }

    cout <<"Jumlah bintang = " << *ptrjumlahbintang << "\n"; 

    cout << "Memori yang terpakai = " << sizeof(*ptrtinggi) + sizeof(*ptrjumlahbintang) + sizeof(*ptrspasi) + sizeof(*ptrbintang) << "\n";

    delete ptrtinggi;
    ptrtinggi = nullptr;

    delete ptrspasi;
    ptrspasi = nullptr;
    
    delete ptrbintang;
    ptrbintang = nullptr;
    
    delete ptrjumlahbintang;
    ptrjumlahbintang =nullptr;
    
    if ( (ptrtinggi == nullptr) && (ptrspasi == nullptr) && (ptrbintang == nullptr) && (ptrjumlahbintang == nullptr)){
        cout << "Memori berhasil dibersihkan !\n";
    }else {
        cout <<"Memori gagal dibersihkan!\n";
    }
    return 0;
}