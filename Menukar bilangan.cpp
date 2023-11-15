#include <iostream>

using namespace std; 

int main() {
    // Deklarasi variabel
    int bilangan1, bilangan2, temp;

    // Input dua bilangan dari pengguna
    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    // Menukar nilai
    temp = bilangan1;
    bilangan1 = bilangan2;
    bilangan2 = temp;

    // Menampilkan hasil pertukaran
    cout << "Setelah pertukaran:\n";
    cout << "Bilangan pertama: " << bilangan1 << "\n";
    cout << "Bilangan kedua: " << bilangan2 << "\n";

    return 0;
}


