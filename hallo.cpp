#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama[5] = {"Ali", "Budi", "Citra", "Dina", "Eka"};

    cout << "Daftar nama:\n";
    for (int i = 0; i < 5; i++) {
        cout << nama[i] << endl;
    }

    return 0;
}


