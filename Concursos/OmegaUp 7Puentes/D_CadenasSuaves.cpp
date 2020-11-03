#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string cadena;
    while(cin >> cadena) {
        int a[27] = {0};
        for (size_t i = 0; i < cadena.size(); i++) {
            a[cadena[i]-97]++;
        }
        int mayor = *max_element(a, a+27);
        cout << cadena.size() - mayor << endl;
    }
    return 0;
}
