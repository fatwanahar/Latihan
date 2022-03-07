#include <iostream>
#include <string>
using namespace std;
class mahasiswa{
    public:
        string nama,npm,jurusan;
        double ipk;

        //constructor
        //mahasiswa(){
        //cout << "haloooo" << endl;
        
        //constructor dengan parameter
        mahasiswa(string inputnama,string inputnpm,string inputjurusan, double inputipk){
            mahasiswa::nama=inputnama;
            mahasiswa::npm=inputnpm;
            mahasiswa::jurusan=inputjurusan;
            mahasiswa::ipk=inputipk;
            
            cout << mahasiswa::nama << endl;
            cout << mahasiswa::npm << endl;
            cout << mahasiswa::jurusan << endl;
            cout << mahasiswa::ipk << endl;
        }
};
int main(int argc, char const *argv[])
{
    mahasiswa mahasiswa1 = mahasiswa ("fatwa sifaun nahar", "20081010073", "Teknik Informatika", 3.81);
    mahasiswa mahasiswa2 = mahasiswa ("abdul Moed", "20031010072", "Sains Data", 3.40);
    return 0;
}
