#include <iostream>
#include <string>

/*
    TUGAS ALPRO 5 - STRUCT & POINTER

    Nama : Bagas Aditama H
    NIM : A11.2022.14322
*/

using namespace std;

struct Sepeda {
    string merk;
    string type;
    int tahun;
    string harga;
};

int main() {
    Sepeda sepedaGunung;
    sepedaGunung.merk = "Polygon";
    sepedaGunung.type = "Sepeda Gunung";
    sepedaGunung.tahun = 2013;
    sepedaGunung.harga = "2.000.000";

    cout << "Merk: " << sepedaGunung.merk << endl;
    cout << "Type: " << sepedaGunung.type << endl;
    cout << "Tahun: " << sepedaGunung.tahun << endl;
    cout << "Harga: " << sepedaGunung.harga << endl;

    return 0;
}