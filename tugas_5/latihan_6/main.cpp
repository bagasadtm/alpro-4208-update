#include <iostream>

using namespace std;

enum Cuaca {
    Cerah,
    Mendung,
    Hujan,
    Badai
};

enum GearKendaraan {
    Parkir,
    Maju,
    Mundur
};

enum Nilai {
    A,
    B,
    C,
    D,
    E
};

int main() {
    Cuaca cuacaHariIni = Hujan;
    GearKendaraan gearMobil = Maju;
    Nilai nilaiUjian = B;

    cout << "Cuaca hari ini: ";
    switch (cuacaHariIni) {
        case Cerah:
            cout << "Cerah";
            break;
        case Mendung:
            cout << "Mendung";
            break;
        case Hujan:
            cout << "Hujan";
            break;
        case Badai:
            cout << "Badai";
            break;
    }
    cout << endl;

    cout << "Gear mobil: ";
    switch (gearMobil) {
        case Parkir:
            cout << "Parkir";
            break;
        case Maju:
            cout << "Maju";
            break;
        case Mundur:
            cout << "Mundur";
            break;
    }
    cout << endl;

    cout << "Nilai ujian: ";
    switch (nilaiUjian) {
        case A:
            cout << "A";
            break;
        case B:
            cout << "B";
            break;
        case C:
            cout << "C";
            break;
        case D:
            cout << "D";
            break;
        case E:
            cout << "E";
            break;
    }
    cout << endl;

    return 0;
}