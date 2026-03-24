#include <iostream>
#include <string>
using namespace std;

int main (){

//1. Informasi terkait memori setiap tipe data;
cout << "\n\t1.Informasi memori pada tipe data\n";
 int Int;
 float Float;
 string String;
 double Double;
 char Char;

cout << "Ukuran tipe data int adalah = "<< sizeof(Int) << "\n";     // 4 bytes 
cout << "Ukuran tipe data float adalah = "<< sizeof(Float) << "\n";   // 4 bytes
cout << "Ukuran tipe data string adalah = "<< sizeof (String) <<"\n"; // 32 bytes
cout << "Ukuran tipe data double adalah = "<< sizeof(Double) << "\n";  // 8 bytes
cout << "Ukuran tipe data char adalah = "<< sizeof(Char) << "\n";    // 1 byte

//2. percobaan implementasi pake data pribadi
cout << "\n\t2.Percobaan pake data pribadi\n";

string nama = "Rizky Faisal" ,pendidikan = "Telkom University";// inisialiasi

cout << "data yang diinputkan ada 2 string dengan jummlah karakter (pendidikan) ada 17\n";
cout << "Ukuran dari pendidikan adalah = "<< sizeof(pendidikan) << "\n";// ukuran string tersebut dalam memori
cout << "Ukuran dari pendidikan adalah = "<< pendidikan.length() << "\n"; // banyak isi atau karakter 32 byte
cout << "Ukuran dari pendidikan adalah = "<< pendidikan.size ()<< "\n";// sama seperti length

//3. Percobaan Input data secara array, menghitung memory, dan menghapus memory
cout << "\n\t3.Percobaan Input data secara array menggunakan pointer, menghitung memory, dan menghapus memory\n";

    string name;
    int jumlahdata,age;

    cout << "Masukkan jumlah data yang inigin dimasukkan ! = ";
    cin  >> jumlahdata;

    cin.ignore()
;
    string *ptrname = new string [jumlahdata];
    int *ptrage = new int [jumlahdata];

    for (int i = 0;i<jumlahdata;i++){
        cout << "* Data ke="<< i+1 << "\n";
        cout << "Masukkan nama anda = ";
        getline (cin, ptrname[i]);

        cout << "Masukkan umur anda = ";
        cin >> ptrage[i];
        cin.ignore();

         cout << "\n";
    }

    cout << "TOTAL MEMORI TERSIMPAN = " <<(jumlahdata * sizeof(*ptrname)) + (jumlahdata * sizeof(*ptrage));

    cout << "\nPenghapusan memori....\n";

    delete[] ptrname;
    ptrname = nullptr;

    delete[] ptrage;
    ptrage = nullptr;

    cout << "Mempri sudah dibersihkan !";

    return 0;
}