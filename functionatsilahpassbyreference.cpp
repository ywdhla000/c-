#include <iostream>
using namespace std;

int penjumlahan(int &a, int &b) {
    return a + b;
}

int pengurangan(int &a, int &b) {
    return a - b;
}

int perkalian(int &a, int &b) {
    return a * b;
}

int main() {
    int x, y;

    cout << "Masukkan bilangan pertama: ";
    cin >> x;
    cout << "Masukkan bilangan kedua: ";
    cin >> y;

    cout << "Hasil penjumlahan: " << penjumlahan(x, y) << endl;
    cout << "Hasil pengurangan: " << pengurangan(x, y) << endl;
    cout << "Hasil perkalian: " << perkalian(x, y) << endl;


    return 0;
}