#include <iostream>
// Programa que suma dos números
using namespace std;

int main(int argc, char const *argv[]) {
    float numero1, numero2;
    cout << "Ingresa los números" << endl;
    cin >> numero1;
    cin >> numero2;
    // cin >> numero1 >> numero2;
    numero1 = numero1 + numero2;
    cout << numero1 << endl;
    return 0;
}
