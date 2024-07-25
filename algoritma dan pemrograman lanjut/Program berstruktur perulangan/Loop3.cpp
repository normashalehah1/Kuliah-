#include <iostream>
using namespace std;

int main() {
    int bil, deret;
    cout << "Masukkan jumlah deret angka: ";
    cin >> deret;
    for(bil=1; bil<=deret; bil++) {
        cout << bil << " ";
    }
    return 0;
}
