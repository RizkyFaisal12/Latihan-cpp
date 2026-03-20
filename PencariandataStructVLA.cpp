// 21 Maret 2026
//Program ini dbuat untuk menginput berapa data yang diproses secara sendiri, lalu mengunci jumlah data yang diinginkan tersebut.
// konsep ini dinamakan Variabel Lenght Array (VLA)
#include <iostream>
#include <iomanip>  
#include <string.h>
using namespace std;



int main (){

 cout <<"\n\tPencarian Data Struct Dinamis\n";

 struct profile{
    string nama,hobi,pekerjaan;
    int umur;
 };
 //pengisian banyaknya profile 
 int banyakprofile;
 cout << "Masukkan banyak profile = ";
 cin >> banyakprofile;
 
 if (cin.fail()){
    cout << "Format yang anda masukkan salah!\n";
    cout << "Input menerima berupa angka saja.";
 }else {

    // inisiasi banyak profil secara dinamis dalam array
    profile p[banyakprofile]; 

    // pengisian data profil
    for (int i=0;i<banyakprofile;i++){ 
        cin.ignore();// menghialngkan bekas buffer cin untuk input string
        cout << "\nProfiL ke-"<<i+1 <<" :"<<"\n";

        cout << "Masukkan nama = ";
        getline(cin,p[i].nama);

        cout << "Hobi          = ";
        getline(cin,p[i].hobi);

        cout << "Pekerjaan     = ";
        getline(cin,p[i].pekerjaan);

         cout << "Umur          = ";  
        cin >> p[i].umur;

        cout <<"\n";
    }
 
    //Pengisian profile yang dicari
    int profildicari;
    cout << "Profil yang dicari = ";
    cin >> profildicari;
 
    //logika pencarian
    //penampilan data profil
    if (profildicari <= banyakprofile && profildicari> 0){ 
        for (int i=0;i<profildicari;i++){
            if ((i+1) != profildicari ){
            continue;
            }
            cout <<"\n\n\tPROFIL DITEMUKAN!"<<"\n\nProfil ke-"<<i+1<<" :"<<"\n";//cout << "Profil ke-"<<profildicari<<"\n";
            cout <<"Nama      = "<<p[i].nama <<"\n";
            cout <<"Hobi      = "<< p[i].hobi <<"\n";
            cout <<"Pekerjaan = " <<p[i].pekerjaan <<"\n";
            cout <<"Umur      = " << p[i].umur <<"\n";
        }
    } else {
        cout << "Profil tidak tersedia !";
    }
 }
 
 return 0; }