#include <iostream>
#include <cstdlib>
#define D 6

using namespace std;

class Pat {
  private:
    int max;
    int A[D][D];
  public:
    Pat();
    void leer();
    int recorrer();
    ~Pat();
}Pattern;

Pat::Pat() {
  int max = 0;
}

void Pat::leer() {
  for (int i = 0; i < D; i++) {
    for (int j = 0; j < D; j++) {
      cin >> A[i][j];
    }
  }
}

int Pat::recorrer() {
  int aux = 0;
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      aux = 0;
      aux += A[i][j];
      aux += A[i][j+1];
      aux += A[i][j+2];
      aux += A[i+1][j+1];
      aux += A[i+2][j];
      aux += A[i+2][j+1];
      aux += A[i+2][j+2];
      if(aux > max) {
        max = aux;
        cout << max << endl;
      }
    }
  }
  return max;
}

Pat::~Pat() {
  for (int i = 0; i < D; i++) {
    for (int j = 0; j < D; j++) {
      A[i][j] = 0;
    }
  }
}

int main(int argc, char const *argv[]) {
  Pattern.leer();
  cout << Pattern.recorrer() << endl;
  return 0;
}


/*
-1 -1 0 -9 -2 -2
-2 -1 -6 -8 -2 -5
-1 -1 -1 -2 -3 -4
-1 -9 -2 -4 -4 -5
-7 -3 -3 -2 -9 -9
-1 -3 -1 -2 -4 -5
*/
