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
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    Mahasiswa* mahasiswa = new Mahasiswa[jumlahMahasiswa];

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cin.ignore();
        cout << "Data Mahasiswa " << i + 1 << ":" << endl;

        cout << "NIM: ";
        getline(cin, mahasiswa[i].nim);

        cout << "Nama: ";
        getline(cin, mahasiswa[i].nama);

        cout << "Jurusan: ";
        getline(cin, mahasiswa[i].jurusan);

        cout << "Tahun Lulus: ";
        cin >> mahasiswa[i].tahunLulus;

        cout << endl;
    }

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Data Mahasiswa " << i + 1 << ":" << endl;
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "Jurusan: " << mahasiswa[i].jurusan << endl;
        cout << "Tahun Lulus: " << mahasiswa[i].tahunLulus << endl;
        cout << endl;
    }

    delete[] mahasiswa;

    return 0;
}