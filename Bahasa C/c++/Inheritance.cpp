#include<iostream>
#include<stdio.h>
#include <math.h>
using namespace std;

//class induk

class prismasegitiga{
	protected:
		int alas, tinggi, tinggiprisma;
		
		public:
			void setValue(int a, int t, int tp){
				alas=a;
				tinggi=t;
				tinggiprisma=tp;
			}
};

class prisma: public prismasegitiga{
	public:
		int nilai(){
			return (alas*tinggi*0.5*tinggiprisma);
		}
	};

int main(){
	prisma prisma;
	prisma.setValue(4,8,6);
    cout << "Volume Prisma =" << prisma.nilai() << "cm";
}