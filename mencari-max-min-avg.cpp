#include <iostream>

int main() {
    // Deklarasi variabel
    float a, b, c, max, min, avg;

    // Input nilai a, b, dan c
    std::cout << "Masukkan nilai a: ";
    std::cin >> a;

    std::cout << "Masukkan nilai b: ";
    std::cin >> b;

    std::cout << "Masukkan nilai c: ";
    std::cin >> c;

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
    std::cout << "Nilai maksimum: " << max << "\n";
    std::cout << "Nilai minimum: " << min << "\n";
    std::cout << "Rata-rata: " << avg << "\n";

    return 0;
}
