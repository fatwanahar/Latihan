#include <iostream>
using namespace std;
class pelanggan{
    public:
    int bayar,total,kembalian;
    char nama[30];
    char gender[30];

    pelanggan(int total_){
        this->total=total_;
    }
    void tampil(){
        cout << "-------------SELAMAT DATANG DI RESTORAN TAKASHIMURA-------------"<<endl;
        cout << "Masukkan Nama: ";
        gets(nama);
        cout << "Masukkan Jenis Kelamin: ";
        gets(gender);
        cout << "Selamat Datang Di Restoran " << nama << endl;
    };
    void pembayaran(){
        do{
        cout << "\n----------NOTA PEMBAYARAN----------" << endl;
        cout << "Total Harga: " << total <<endl;
        cout << "Masukkan uang anda: ";
        cin >> bayar;
        kembalian = bayar-total;
            if (bayar<total){
            	cout << "Maaf uang anda tidak cukup silahkan masukkan lagi"<< endl;
            }
            else{
                cout << "Uang anda Rp." << bayar << " Kembalian sebesar Rp." << kembalian << endl;
                cout << "\n-------------------TERIMA KASIH-------------------\n\n";
            }
        } while (bayar<total);
    }
};
class makanan{
    public:
    int jumlah,harga,pilih;
    
    int pesan(){
        cout <<"Pilih Menu Makanan: ";
        cin >> pilih;
        cout << "Masukkan Jumlah: ";
        cin >> jumlah;
        switch (pilih){
            case 1:
                cout<<"\n\nMenu Pesanan : Ayam Bakar\n";
                cout<<"Jumlah Pesanan : "<<jumlah << endl;
                cout<<"Harga Pesanan : Rp."<<jumlah*15000 << endl;
                harga=jumlah*15000;
                break;
            case 2:
                cout<<"\n\nMenu Pesanan : Ayam goreng\n";
                cout<<"Jumlah Pesanan : "<<jumlah << endl;
                cout<<"Harga Pesanan : Rp."<<jumlah*15000 << endl;
                harga=jumlah*15000;
                break;
            case 3:
                cout<<"\n\nMenu Pesanan : Bebek Bakar\n";
                cout<<"Jumlah Pesanan : "<<jumlah << endl;
                cout<<"Harga Pesanan : Rp."<<jumlah*17000 << endl;
                harga=jumlah*17000;
                break;
            case 4:
                cout<<"\n\nMenu Pesanan : Bebek Goreng\n";
                cout<<"Jumlah Pesanan : "<<jumlah << endl;
                cout<<"Harga Pesanan : Rp."<<jumlah*17000 << endl;
                harga=jumlah*17000;
                break;
            case 5:
                cout<<"\n\nMenu Pesanan : Nasi Goreng\n";
                cout<<"Jumlah Pesanan : "<<jumlah << endl;
                cout<<"Harga Pesanan : Rp."<<jumlah*10000 << endl;
                harga=jumlah*10000;
                break;
            case 6:
                cout<<"\n\nMenu Pesanan : Nasi Bakar\n";
                cout<<"Jumlah Pesanan : "<<jumlah <<endl;
                cout<<"Harga Pesanan : Rp."<<jumlah*12000 << endl;
                harga=jumlah*12000;
                break;
            case 7:
                cout<<"\n\nMenu Pesanan : Gurami Bakar\n";
                cout<<"Jumlah Pesanan : "<<jumlah <<endl;
                cout<<"Harga Pesanan : Rp."<<jumlah*40000 << endl;
                harga=jumlah*40000;
                break;
            case 8:
                cout<<"\n\nMenu Pesanan : Gurami Asam Manis\n";
                cout<<"Jumlah Pesanan : "<<jumlah <<endl;
                cout<<"Harga Pesanan : Rp."<<jumlah*40000 << endl;
                harga=jumlah*40000;
                break;
            case 9:
                cout<<"\n\nMenu Pesanan : Kakap Saus Inggris\n";
                cout<<"Jumlah Pesanan : "<<jumlah <<endl;
                cout<<"Harga Pesanan : Rp."<<jumlah*40000 << endl;
                harga=jumlah*40000;
                break;
            case 10:
                cout<<"\n\nMenu Pesanan : Ayam Geprek\n";
                cout<<"Jumlah Pesanan : "<<jumlah <<endl;
                cout<<"Harga Pesanan : Rp."<<jumlah*15000 << endl;
                harga=jumlah*15000;
                break;
            default:
                cout<< "salah Memasukkan pilihan, silahkan pilih lagi \n";
                break;
        }
        return harga;
    };

