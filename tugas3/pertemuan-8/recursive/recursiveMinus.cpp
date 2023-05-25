#include <iostream>

using namespace std;

int recursiveMinus(int a, int b) {
    if (b == 0)
        return a;
    return recursiveMinus(a, b - 1) - 1;
}

int main() {
    int a, b;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    cout << "Hasil pengurangan: " << recursiveMinus(a, b) << endl;
    return 0;
}