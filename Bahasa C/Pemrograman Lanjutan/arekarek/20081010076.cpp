#include <iostream>
using namespace std;

//PARENT CLASS
class Resto{
    public:
    char  menuMakan, menuMinum;
    int harga1, harga2, total, uang, kembalian;

    Resto(char menuMakan1, char menuMinum1, int harga11, int harga22, int kembalian1){
        this->menuMakan = menuMakan1;
        this->menuMinum = menuMinum1;
        this->harga1 = harga11;
        this->harga2 = harga22;
        this->kembalian = kembalian1;
        noFood();
        noDrink();
        bayar();
    }

    int noFood(){
        cout << "\n\n\t=============== REQUEST MAKANAN ===============" << endl;
        cout << "\t\t    (pilih berdasarkan nomor)\n" << endl;

        cout << "\tPilih Menu Makanan : ";
        cin >> menuMakan;

        switch (menuMakan)
        {
        case '1':
            cout << "\tOke, Rawon" << endl;
            harga1 = 14000;
            break;
        case '2':
            cout << "\tOke, Pecel Semanggi" << endl;
            harga1 = 10000;
            break;
        case '3':
            cout << "\tOke, Lontong Balap" << endl;
            harga1 = 12000;
            break;
        case '4':
            cout << "\tOke, Tahu Campur" << endl;
            harga1 = 12000;
            break;
        case '5':
            cout << "\tOke, Rujak Cingur" << endl;
            harga1 = 17000;
            break;
        
        default:
            cout << "\tMaaf, makanan tidak tersedia" << endl;
            harga1 = 0;
        }
            return(this->harga1);
    };

    int noDrink(){
         cout << "\n\t=============== REQUEST MINUM ===============" << endl;
          cout << "\t\t    (pilih berdasarkan nomor)\n" << endl;
         
         cout << "\tPilih Menu Minuman : ";
         cin >> menuMinum;

        switch (menuMinum)
        {
        case '1':
            cout << "\tOke, Es Teh Manis" << endl;
            harga2 = 3000;
            break;
        case '2':
            cout << "\tOke, Es Jeruk" << endl;
            harga2 = 5000;
            break;
        case '3':
            cout << "\tOke, Es Degan" << endl;
            harga2 = 6000;
            break;
        case '4':
            cout << "\tOke, Es Pisang Ijo" << endl;
            harga2 = 8000;
            break;
        case '5':
            cout << "\tOke, Es Sinom" << endl;
            harga2 = 4000;
            break;
        
        default:
            cout << "\tMaaf, minuman tidak tersedia" << endl;
            harga2 = 0;
        }
            return(this->harga2);
    };

    int bayar(){
         cout << "\n\t==============================================\n" << endl;
         total = harga1+harga2;
        cout << "\tTotal harga sebesar Rp." << total << ". Silahkan bayar!" << endl;

        cout << "\n\tInput Uang : Rp.";
        cin >> uang;

        if(uang > total ){
            kembalian = uang - total;
            cout << "\n\tKembalian Rp." << kembalian << "\n\n" << endl; 
        } else if(uang < total){
            kembalian = total - uang;
            cout << "\n\tMaaf, uang Anda kurang Rp." << kembalian << "\n\n" << endl;
        } else if(uang == total){
            cout << "\n\tUang Anda Pass.\n\n"<< endl;
        }
        return(this->kembalian);
    };
};

int main(){
    char a, b, lagi;
    int c, d, kembalian;
    bool beli = true;

    do {
    cout << "\n\n\t\t    ~ WARUNG DHAHAR ~\n\t\t    RESTO IN SUROBOYO\n\t\tJL. YG LURUS N0.1 RUNGKUT\n\t\t   telp.(031)123456789" << endl;
    cout << "\n\n\t=============== DAFTAR MENU ===============\n" << endl;
    cout << "\tMakanan :" << endl;
    cout << "\t1. Rawon             Rp.14.000 \n\t2. Pecel Semanggi    Rp.10.000\n\t3. Lontong Balap     Rp.12.000\n\t4. Tahu Campur       Rp.12.000 \n\t5. Rujak Cingur      Rp.17.000\n" << endl;
    cout << "\tMinuman :" << endl;
    cout << "\t1. Es Teh Manis      Rp.3.000 \n\t2. Es Jeruk          Rp.5.000\n\t3. Es Degan          Rp.6.000\n\t4. Es Pisang Ijo     Rp.8.000 \n\t5. Es Sinom          Rp.4.000\n" << endl;

        Resto pesen(a, b, c, d, kembalian);
        cout << "Ingin memesan lagi (y/t)? ";
        cin >> lagi;

        if(lagi == 'y' || lagi == 'Y'){
            beli = true;
            system("cls");
        } else{
            beli = false;
        }
    } while (beli == true);

    cout << "\n\nBaik, pesanan segera di proses. Terima kasih :)\n\n" << endl;
    
    return 0;
}
