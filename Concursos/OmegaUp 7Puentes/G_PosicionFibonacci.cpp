#include <bits/stdc++.h>
// https://omegaup.com/arena/problem/Posicion-Fibonacci/#problems
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(NULL);
typedef unsigned long long int ulli;


int main() {
	fastIO
	ulli n, f1 = 1, f2 = 1, aux;
	cin >> n;
	int cont = 3;
	bool encontrado = false;
	if(n == 1) {
		cout << 1 << endl;
	}
	else {
		while(f1 < n) {
			aux = f1;
			f1 = f1 + f2;
			f2 = aux;
			if(f1 == n) {
				encontrado = true;
				break;
			}
			cont++;
		}

		if(!encontrado) cout << -1 << endl;
		else cout << cont << endl;
	}


	return 0;
}
