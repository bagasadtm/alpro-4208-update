#include <iostream>

using namespace std;

int tambah(int a, int b) {
    return a + b;
}

// sum array
int sum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int a, b;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << "Hasil: " << tambah(a, b) << endl;
    return 0;
}