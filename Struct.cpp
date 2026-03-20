#include <iostream>
#include <iomanip>  
#include <string.h>

using namespace std;

int main (){
struct profil{
    string nama,hobi,pendidikan;
    int umur;
};

profil p[2] = {
        {"Rizky Faisal", "Olahraga", "S1 Teknik Komputer", 20}, 
        {"Angga Adi Pratama", "Olahraga", "S2 Ilmu Komunikasi", 21}     
};

for (int i = 0;i<2;i++){
    cout <<"\nProfil ke-"<< i+1 <<"\nnama = " << p[i].nama <<"\n"<<"Hobi = "<< p[i].hobi<<"\n"<<"Pendidikan = "<<p[i].pendidikan <<"\n"<<"Umur = "<< p[i].umur<<"\n";
  
}

return 0;
}
