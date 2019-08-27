#include <iostream>
// https://www.hackerrank.com/challenges/solve-me-first/problem
// Por David Betancourt Montellano
using namespace std;

int main(int argc, char const *argv[]) {
    int numero1, numero2;
    //cout << "Ingresa los números" << endl;
    cin >> numero1;
    cin >> numero2;
    // cin >> numero1 >> numero2;
    numero1 = numero1 + numero2;
    cout << numero1 << endl;
    return 0;
}
