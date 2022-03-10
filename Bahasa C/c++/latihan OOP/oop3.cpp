#include <iostream>
#include <string>
using namespace std;
class mahasiswa{
    public:
        string nama;
        double IPK;

        //constructor
        mahasiswa(string nama_, double IPK_){
            this->nama=nama_;
            this->IPK=IPK_;
        }
        void getnama(const char* newName){
            this->nama=newName;
        }
};

int main(int argc, char const *argv[])
{
    mahasiswa mahasiswa1 = mahasiswa{"Fatwa",3.45};
    return 0;
}
