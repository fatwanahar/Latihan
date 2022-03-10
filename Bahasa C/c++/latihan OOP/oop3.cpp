#include <iostream>
#include <string>
using namespace std;
class mahasiswa{
    public:
        string nama;
        double IPK;

        //constructor w parameter
        mahasiswa(string nama_, double IPK_){
            this->nama=nama_;
            this->IPK=IPK_;
        }

        //Method
        //function w/o parameter and return
        void tampil(){
            cout << "Mahasiswa bernama " << this->nama << " |dengan IPK " << this->IPK <<endl;
        }
        //function w/o parameter w return
        string getNama(){
            return this->nama;
        }
        double getIPK(){
            return this->IPK;
        }
        //function w parameter w/o return
        void ubahNama(const char* newName){
            this->nama=newName;
        }
        //function w parameter and return
        double tambahNilai(const double &nilai){
            return this->IPK + nilai;
        }

};

int main(int argc, char const *argv[])
{
    mahasiswa mahasiswa1 = mahasiswa{"Fatwa",3.45};
    mahasiswa mahasiswa2 = mahasiswa{"Nahar",3.90};
    mahasiswa1.tampil();
    mahasiswa2.tampil();
    mahasiswa1.ubahNama("Sifaun");
    cout << "Nama Mahasiswa: " << mahasiswa1.getNama() << endl;
    cout << "IPK Mahasiswa: " << mahasiswa1.getIPK() << endl;
    cout << "IPK mahasiswa1: " << mahasiswa1.tambahNilai(0.30) << endl;
    mahasiswa1.tampil();
    return 0;
}
