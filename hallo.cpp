#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Jumlah nama: ";
    cin >> n;
    cin.ignore();

    string nama[n];
    for (int i = 0; i < n; i++) {
        cout << "Nama ke-" << i+1 << ": ";
        getline(cin, nama[i]);
    }

    cout << "\nDaftar nama:\n";
    for (int i = 0; i < n; i++)
        cout << nama[i] << endl;

    return 0;
}

