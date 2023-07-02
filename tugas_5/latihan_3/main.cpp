#include <iostream>

using namespace std;

typedef struct {
    double panjang;
    double lebar;
} PersegiPanjang;

typedef struct {
    double r;
} Lingkaran;

typedef struct {
    double r;
    double t;
} Kerucut;

typedef struct {
    double r;
} Bola;

double hitungLuasPersegiPanjang(const PersegiPanjang& pp) {
    return pp.panjang * pp.lebar;
}

double hitungLuasLingkaran(const Lingkaran& lingkaran) {
    return 22.0 / 7.0 * lingkaran.r * lingkaran.r;
}

double hitungVolumeKerucut(const Kerucut& kerucut) {
    return 1.0 / 3.0 * 22.0 / 7.0 * kerucut.r * kerucut.r * kerucut.t;
}

double hitungVolumeBola(const Bola& bola) {
    return 4.0 / 3.0 * 22.0 / 7.0 * bola.r * bola.r * bola.r;
}

int main() {
    PersegiPanjang pp;
    cout << "Masukan Panjang : ";
    cin >> pp.panjang;
    cout << "Masukan Lebar : ";
    cin >> pp.lebar;
    double luasPP = hitungLuasPersegiPanjang(pp);
    cout << "Luas persegi panjang: " << luasPP << endl;

    Lingkaran lingkaran;
    cout << "\nMasukan r : ";
    cin >> lingkaran.r;
    double luasL = hitungLuasLingkaran(lingkaran);
    cout << "Luas lingkaran: " << luasL << endl;

    Kerucut kerucut;
    cout << "\nMasukan r : ";
    cin >> kerucut.r;
    cout << "Masukkan Tinggi : ";
    cin >> kerucut.t;
    double volumeK = hitungVolumeKerucut(kerucut);
    cout << "Volume kerucut: " << volumeK << endl;

    Bola bola;
    cout << "\nMasukan r : ";
    cin >> bola.r;
    double volumeB = hitungVolumeBola(bola);
    cout << "Volume bola: " << volumeB << endl;

    return 0;
}