#include <bits/stdc++.h>

using namespace std; //biblioteca estandar de c++ para que las que la usen no ocupen


//Macros
#define watch(x) cout << (#x) << " es: " << x << endl;
//this code makes input and output more efficient
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//en este, va del 1 hasta el n, no es recomendable usar para arreglos
#define forn(i,a,b) for (int i = a; i <= b; i++) 
//en este si empieza del 0 hasta n-1
#define forzero(i,a,b) for (int i = a; i < b; i++) 

#define SQ(a) a*a
#define SQpro(a) (a)*(a)


//Type names
typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<long long int> vlli;
const lli MAX = 1e9+7;//primo mas grande que cabe en un int, int es 2^31 -1

//usar double en vez de float por más precision

int main(){

    fastIO

    

    //Hasta aqui es modulos


    //Desde aqui es el factorial de n, impreso modulo 10e9 + 7

    lli x = 1, n = 0, m = 10e9 + 7; 

    cin >> n;


    for (int i = 2; i <= n; i++) {
        x = (x * i ) % m;
    }
    
    cout << x % m << "\n";

    x = 1;

    forn(i,2,n) {
        //x = x * i;
        x *= i;
    }

    cout << x << "\n";
    cout << x % m << "\n";

    //probar con 201, 100 y luego con 8 xd


    
    //ojo con los macros, ejemplo:
    
    cout << SQ(3+3) << "\n";
    cout << SQpro(3+3) << "\n";
    
    

    
    cout << 3+3*3+3 << "\n"; // 15
    cout << (3+3)*(3+3) << "\n"; // 36
    

    return 0;
}