    int pesanminum(){
        cout <<"Pilih Menu Minuman: ";
        cin >> pilih;
        cout << "Masukkan Jumlah: ";
        cin >> jumlah;
        switch (pilih){
            case 1:
            cout<<"\n\nMenu Pesanan : Teh hangat\n";
            cout<<"Jumlah Pesanan : "<<jumlah << endl;
            cout<<"Harga Pesanan : Rp."<<jumlah*2000 << endl;
            harga=jumlah*2000;
            break;
        case 2:
            cout<<"\n\nMenu Pesanan : Es Teh\n";
            cout<<"Jumlah Pesanan : "<<jumlah << endl;
            cout<<"Harga Pesanan : Rp."<<jumlah*2000 << endl;
            harga=jumlah*2000;
            break;
        case 3:
            cout<<"\n\nMenu Pesanan : Jeruk Hangat\n";
            cout<<"Jumlah Pesanan : "<<jumlah << endl;
            cout<<"Harga Pesanan : Rp."<<jumlah*3000 << endl;
            harga=jumlah*3000;
            break;
        case 4:
            cout<<"\n\nMenu Pesanan : Es Jeruk\n";
            cout<<"Jumlah Pesanan : "<<jumlah << endl;
            cout<<"Harga Pesanan : Rp."<<jumlah*3000 << endl;
            harga=jumlah*3000;
            break;
        default:
            cout<< "salah Memasukkan pilihan, silahkan pilih lagi \n";
            break;
    }
    return harga;
    }
};
void tampilmenu(){
    cout << "-----------MENU MAKANAN-----------"<<endl;
    cout << "1." << endl;
    cout << "Nama: Ayam Bakar" << endl; 
    cout << "Harga: Rp.15000" << endl;
    cout << "----------------" << endl;
    cout << "2." << endl;
    cout << "Nama: Ayam Goreng" << endl; 
    cout << "Harga: Rp.15000" << endl;
    cout << "----------------" << endl;
    cout << "3." << endl;
    cout << "Nama: Bebek Bakar" << endl; 
    cout << "Harga: Rp.17000" << endl;
    cout << "----------------" << endl;
    cout << "4." << endl;
    cout << "Nama: Bebek Goreng" << endl; 
    cout << "Harga: Rp.17000" << endl;
    cout << "----------------" << endl;
    cout << "5." << endl;
    cout << "Nama: Nasi Goreng" << endl; 
    cout << "Harga: Rp.10000" << endl;
    cout << "----------------" << endl;
    cout << "6." << endl;
    cout << "Nama: Nasi Bakar" << endl; 
    cout << "Harga: Rp.12000" << endl;
    cout << "----------------" << endl;
    cout << "7." << endl;
    cout << "Nama: Gurami Bakar" << endl; 
    cout << "Harga: Rp.40000" << endl;
    cout << "----------------" << endl;
    cout << "8." << endl;
    cout << "Nama:  Gurami Asam Manis" << endl; 
    cout << "Harga: Rp.40000" << endl;
    cout << "----------------" << endl;
    cout << "9." << endl;
    cout << "Nama: Kakap Saus Inggris" << endl; 
    cout << "Harga: Rp.40000" << endl;
    cout << "----------------" << endl;
    cout << "10." << endl;
    cout << "Nama: Ayam Geprek"<< endl; 
    cout << "Harga: Rp.15000" << endl;
    cout << "----------------" << endl;
    cout << "\n-----------MINUMAN-----------"<< endl;
    cout << "1." << endl;
    cout << "Nama: Teh Hangat"<< endl; 
    cout << "Harga: Rp.2000" << endl;
    cout << "----------------" << endl;
    cout << "2." << endl;
    cout << "Nama: Es Teh"<< endl; 
    cout << "Harga: Rp.2000" << endl;
    cout << "----------------" << endl;
    cout << "3." << endl;
    cout << "Nama: Jeruk Hangat"<< endl; 
    cout << "Harga: Rp.3000" << endl;
    cout << "----------------" << endl;
    cout << "4." << endl;
    cout << "Nama: Es Jeruk"<< endl; 
    cout << "Harga: Rp.3000" << endl;
    cout << "----------------" << endl;
}

int main(){
    int total,hargamakan,hargaminum;
    pelanggan pelanggan1 = pelanggan(total);
    pelanggan1.tampil();
    tampilmenu();
    makanan makan;
    hargamakan=makan.pesan();
    hargaminum=makan.pesanminum();
    total=hargamakan+hargaminum;
    pelanggan membayar = pelanggan(total);
    membayar.pembayaran();
    return 0;
}
