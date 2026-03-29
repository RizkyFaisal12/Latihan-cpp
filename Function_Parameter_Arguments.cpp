#include <iostream> 
#include <string>

using namespace std ; 

void Fungsisaya( string name, int age, string tingkatpendidikan, string pendidikan, string jurusan, string hobi){
    cout <<"Halo, nama saya " << name << ".\n";
    cout <<"Umur saya "<< age <<", saya sedang menempuh pendidikan "<< tingkatpendidikan <<" saya di "<< pendidikan << " Pada jurusan "<< jurusan << ". Hobi saya adalah "<< hobi <<".\n";  
}

int main (){
   string name,pendidikan,tingkatpendidikan,jurusan,hobi;
   int age;

    cout << "Masukkan nama anda -  ";
    getline (cin , name);

    cout << "Masukkan umur anda = ";
    cin >> age;
    cin.ignore ();

    cout << "Masukkan tingkat pendidikan anda (SMP/SMA/D1/D2/D3/D4/S1-S3) = ";
    getline(cin, tingkatpendidikan);

    cout << "Masukkan tempat anda berkuliah = ";
    getline (cin, pendidikan);

    cout << " Masukkan jurusan anda = ";
    getline (cin, jurusan);

    cout << "Masukkan Hobi anda = ";
    getline (cin, hobi);
    
    Fungsisaya( name,age,tingkatpendidikan,pendidikan,jurusan,hobi);
  
    cout << "Estimasi Memori yang digunakan: " 
     << (name.length() + tingkatpendidikan.length() + pendidikan.length() + jurusan.length() + hobi.length()) * sizeof(char)+ sizeof(age)<< " bytes" << endl;

   
    
    return 0;
}