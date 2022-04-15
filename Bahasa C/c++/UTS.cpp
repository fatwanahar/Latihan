#include <iostream>
#include <stdlib.h>
using namespace std;

class pelanggan{
    public:
    char nama[30];

    void pesan(){
    	cout << "---------------SELAMAT DATANG DI RESTORAN PADANGSUBUR--------------" << endl;
        cout << "masukkan nama: ";
        gets(nama);
        cout << "\t\t|SELAMAT DATANG DI WARUNG KAMI " << nama <<"|" << endl;
    }
};

class pembayaran:public pelanggan{
	public:
    int total,bayar,kembalian;
	
    pembayaran(int total_){
        this->total=total_;
    }

    void tampil(){
        do{
            cout << "-----------------------PEMBAYARAN-----------------------\n";
            cout << "total pembayaran: Rp." << total << endl;
            cout << "berapa uang anda: Rp.";
            cin >> bayar;
            kembalian = bayar-total;
            if (bayar<total){
            	cout << "Maaf uang anda tidak cukup silahkan masukkan lagi"<< endl;
            	system("PAUSE");
                system("cls");
            }
            else{
                cout << "Uang anda Rp." << bayar << " Kembalian sebesar Rp." << kembalian << endl;
                cout << "\n\n-------------------TERIMA KASIH-------------------\n\n";
            }
        } while (bayar<total);
    }
};

class menu{
    public:
    int harga,pilih,jumlah;


    void tampil(){
        cout<<"|--------------------------------MENU--------------------------------|\n\n";
        cout<<"\t\t(1)  Ayam Geprek                     Rp.12000\n";
        cout<<"\t\t(2)  Ayam goreng                     Rp.15000\n";
        cout<<"\t\t(3)  Ayam bakar                      Rp.15000\n";
        cout<<"\t\t(4)  Bebek Bakar                     Rp.20000\n";
		cout<<"\t\t(5)  Bebek goreng                    Rp.20000\n";
        cout<<"\t\t(6)  Sate Ayam                       Rp.10000\n\n";
        cout<<"|--------------------------------------------------------------------|\n\n";
    };

    int pesan(){
        cout << "Silahkan pilih menu: ";
        cin >> pilih;
        cout << "masukkan jumlah: ";
        cin >> jumlah;
        switch (pilih)
        {
        case 1:
            cout<<"\n\nMenu Pesanan : Ayam Geprek\n";
		    cout<<"Jumlah Pesanan : "<<jumlah << endl;
		    cout<<"Harga Pesanan : Rp."<<jumlah*12000 << endl;
            harga=jumlah*12000;
            break;
        case 2:
            cout<<"\n\nMenu Pesanan : Ayam goreng\n";
		    cout<<"Jumlah Pesanan : "<<jumlah << endl;
		    cout<<"Harga Pesanan : Rp."<<jumlah*15000 << endl;
            harga=jumlah*15000;
            break;
        case 3:
            cout<<"\n\nMenu Pesanan : Ayam bakar\n";
		    cout<<"Jumlah Pesanan : "<<jumlah << endl;
		    cout<<"Harga Pesanan : Rp."<<jumlah*15000 << endl;
            harga=jumlah*15000;
            break;
        case 4:
            cout<<"\n\nMenu Pesanan : bebek goreng\n";
		    cout<<"Jumlah Pesanan : "<<jumlah << endl;
		    cout<<"Harga Pesanan : Rp."<<jumlah*20000 << endl;
            harga=jumlah*20000;
            break;
        case 5:
            cout<<"\n\nMenu Pesanan : bebek bakar\n";
		    cout<<"Jumlah Pesanan : "<<jumlah << endl;
		    cout<<"Harga Pesanan : Rp."<<jumlah*20000 << endl;
            harga=jumlah*20000;
            break;
        case 6:
            cout<<"\n\nMenu Pesanan : sate ayam\n";
		    cout<<"Jumlah Pesanan : "<<jumlah <<endl;
		    cout<<"Harga Pesanan : Rp."<<jumlah*10000 << endl;
            harga=jumlah*10000;
            break;
        default:
            cout<< "salah Memasukkan pilihan, silahkan pilih lagi \n";
            break;
        }
        return harga;
    }
};
int main(){
    bool lanjut=true;
    char rep;
    int total=0;
    pelanggan pelanggan;
    pelanggan.pesan();
    menu menu;
    do{
        menu.tampil();
        total = total + menu.pesan();
        cout << "apakah ingin pesan lagi?(y/n)\n";
        cin >> rep;
        if (rep == 'y'){
            lanjut=true;
            system("cls");
        } else{
            lanjut=false;
        }
    } while (lanjut == true);
    system("cls");
    pembayaran bayar = pembayaran(total);
    bayar.tampil();
}




