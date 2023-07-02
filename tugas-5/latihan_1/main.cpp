#include <iostream>
#include <iomanip>

#define _USE_MATH_DEFINES
#include <math.h>

/*
    TUGAS ALPRO 5 - STRUCT & POINTER

    Nama : Bagas Aditama H
    NIM : A11.2022.14322
*/

struct hitung {

public :

    float panjang;
    float lebar;
    float tinggi;
    float r; // Jari- Jari
    const double pi = M_PI;

public :

    float luas_persegi_panjang() {
        return panjang * lebar;
    }

    double luas_lingkaran() {
        return pi * r * r;
    }

    double volume_kerucut() {
        return (1.0/3.0)  * pi * pow(r, 2) * tinggi;
    }

    double volume_bola() {
        return (4.0/3.0) * pi * pow(r, 3);
    }

};

int main() {

    hitung x;

    std::cout << "Input Dalam Centimeter!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << "Masukan Panjang : ";
    std::cin >> x.panjang;
    std::cout << "Masukan Lebar : ";
    std::cin >> x.lebar;
    std::cout << "Masukan r : ";
    std::cin >> x.r;
    std::cout << "Masukkan Tinggi : ";
    std::cin >> x.tinggi;

    std::cout << "\nLuas Persegi Panjang : " << x.luas_persegi_panjang() << " cm" << std::endl;

    std::cout << "\nLuas Lingkaran : " << std::fixed << std::setprecision(1) << x.luas_lingkaran() << " cm" << std::endl;


    std::cout << "\nVolume Kerucut : " << x.volume_kerucut() << " cm" << std::endl;

    std::cout << "\nVolume Bola : " << x.volume_bola() << " cm" << std::endl;

    return 0;
}