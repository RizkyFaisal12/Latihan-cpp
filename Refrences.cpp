#include <iostream>
using namespace std;

int main (){
    string food = "Keju";
    string &Keju = food;

    cout << food << "\n";
    cout << Keju << "\n";
    cout << &food << "\n";
    cout << &Keju << "\n";// menampilkan alamat memory
return 0;
}