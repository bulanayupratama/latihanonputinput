#include <iostream>

using namespace std;

int main()
{
    int i;

    cout << "==== for ===" << endl;
    for(i=0 ; i<10; i++) {
        cout << "Perulangan ke " << i << endl;
    }

    int j = 0;
    char tambah = 'x';
    cout << "===== while ====="<< endl;
    while(tambah == 'x') {
        cout << "Perulangan ke " << endl;
        cout << "Apakah ingin nambah? (n/y) ";
        cin >> tambah;
        j++;
        cout << "perulangan ke " << j << endl;
    }
    return 0;
}
