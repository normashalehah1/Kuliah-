#include<iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string jurusan;
    Mahasiswa* next; // Tambahkan titik koma di akhir baris ini
};

int main() {
    Mahasiswa *node1, *node2, *node3;
    node1 = new Mahasiswa();
    node2 = new Mahasiswa();
    node3 = new Mahasiswa();
    
    node1->nama = "norma";
    node1->nim = "230111091"; // Nim seharusnya di node1 bukan node2
    node1->jurusan = "ilmu komputer"; // Jurusan seharusnya di node1 bukan node3
    node1->next = node2;

    node2->nama = "andi"; // Tambahkan data untuk node2
    node2->nim = "230111092";
    node2->jurusan = "teknik informatika";
    node2->next = node3;

    node3->nama = "budi"; // Tambahkan data untuk node3
    node3->nim = "230111093";
    node3->jurusan = "sistem informasi";
    node3->next = NULL;

    // Output untuk memeriksa apakah linked list terbentuk dengan benar
    Mahasiswa* current = node1;
    while (current != NULL) {
        cout << "Nama: " << current->nama << ", NIM: " << current->nim << ", Jurusan: " << current->jurusan << endl;
        current = current->next;
    }

    // Jangan lupa untuk membebaskan memori yang telah dialokasikan
    delete node1;
    delete node2;
    delete node3;

    return 0;
}
