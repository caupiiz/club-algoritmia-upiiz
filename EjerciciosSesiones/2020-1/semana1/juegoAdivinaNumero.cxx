#include <bits/stdc++.h>

using namespace std;

int main() {
  int secretNumber, otherNumber;
  cout << "Ingresa el número secreto: ";
  cin >> secretNumber;
  system("cls"); // Windows
  system("clear"); // GNU/Linux
  // break;
  do {
    cout << "Prueba un número: ";
    cin >> otherNumber;
    if(otherNumber < secretNumber) cout << "Es mayor" << endl;
    else if(otherNumber > secretNumber) cout << "Es menor" << endl;
  } while(otherNumber != secretNumber);
  cout << "FELICIDADES" << endl;
  return 0;
}
