#include <iostream>

using namespace std;

int main()
{
   int a = 0;
   cout << "Skolko deneg tu poluchaesh: ";
   cin >> a;
   if ( a < 1000) {
   cout << "Rabotai Bolshe ";

   }
   if (a > 1000){
    if (a < 999999)
    cout << "Tak derzhat!";
    if (a > 999999)
    cout << "Ti milionner!";
   }
   cout << "no ti molodec!";

}
