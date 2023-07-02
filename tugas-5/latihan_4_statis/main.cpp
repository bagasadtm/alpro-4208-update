#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    int tahunLulus;
    string jurusan;
};

int main() {
    const int jumlahMahasiswa = 4;

    Mahasiswa mahasiswa[jumlahMahasiswa];

    mahasiswa[0].nim = "A11.2020.01234";
    mahasiswa[0].nama = "Andi";
    mahasiswa[0].jurusan = "Brodcasting";
    mahasiswa[0].tahunLulus = 2023;

    mahasiswa[1].nim = "A11.2020.01234";
    mahasiswa[1].nama = "Budi";
    mahasiswa[1].jurusan = "Sistem Informasi";
    mahasiswa[1].tahunLulus = 2013;

    mahasiswa[2].nim = "A11.2020.01234";
    mahasiswa[2].nama = "Ali";
    mahasiswa[2].jurusan = "DVK";
    mahasiswa[2].tahunLulus = 2003;

    mahasiswa[3].nim = "A11.2020.01234";
    mahasiswa[3].nama = "Siti";
    mahasiswa[3].jurusan = "Kesehatan";
    mahasiswa[3].tahunLulus = 1993;

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Data Mahasiswa " << i + 1 << ":" << endl;
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "Jurusan: " << mahasiswa[i].jurusan << endl;
        cout << "Tahun Lulus: " << mahasiswa[i].tahunLulus << endl;
        cout << endl;
    }

    return 0;
}