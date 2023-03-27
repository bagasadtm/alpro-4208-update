#include <iostream>
#include <vector>

using namespace std;

// int arraySize(int arr[]) {
//      return sizeof(arr) / sizeof(int); // error, it's not a pointer
// }

int vectorSize(vector<int> v) {
    return v.size();
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    cout << "Size of array a: " << (sizeof(a) / sizeof(int)) << endl;
    // cout << "Size of array a: " << arraySize(a) << endl;

    vector<int> v = {1, 2, 3, 4, 5};
    cout << "Size of vector v: " << v.size() << endl;
    cout << "Size of vector v: " << vectorSize(v) << endl;

    return 0;
}