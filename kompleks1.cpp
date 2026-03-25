//25 Maret 2026
#include <iostream>
#include <string>
using namespace std;

enum jenisbarang {ELEKTRONIK,PAKAIAN,MAKANAN};

struct databarang{ 
    string nama;
    double harga;
    int stock;
    char kodeunik;
};

int main (){


int jumlahuser;
float totalnilaibarang = 0;
jenisbarang barang;

cout << "Masukkan jumlah user yang ingin menginput = ";
cin >> jumlahuser;
cin.ignore();

databarang jumlahdata [jumlahuser]; 
int kategoribarang[jumlahuser];
cout << "\n";
for (int i=0;i<jumlahuser;i++){
    cout << "\n\tBarang ke-"<< i+1 <<"\n";
    cout << "\n1. Elektronik\n2. Pakaian\n3. Makanan\n";
    cout <<"Masukkan kategori barang = ";
    cin >> kategoribarang[i];

    if (kategoribarang[i]>=1&&kategoribarang[i]<=3){
   
    switch (kategoribarang[i]){
    case 1:
        barang = ELEKTRONIK;
        if (barang == 0){
            cout << "Barang dipilih = Barang Elektronik\n";
        }else { cout << "Kode error!\n";}
        break;

    case 2: 
        barang = PAKAIAN;
        if (barang == 1){
            cout << "Barang dipilih = Barang Pakaian\n";
        } else { cout << "Kode error!\n";}
        break;

    case 3: 
        barang = MAKANAN;
        if (barang == 2){
            cout << "Makanan\n";
        } else { cout << "Kode error!\n";}
        break;

    default : 
        cout << "\nJenis barang atau makanan tidak tersedia!";
        break;
    }

    cin.ignore();
    cout << "\nMasukkan nama barang = ";
    getline (cin, jumlahdata[i].nama);

    cout << "Masukkan Harga = ";
    cin >> jumlahdata[i].harga;

    cout << "Masukkan stock nya = ";
    cin >> jumlahdata[i].stock;

    cout << "Masukkan kode uniknya = ";
    cin >> jumlahdata[i].kodeunik;

    cin.ignore();

     totalnilaibarang += jumlahdata[i].stock*jumlahdata[i].harga;
     }else { break;}
}   

    for (int i=0;i<jumlahuser;i++){
        if ((kategoribarang[i] >=1) && (kategoribarang[i]<=3)){
            continue;
        }else{break;}
    }

    for (int i = 0;i<jumlahuser;i++){
        if (kategoribarang[i]>=1&&kategoribarang[i]<=3){
        cout << "\n\tData barang ke-"<< i+1<<"\n";
        cout << "Kategori yang dipilih pada barang ke-"<< i+1 <<" = " << jumlahdata[i].nama<< " dengan kode unik ("<< jumlahdata[i].kodeunik << ")\n";     
    
        cout << "stock barang = "<< jumlahdata[i].stock << "\n";
        
        if (jumlahdata[i].stock <5){
            cout << "Kelangkaan = Barang langka!\n";
        }else {
            cout << "Kelangkaan = Tidak langka\n";
        }
        
        if (jumlahdata[i].harga>100000){
            cout << "Kemewahan = Barang mewah!\n";
        }else {
            cout << "Kemewahan = Barang biasa \n";
        }
        }else { 
            cout << "Kategori barang tidak tersedia!"; break;}
    }


    return 0;
}
