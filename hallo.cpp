#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama[5];

    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nama ke-" << i + 1 << ": ";
        getline(cin, nama[i]);
    }

    cout << "\nDaftar nama:\n";
    for (int i = 0; i < 5; i++) {
        cout << nama[i] << endl;
    }

    return 0;
}


