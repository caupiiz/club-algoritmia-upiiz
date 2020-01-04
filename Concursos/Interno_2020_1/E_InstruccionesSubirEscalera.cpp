#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    string piso = "*****";
    int cont = 5, cont2 = 4;
    cin >> n;

    do {
        cout << setfill(' ') << setw(cont) << piso << endl;
        cout << setfill(' ') << setw(cont2);
        cout << n;
        cout << "*" << endl;
        cont2 += 1;
        for (int i = 0; i < 4; i++) {
            cout << setfill(' ') << setw(cont2);
            cout << " *" << endl;
        }
        cont += 5;
        cont2 += 4;
    } while(--n);

    return 0;
}
