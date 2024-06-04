#include <iostream>

using namespace std;

struct Mahasiswa {
  string nama;
  int nim;
  string jurusan;
  Mahasiswa *prev;
  Mahasiswa *next; 
};

int main() {
  Mahasiswa *node1, *node2, *node3, *node4;
  node1 = new Mahasiswa();
  node2 = new Mahasiswa();
  node3 = new Mahasiswa();
  node4 = new Mahasiswa();

  node1->nama = "norma";
  node1->nim = 230111091;
  node1->jurusan = "ilmu komputer";
  node1->prev = NULL; 
  node1->next = node2;

  node2->nama = "andi";
  node2->nim = 230111094;
  node2->jurusan = "teknik informatika";
  node2->prev = node1;
  node2->next = node3;

  node3->nama = "rudi";
  node3->nim = 230115092;
  node3->jurusan = "teknik komputer";
  node3->prev = node2;
  node3->next = node4;

  node4->nama = "budi";
  node4->nim = 230111093;
  node4->jurusan = "sistem informasi";
  node4->prev = node3;
  node4->next = NULL; 

  Mahasiswa *cur;
  cur = node1;

  while (cur != NULL) {
    cout << "Nama: " << cur->nama << ", NIM: " << cur->nim << ", Jurusan: " << cur->jurusan << endl;
    cur = cur->next;
  }

  return 0;
}
