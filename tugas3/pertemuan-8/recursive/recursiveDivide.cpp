#include <iostream>

using namespace std;

int recursiveDivide(int a, int b) {
    if (a < b)
        return 0;
    return recursiveDivide(a - b, b) + 1;
}

int main() {
    int a, b;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    cout << "Hasil pembagian: " << recursiveDivide(a, b) << endl;
    return 0;
}