#include <iostream>
#include <string>

using namespace std;


enum jenisbarang {ELEKTRONIK,PAKAIAN,MAKANAN};

int main (){

int jumlahuser;
float totalnilaibarang = 0;
jenisbarang barang;

cout << "\nMasukkan jumlah user yang ingin menginput = ";
cin >> jumlahuser;
cin.ignore();

string *nama = new string[jumlahuser];
int *harga = new int [jumlahuser];
int *stock = new int [jumlahuser];
char *kodeunik = new char [jumlahuser];

int *kategoribarang = new int[jumlahuser];

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
    getline (cin, nama[i]);

    cout << "Masukkan Harga = ";
    cin >> harga[i];

    cout << "Masukkan stock nya = ";
    cin >> stock[i];

    cout << "Masukkan kode uniknya = ";
    cin >> kodeunik[i];

    cin.ignore();

     totalnilaibarang += stock[i]* harga[i];
     }else { break;}
}   

    for (int i=0;i<jumlahuser;i++){
        if ((kategoribarang[i] >=1) && (kategoribarang[i]<=3)){
            continue;
        }else{break;}
    }

    for (int i = 0;i<jumlahuser;i++){
        if (kategoribarang[i]>=1&&kategoribarang[i]<=3){
        cout << "\nData tersimpan :";
        cout << "\n\tData barang ke-"<< i+1<<"\n";
        cout << "Kategori yang dipilih pada barang ke-"<< i+1 <<" = " << nama[i]<< " dengan kode unik ("<< kodeunik[i] << ")\n";     
    
        cout << "stock barang = "<< stock[i] << "\n";
        
        if (stock[i] <5){
            cout << "Kelangkaan = Barang langka!\n";
        }else {
            cout << "Kelangkaan = Tidak langka\n";
        }
        
        if (harga[i]>100000){
            cout << "Kemewahan = Barang mewah!\n";
        }else {
            cout << "Kemewahan = Barang biasa \n";
        }
        }else { 
            cout << "\n- Kategori barang pada data ke-"<< i+1 <<" dan seterusnya tidak akan dicatat oleh program!, dikarenakan data yang anda input pada data ke-" << i+1 << " tidak ada di dalam kategori!"; break;}
    }

    cout << " Pembacaan memory : \n";
    cout << "Memori total = "<< (sizeof(*nama)*jumlahuser + sizeof (*harga)*jumlahuser+sizeof (*stock)*jumlahuser+ sizeof(*kodeunik)*jumlahuser) <<"\n";
    
delete[] nama; // penghapusan data 
nama = nullptr;// penghapus bekas data supaya si data ga muncul atau memastikan dia ilang

delete[] harga;//penghapusan data
harga = nullptr;// [enghaus bekas data

delete[] stock; // penghapusan data 
stock = nullptr;// penghapus bekas data supaya si data ga muncul atau memastikan dia ilang

delete[] kodeunik;//penghapusan data
kodeunik = nullptr;// [enghaus bekas data

if (nama == nullptr && harga == nullptr) {
    cout << "BUKTI: Semua pointer sudah dilepas dan di-set ke NULL.\n";
    cout << "Data sudah tidak bisa diakses lagi demi keamanan.\n";
} else {
    cout << "PERINGATAN: Pointer masih menyimpan alamat memori!\n";
}

}