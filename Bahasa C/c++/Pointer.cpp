#include <iostream>
using namespace std;

int main() {
    string food="pizza";
    string *ptr=&food;
    cout << &food << "\n";
    cout << ptr << endl;
    cout << *ptr << "\n";
    *ptr = "Meatball";
    cout << *ptr << "\n";
    cout << food << "\n";
}
