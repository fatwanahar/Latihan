#include <iostream>
#include<string>
using namespace std;

int main() {
    int a,b,c,d;
    string nama;
   /* string nama = "fatwa Sifaun Nahar";
    a=1;
    b=2;
    c=3;
    d=4;
    cout << a << "\n";
    cout << "Namaku adalah " << nama << "\n";
    cout << "halo apa kabar kalian semua!" << endl;
    cout << "Halo juga apa kabar!" << endl;*/
    cout << "masukkan namamu: ";
    getline(cin,nama);
    cout << "Halo " << nama << "\n";
    cout << "jumlah karakter dalam namamu ada: " << nama.size();
    return 0;

}

