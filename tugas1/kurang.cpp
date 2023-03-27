#include <iostream>

using namespace std;

int kurang(int a, int b) {
    return a - b;
}

int main() {
    int a, b;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << "Hasil: " << kurang(a, b) << endl;
    return 0;
}