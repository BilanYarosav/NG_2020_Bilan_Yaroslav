#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
   cout << "�� �������� �������� ������������� �� ��������� � ����� ������� �������.";
   cout << endl;
    cout << "�� �������� � ������ � ���� ����������: �� ��� ���������?";
    cout << endl;
    int a=0;
    cout <<"1.���������� ���������. ";
    cout <<endl;
    cout << "2.�� �������������. ";
    cout << endl;
    cout << "3.�� ��������. ";
    cout << endl;
    cout << "� �������: ";
    cout << endl;
    cin >> a;
    if(a==1){
        cout <<"��������� ������.";
        cout <<endl;
    }
    if(a==2){
        cout <<"������������ ������, �� ������ �������.";
        cout << endl;
    }
    if(a==3){
        cout <<"����� �� �� �������.";
         cout << endl;
    }


        int b=0;
         cout <<"������ ������: � ����� ������?";
        cout << endl;
        cout <<"1.��, ������. ";
    cout <<endl;
    cout << "2.���,� ��� �� ���� �����? ";
    cout << endl;
    cout << "3.� ��� ���� �� �����. ";
    cout << endl;
    cout << "� �������: ";
        cin >> b;
        if(b==1){
        cout <<"������ �� � �������� �����, �� ����� �����.";

        }
        if(b==2){
        cout <<"�, ��� �������?";
        }
        if(b==3){
        cout <<"������� ��� �����, �� ��� ������ ���� � ������ ������.";
        }
         cout << endl;

     int c=0;
      cout <<"������ ������: ���-�� �������?";
        cout << endl;
        cout <<"1.����� �� �������. ";
    cout <<endl;
    cout << "2.� �����������. ";
    cout << endl;
    cout << "3.��, ����������� ��������. ";
    cout << endl;
    cout << "� �������: ";
        cin >> c;
        if(c==1){
        cout <<"����������� ��� �� �����.";

        }
        if (c==2){
        cout <<"�� � ���� ���������, ��� ����� ����� �������.";
        cout <<endl;
        }
        if (c==3){
            cout <<"������ ������, ��� ����� ����������.";
        }
        if (c==2){
        cout <<"���������� �� ���� �� ��c.";
        }


}
