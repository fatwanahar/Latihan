#include <iostream>
using namespace std;

class prismaSegitiga{
	public:
		float aSegitiga, tSegitiga, tPrisma;
		
		float getVolPrism(float a, float b, float t){
			float vPrisma;
			
			vPrisma = (1/2.0)*a*b*t;
			
			return vPrisma;
		}
};

int main(){
	prismaSegitiga prisma1, prisma2;
	
	//prisma 1
	prisma1.aSegitiga = 3;
	prisma1.tSegitiga = 4;
	prisma1.tPrisma = 10;
	cout << "Alas segitiga prisma pertama: " << prisma1.aSegitiga << endl;
	cout << "Tinggi segitiga prisma pertama: " << prisma1.tSegitiga << endl;
	cout << "Tinggi prisma pertama: " << prisma1.tPrisma << endl << endl;
	
	//prisma 2
	cout << "Alas segitiga prisma kedua: ";
	cin >> prisma2.aSegitiga;
	cout << "Tinggi segitiga prisma kedua: ";
	cin >> prisma2.tSegitiga;
	cout << "Tinggi prisma kedua: ";
	cin >> prisma2.tPrisma;
	
	cout << "\nVolume prisma pertama: " << prisma1.getVolPrism(prisma1.aSegitiga, prisma1.tSegitiga, prisma1.tPrisma) << endl;
	cout << "Volume prisma kedua: " << prisma2.getVolPrism(prisma2.aSegitiga, prisma2.tSegitiga, prisma2.tPrisma);
	
	return 0;
}
