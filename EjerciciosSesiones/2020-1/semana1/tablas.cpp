// Blibliotecas
#include <iostream>

using namespace std;

int main() {
  for(int i = 1; i <= 42; i++) {
    for(int j = 1; j <= 10; j++) {
      // 1 x 4 = 4
      cout << i << " x " << j << " = " << (i*j) << endl;
    }
    // Indicador para separar las tablas
    cout << "-----------------------------------------" << endl;
  }

  return 0;
}
