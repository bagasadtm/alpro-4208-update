#include <iostream>

using namespace std;

int recursiveMultiple(int a, int b) {
    if (b == 0)
        return 0;
    return recursiveMultiple(a, b - 1) + a;
}

int main() {
    int a, b;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    cout << "Hasil perkalian: " << recursiveMultiple(a, b) << endl;
    return 0;
}