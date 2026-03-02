#include <iostream>
using namespace std;

int panjang, lebar;

void input()
{
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;  
}

int luasPersegi(int a, int b)
{
    return a * b;
}

int kelilingPersegi(int a, int b)
{
    return 2 * (a + b);
}

void output()
{
    int luas = luasPersegi(panjang, lebar);
    int keliling = kelilingPersegi(panjang, lebar);
    cout << "Luas persegi panjang adalah: " << luas << endl;
    cout << "Keliling persegi panjang adalah: " << keliling << endl;
}