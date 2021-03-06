#include <iostream>
#include <string>

using namespace std;

class myClass{
    private:
        string s1, s2, s3;
        
    public:

        static int counter;
        myClass(string s){ //constructor
            this->s1 = s;
            cout<<"constructor called  with s="<<s<<endl;
            counter++;
            cout<< "jumlah objek:"<<counter<<endl;
        }

        myClass(string s1_, string s2_, string s3_){
            this->s1 = s1_;
        }

        void set_s1(string val){
            this->s1 = val;
        }
        string get_s1(){
            return this->s1;
        }

        void display(){
            cout<<"func:display"<<" > nilai s1 = "<<s1<<endl;
        }

        ~myClass(){
            cout<<"destruction object with s="<<s1<<endl;
        }
}; 

int myClass::counter = 0;

int main(){
    myClass c1("obj1");
    {
        myClass c2("obj2");
    }

    {
        myClass c3("obj3");
    }
    cout<<"jumlah objek yang dibuat: "<<myClass::counter<<endl;
    return 0;
}