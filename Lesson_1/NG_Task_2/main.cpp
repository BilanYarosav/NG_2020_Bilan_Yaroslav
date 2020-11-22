#include <iostream>

using namespace std;

int main()
{
 int a=0;
    cout << "Vvedite pervoe chislo ";
    cin >> a;
 int b=0;
    cout << "Vvedite vtoroe chislo ";
    cin >> b;
 int c=0;
    cout << "Vvedite deistvie ";
    cin >> c;
    cout << "Rezultat: ";
if ( c == 1 ){
    cout << a << "+" << b << "=";
    cout << a + b;
    cout << endl;
}
if ( c == 2 ){
    cout << a << "-" << b << "=";
    cout << a - b;
    cout << endl;
}
if ( c == 3 ){

    cout << a << "*" << b << "=";
    cout << a * b;
    cout << endl;
}
if ( c == 4 ){
    cout << a << "/" << b << "=";
    cout << a / b;
    cout << endl;

}
}
