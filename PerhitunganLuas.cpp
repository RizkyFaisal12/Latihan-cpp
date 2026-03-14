#include <iostream>
#include <iomanip>  // buat setprecision
using namespace std;

int main() {

    float alas, atas, tinggi, luasTrapesium;


    cout << "Masukkan panjang alas trapesium = ";
    cin >> alas;

    cout << "Masukkan panjang atas trapesium = ";
    cin >> atas;

    cout << "Masukkan tinggi trapesium = ";
    cin >> tinggi;

    luasTrapesium = 0.5 * (alas + atas) * tinggi;

    cout << fixed << setprecision(2);
    cout << "Luas trapesium dengan alas " << alas
         << ", atas " << atas
         << ", dan tinggi " << tinggi
         << " adalah : " << luasTrapesium << endl;

    cout << "Perhitungan yang digunakan\n"<<endl;
    cout << " luasTrapesium = 0.5 * (alas + atas) * tinggi;"<< endl;



    return 0;
}

