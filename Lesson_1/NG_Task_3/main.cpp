#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    cout << "Skolko oreshrov nuzhno belochke: ";
    cin >> a;
    int b = 0;
    cout << "Skolko oreshkov v odnoy shishke: ";
    cin >> b;
    int c = 0;
    cout << "Skolko shishok bylo sobrano: ";
    cin >>c;
    if (a < (b * c)) {
    cout << "Yes";
    }
    if ( a > ( b * c)){
    cout << "No";
    }




}
