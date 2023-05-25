#include <iostream>

using namespace std;

int recursivePlus(int a, int b) {
    if (b == 0)
        return a;
    return recursivePlus(a, b - 1) + 1;
}

int main() {
    int a, b;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    cout << "Hasil penjumlahan: " << recursivePlus(a, b) << endl;
    return 0;
}