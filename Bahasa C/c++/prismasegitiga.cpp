#include <iostream>
using namespace std;

	class prismasegitiga{
		public:
			int alas,tinggialas,tinggiprismasegitiga;
			 static int numConstractor;
	
	
prismasegitiga(){
        numConstractor++;
        cout<<"constructor ke-"<<numConstractor<<" called"<<endl;

        this->alas = 10;
        this->tinggialas = 5;
        this->tinggiprismasegitiga = 20; 
    }
    
    
prismasegitiga(int alas_, int tinggialas_, int tinggiprismasegitiga_){
        cout<<"constructor ke-"<<numConstractor<<" called"<<endl;

        this->alas = alas_;
        this->tinggialas = tinggialas_;
        this->tinggiprismasegitiga = tinggiprismasegitiga_;
    }
    
    
prismasegitiga(int alas_, int tinggialas_, int tinggiprismasegitiga_,int num){
        cout<<"constructor ke-"<<numConstractor<<" called"<<endl;

        this->alas = alas_;
        this->tinggialas = tinggialas_;
        this->tinggiprismasegitiga = tinggiprismasegitiga_;

        cout<<"Volume Prisma: "<<hitungVolume()<<endl;
    }
    
    
int hitungVolume(){
        return (this->alas*this->tinggialas/2) * this->tinggiprismasegitiga;
    }
    void displayVolume(){
        cout<<"Volume Prisma: "<<hitungVolume()<<endl;
    }
    
~prismasegitiga(){
        cout<<"Destructor Prisma segitiga dengan ke-"<<this->numConstractor<<" Dihapus..."<<endl;
    }
};

int prismasegitiga::numConstractor = 0;

int main(){
    {                   
		cout<<"\n\n";  
        prismasegitiga prismasegitiga1;
        prismasegitiga1.hitungVolume();
        prismasegitiga1.displayVolume();
    }                               
return 0;    
}
