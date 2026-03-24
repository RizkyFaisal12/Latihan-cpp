#include <iostream>
using namespace std;

int main(){

enum kelompoknilai {E,D,C,B,A};

struct nilai{
    float Tugas;
    float UTS;
    float UAS;
    float Nilaitotaldesimal;
    void perhitungannilai(){
         Nilaitotaldesimal = (0.4*UTS)+(0.4*UAS)+(0.2*Tugas);}
};

cout <<"\tProgram Input Nilai(Tugas, UTS, UAS) dengan Output Nilai Total,Indeks,Status Kelulusan siswa menggunakan ENUM dan Struct\n\n";
cout << "*Bobot Nilai :\n1. Tugas (20%)\n2. UTS   (40%)\n3. UAS   (40%)\n\n";
cout << "*Range Nilai terhadap besar Indeks :\n1. Nilai 0 -40  = 0\n2. Nilai 41-49  = 1\n3. Nilai 50-74  = 2\n4. Nilai 75-84  = 3\n5. Nilai 85-100 = 4\n\n";

nilai siswa;
cout << "Masukkan jumlah nilai Tugas yang diperoleh = ";
cin >> siswa.Tugas;

cout << "Masukkan jumlah nilai UTS yang diperoleh   = ";
cin >> siswa.UTS;

cout <<"Masukkan jumlah nilai UAS yang diperoleh   = ";
cin >> siswa.UAS;

siswa.perhitungannilai();
enum kelompoknilai Nilaitotal;

if (siswa.Nilaitotaldesimal>=0&&siswa.Nilaitotaldesimal<=40){
    Nilaitotal = E;
}else if (siswa.Nilaitotaldesimal>40&&siswa.Nilaitotaldesimal<50){
   Nilaitotal = D;
}else if (siswa.Nilaitotaldesimal>=50&&siswa.Nilaitotaldesimal<75){
    Nilaitotal = C;
}else if (siswa.Nilaitotaldesimal>=75 &&siswa.Nilaitotaldesimal<85){
    Nilaitotal = B;
}else if (siswa.Nilaitotaldesimal>=85&&siswa.Nilaitotaldesimal<=100){
    Nilaitotal = A;
}else {
    Nilaitotal = E;
}

if ((siswa.Tugas>=0&&siswa.Tugas<=100)&&(siswa.UTS>=0&&siswa.UTS<=100)&&(siswa.UAS>=0&&siswa.UAS<=100)){
    cout << "\nNilai kamu      = "<< siswa.Nilaitotaldesimal << "\n";  
  
    switch(Nilaitotal){
     case 0:
     cout << "Indeks Nilai    = E\n";
     break;
    
     case 1:
     cout << "Indeks Nilai    = D\n";
     break;

     case 2:
     cout << "Indeks Nilai    = C\n";
     break;
    
     case 3:
     cout << "Indeks Nilai    = B\n";
     break; 
    
     case 4:
     cout << "Indeks Nilai    = A\n";
     break;
    
     default :
     break;
    }
    cout << "IP kamu adalah  = "<< Nilaitotal <<"\n";


    if (Nilaitotal >0 &&Nilaitotal<5){
        cout << "Status          = Siswa Lulus";
    }else {
        cout << "Status          = Siswa Tidak Lulus";
    }

} else {
    cout<<"\nNilai Invalid!\nMohon masukkan nilai dari range 0-100 !";
}
    return 0;
}
