#include <iostream>

using namespace std; 

int main() {
    // Deklarasi variabel
    float a, b, c, max, min, avg;

    // Input nilai a, b, dan c
    cout << "Masukkan nilai a: ";
    cin >> a;

    cout << "Masukkan nilai b: ";
    cin >> b;

    cout << "Masukkan nilai c: ";
    cin >> c;

    // Menentukan nilai maksimum
    if (a > b && a > c)
        max = a;
    else if (b > a && b > c)
        max = b;
    else
        max = c;

    // Menentukan nilai minimum
    if (a < b && a < c)
        min = a;
    else if (b < a && b < c)
        min = b;
    else
        min = c;

    // Menghitung rata-rata
    avg = (a + b + c) / 3.0;

    // Menampilkan hasil
    cout << "Nilai maksimum: " << max << "\n";
    cout << "Nilai minimum: " << min << "\n";
    cout << "Rata-rata: " << avg << "\n";

    
}
