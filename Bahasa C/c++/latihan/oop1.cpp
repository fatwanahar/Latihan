#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    public:
        string nama,jurusan,npm;
        double ipk;
};

int main(int argc, char const *argv[])
{
    mahasiswa mahasiswa1;
    mahasiswa1.nama="ucup haliha";
    mahasiswa1.jurusan="Teknik Informatika";
    mahasiswa1.npm="200810100723";
    mahasiswa1.ipk=3.14;
    cout << mahasiswa1.nama << endl;
    return 0;
}
