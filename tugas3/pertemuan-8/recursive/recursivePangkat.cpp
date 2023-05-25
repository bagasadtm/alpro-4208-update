#include <iostream>

using namespace std;

int recursivePangkat(int a, int b) {
    if (b == 0)
        return 1;
    return recursivePangkat(a, b - 1) * a;
}

int main() {
    int a, b;
    cout << "Masukkan bilangan: ";
    cin >> a;
    cout << "Masukkan pangkat: ";
    cin >> b;
    cout << "Hasil pangkat: " << recursivePangkat(a, b) << endl;
    return 0;
}